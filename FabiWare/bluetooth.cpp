#include "bluetooth.h"

/** flag for attached BT module
 *  if != BTMODULE_NONE -> an active BT module is available 
 *  @see BTMODULE_NONE
 *  @see BTMODULE_HM10
 * **/
uint8_t btEnabled = BTMODULE_NONE;
uint8_t btButtonFlags = 0;

/** last access to a BT function, used to avoid mouse flooding */
uint32_t timestamp;

void btInit()
{
   //enable HM-10 serial interface ("real" UART)
   BTSerial.begin(57600);
   
   /** test if an HM-10 module with proper FW is attached */
   BTSerial.setTimeout(50);
   BTSerial.println("@@@");
   delay(10);
   while (BTSerial.available() > 0) BTSerial.read(); //flush
   BTSerial.println("S,ID");
   delay(10);
   String btid = BTSerial.readString();
   btid.trim();
   
   if(DebugOutput==1) {
      Serial.print(F("BT module version string: "));
      Serial.println(btid);
   }
   
   if(btid.startsWith("hidkbdmousev1")) {
      while (BTSerial.available() > 0) BTSerial.read();
      //BTSerial.println("SN,FABI");
      btEnabled = BTMODULE_HM10;
      if(DebugOutput == 1) Serial.println(F("Found Blueooth module, name: FABI"));
   }
   
   //if necessary, add other tests for different BT modules here
   
   //save timestamp
   timestamp = millis();
}

/**
 * send a Mouse report to the Bluetooth module
 * 
 * This method sends a HID report to a connected BT device via
 * the serial interface.
 * 
 * It is possible to:
 * -) move the mouse in 3 axis
 * -) press or release mouse buttons
 * 
 * If a parameter is not used, leave it to 0.
 * Attention: sending 0 for buttons means that all buttons are released.
 * 
 * There is one minor bug: it is not possible to move the cursor with
 * a value +10 for all axis. The origin is unknown, it was tested on 
 * a Nexus 7 device with Android 6.0.1.
 * As a workaround, a value of 10 is mapped to 11.
 * 
 * @param buttons Button mask
 * @param x Mouse coordinates, X axis
 * @param y Mouse coordinates, Y axis
 * @param z Mouse coordinates, Z axis
 * 
 * */
void btMUpdatereport(uint8_t buttons, int8_t x, int8_t y, int8_t z)
{
  int8_t X = x;
  int8_t Y = y;
  int8_t Z = z;
  
  //avoid flooding with a timestamp
  if((millis() - timestamp) < 2) delay(2);
  timestamp = millis();
  
  //workaround for not working +10 value:
  if(X == 10) X++;
  if(Y == 10) Y++;
  if(Z == 10) Z++;
  
  if(btEnabled != BTMODULE_NONE)
  {
    BTSerial.write('M');
    BTSerial.write(buttons);
    BTSerial.write(X);
    BTSerial.write(Y);
    BTSerial.write(Z); //TBD: mouse wheel ?!?
    BTSerial.write('\r');
    BTSerial.write('\n');
    
    if(DebugOutput == 1)
    {
      Serial.print("Sending mouse report: buttons:0x");
      Serial.print(buttons,HEX);
      Serial.print(" x:");
      Serial.print(X);
      Serial.print(" y:");
      Serial.print(Y);
      Serial.print(" z:");
      Serial.println(Z);
    }
  }
}

/**
 * Press a mouse button
 * 
 * This method activates a mouse button press by adding it
 * to the global button flags and sending a BT HID report.
 * By adding it to the global flags, the button remains pressed until
 * a btMRelease is sent.
 * 
 * The button flags are equal to the Mouse.h definition of Arduino:
 * MOUSE_LEFT  (1<<0)
 * MOUSE_RIGHT  (1<<1)
 * MOUSE_MIDDLE  (1<<2)
 * 
 * @see btButtonFlags
 * @see btMRelease
 * @see btMUpdatereport
 * 
 * @param buttons Button flags to be pressed
 * */
void btMPress(uint8_t buttons)
{
  btButtonFlags |= buttons;
  btMUpdatereport(btButtonFlags,0,0,0);
}

/**
 * Release a mouse button
 * 
 * This method deactivates a mouse button press by removing it
 * from the global button flags and sending a BT HID report.
 * 
 * The button flags are equal to the Mouse.h definition of Arduino:
 * MOUSE_LEFT  (1<<0)
 * MOUSE_RIGHT  (1<<1)
 * MOUSE_MIDDLE  (1<<2)
 * 
 * @see btButtonFlags
 * @see btMPress
 * @see btMUpdatereport
 * 
 * @param buttons Button flags to be released
 * */
void btMRelease(uint8_t buttons)
{
  btButtonFlags &= ~buttons;
  btMUpdatereport(btButtonFlags,0,0,0);
}

/**
 * test if a button is pressed
 * 
 * This method returns the current status of a given button (or 
 * a button mask).
 * 
 * @return true if pressed, false if not pressed
 * @param buttons Button/button-mask to test for
 * */
bool btMisPressed(uint8_t buttons)
{
  return btButtonFlags & buttons;
}

