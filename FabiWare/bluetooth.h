#ifndef _BLUETOOTH_H_
#define _BLUETOOTH_H_

#include "fabi.h"

#define BTMOUSE_LEFT
#define BTMOUSE_MIDDLE
#define BTMOUSE_RIGHT

/** no attached BT module */
#define BTMODULE_NONE 0x00
/** define for Bluetooth Module HM-10 with custom FW */
#define BTMODULE_HM10 0x01 

/** select serial interface for Bluetooth module */
#define BTSerial Serial1

void btInit();

void btKReleaseAll();

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
void btKPress(uint8_t k);

/**
 * Send a HID keyboard report to the BT module
 * 
 * Sending an 8byte HID report to the BT module.
 * Byte 0 contains the modifiers
 * Byte 1 is reserved
 * Bytes 2-7 contain keycodes
 * */
void btKHIDReport(uint8_t *report);


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
void btKRelease(uint8_t k);


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
void btKSend(char *string);

void btLoop(void);

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
void btKWrite(uint8_t k);


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
void btMPress(uint8_t buttons);

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
void btMRelease(uint8_t buttons);

/**
 * test if a button is pressed
 * 
 * This method returns the current status of a given button (or 
 * a button mask).
 * 
 * @return true if pressed, false if not pressed
 * @param buttons Button/button-mask to test for
 * */
bool btMisPressed(uint8_t buttons);

void btMMove(int8_t x, int8_t y);

#endif /* _BLUETOOTH_H_ */
