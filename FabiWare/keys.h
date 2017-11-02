
#ifndef _KEYS_H_
#define _KEYS_H_

/** Sends a full string to the HID/BT Keyboard
 * 
 * This method is used to send a string to the keyboard.
 * 
 * @param writeKeystring string to be written
 **/ 
void KeyboardWrite( char * p1);


/** Sends a full string to the HID/BT Keyboard - with KEY_xxx constants
 * 
 * This method is used to send a string to the keyboard.
 * Used by AT KW (keyboard write)
 * It is possible to use KEY_XXX constants in this strings,
 * which will be seperated and pressed in addition
 * 
 * @param writeKeystring string to be written
 **/ 
void KeyboardWriteWithConstants(char * writeKeystring);

#endif