//TODO: flooding is a problem....
//Moving with AT MX / AT MY is working
void btMMove(int8_t x, int8_t y)
{
  int8_t z = 0;
  btMUpdatereport(btButtonFlags,x,y,z);
}

/** send a Keyboard report update
 * 
 * This methods sends an update command to the BT module,
 * which sends the report to the connected device
 * */
void btKUpdate(void)
{
  delay(2);
  BTSerial.write('K');
  BTSerial.write('X');
  BTSerial.write('\r');
  BTSerial.write('\n');
  delay(2);
}

/**
 * Press a keyboard key
 * 
 * This method acts similar to the Keyboard.press from
 * Arduino, but it sends the keycode via the Serial interface
 * to the Bluetooth module.
 * 
 * Keycodes should be the same as in the Arduino library, because
 * both are based on the HID profile.
 * 
 * @param k Keycode to be pressed
 * @see btKRelease
 * @see btKWrite
 * */
void btKPress(uint8_t k)
{
  if(btEnabled != BTMODULE_NONE)
  {
    BTSerial.write('K');
    BTSerial.write('D');
    BTSerial.write(k);
    BTSerial.write('\r');
    BTSerial.write('\n');
    
    btKUpdate();
    
    if(DebugOutput == 1)
    {
      Serial.print("BT key press: 0x");
      Serial.println(k,HEX);
    }
  }
}

void btLoop() {
  if(BTSerial.available() > 0)
  {
    Serial.print("BT: ");
    while (BTSerial.available() > 0) Serial.write(BTSerial.read());
    Serial.print('\n');
  }
}


/**
 * Release a keyboard key
 * 
 * This method acts similar to the Keyboard.release from
 * Arduino, but it sends the keycode via the Serial interface
 * to the Bluetooth module.
 * 
 * Keycodes should be the same as in the Arduino library, because
 * both are based on the HID profile.
 * 
 * @param k Keycode to be release
 * @see btKPress
 * @see btKWrite
 * */
void btKRelease(uint8_t k)
{
  if(btEnabled != BTMODULE_NONE)
  {
    BTSerial.write('K');
    BTSerial.write('U');
    BTSerial.write(k);
    BTSerial.write('\r');
    BTSerial.write('\n');
    
    btKUpdate();
    
    if(DebugOutput == 1)
    {
      Serial.print("BT key release: 0x");
      Serial.println(k,HEX);
    }
  }
}


/**
 * Write a character via the BT keyboard
 * 
 * This is simply a wrapper for btKPress and btKRelease.
 * The given key is pressed and released immediately afterwards.
 * 
 * If a string should be sent, use btKSend.
 * 
 * @see btKRelease
 * @see btKPress
 * @see btKSend
 * 
 * @param k Key to write
 * 
 * */
void btKWrite(uint8_t k)
{
  if(btEnabled != BTMODULE_NONE)
  {
    BTSerial.write('K');
    BTSerial.write('S');
    BTSerial.write(k);
    BTSerial.write('\r');
    BTSerial.write('\n');
    
    if(DebugOutput == 1)
    {
      Serial.print("BT key write: 0x");
      Serial.println(k,HEX);
    }
  }
}

/**
 * Send a text via the BT keyboard
 * 
 * Keycodes should be the same as in the Arduino library, because
 * both are based on the HID profile.
 * 
 * The btKWrite is working a little bit different:
 * The BT firmware supports a translation mode, where there is no
 * command interpreting. Instead, every character is sent directly as
 * HID report.
 * 
 * This is way faster, but there is no possibility to send anything but ASCII.
 * 
 * The switching is done via "$$$" for interpretation mode and "@@@"
 * for command mode.
 * 
 * @param string String to be sent to the device
 * @see btKRelease
 * @see btKWrite
 * */
void btKSend(char *string)
{
  uint16_t i = 0;
  
  //put module to translate mode
  BTSerial.write('$');
  BTSerial.write('$');
  BTSerial.write('$');
  
  //send as long as there is no string termination
  while(1)
  {
    if(*(string+i) == 0) break; //stop if \0 is detected
    BTSerial.write(*(string+i)); //send character
    i++;
    if(i%4) delay(20); //delay for 20ms every 4 characters (avoid missing characters)
  }
  
  //put module back to command mode
  BTSerial.write('@');
  BTSerial.write('@');
  BTSerial.write('@');
}


/**
 * Send a HID keyboard report to the BT module
 * 
 * Sending an 8byte HID report to the BT module.
 * Byte 0 contains the modifiers
 * Byte 1 is reserved
 * Bytes 2-7 contain keycodes
 * */
void btKHIDReport(uint8_t *report)
{
  //TBD: implement on BT module & test it
  BTSerial.write('K');
  BTSerial.write('S');
  for(uint8_t i = 0; i<=7; i++) BTSerial.write(*(report+i));
  BTSerial.write('\n');
}


void btKReleaseAll()
{
  return;
  
  //dirty solution, no better one available:
  //iterate all 256 possible keycodes and release it
  for(uint8_t i = 0; i<=255; i++)
  {
    BTSerial.print("KU");
    BTSerial.write(i);
    BTSerial.write('\n');
  }
}
