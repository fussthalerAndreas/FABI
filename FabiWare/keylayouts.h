/* Teensyduino Core Library
 * http://www.pjrc.com/teensy/
 * Copyright (c) 2013 PJRC.COM, LLC.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * 1. The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * 2. If the Software is incorporated into a build system that allows
 * selection among a list of target devices, then similar target
 * devices manufactured by PJRC.COM must be included in the list of
 * target devices and selectable in the same manner.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef KEYLAYOUTS_H__
#define KEYLAYOUTS_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C"{
#endif

uint16_t get_keycode_ascii(uint8_t cpoint, uint8_t locale);
uint16_t get_keycode_iso8859(uint8_t cpoint, uint8_t locale);

  #define LAYOUT_US_ENGLISH               0x01
  #define LAYOUT_US_INTERNATIONAL         0x02
  #define LAYOUT_CANADIAN_FRENCH          0x10
  #define LAYOUT_CANADIAN_MULTILINGUAL    0x11
  #define LAYOUT_UNITED_KINGDOM	          0x12 
  #define LAYOUT_TURKISH                   0x13
  #define LAYOUT_PORTUGUESE_BRAZILIAN     0x14
  #define LAYOUT_PORTUGUESE               0x15
  #define LAYOUT_SPANISH_LATIN_AMERICA    0x16

  //#define LAYOUT_US_ENGLISH               0x01
  //#define LAYOUT_US_INTERNATIONAL         0x02
  #define LAYOUT_SPANISH                  0x20
  #define LAYOUT_DANISH                   0x21
  #define LAYOUT_FINNISH                  0x22
  #define LAYOUT_SWEDISH                  0x23
  #define LAYOUT_ICELANDIC                0x24
  #define LAYOUT_IRISH                    0x25
  #define LAYOUT_NORWEGIAN                0x26


  #define LAYOUT_FRENCH                   0x30
  #define LAYOUT_FRENCH_BELGIAN           0x31
  #define LAYOUT_FRENCH_SWISS             0x32
  #define LAYOUT_GERMAN                   0x33
  #define LAYOUT_GERMAN_MAC               0x34
  #define LAYOUT_GERMAN_SWISS             0x35
  #define LAYOUT_ITALIAN                  0x36
  #define LAYOUT_CZECH                    0x37

//not implemented:
//  #define LAYOUT_SERBIAN                  0x27





// http://en.wikipedia.org/wiki/Keyboard_layout


#define MODIFIERKEY_CTRL        ( 0x01 | 0xE000 )
#define MODIFIERKEY_SHIFT       ( 0x02 | 0xE000 )
#define MODIFIERKEY_ALT         ( 0x04 | 0xE000 )
#define MODIFIERKEY_GUI         ( 0x08 | 0xE000 )
#define MODIFIERKEY_LEFT_CTRL   ( 0x01 | 0xE000 )
#define MODIFIERKEY_LEFT_SHIFT  ( 0x02 | 0xE000 )
#define MODIFIERKEY_LEFT_ALT    ( 0x04 | 0xE000 )
#define MODIFIERKEY_LEFT_GUI    ( 0x08 | 0xE000 )
#define MODIFIERKEY_RIGHT_CTRL  ( 0x10 | 0xE000 )
#define MODIFIERKEY_RIGHT_SHIFT ( 0x20 | 0xE000 )
#define MODIFIERKEY_RIGHT_ALT   ( 0x40 | 0xE000 )
#define MODIFIERKEY_RIGHT_GUI   ( 0x80 | 0xE000 )

#define KEY_SYSTEM_POWER_DOWN   ( 0x81 | 0xE200 )
#define KEY_SYSTEM_SLEEP        ( 0x82 | 0xE200 )
#define KEY_SYSTEM_WAKE_UP      ( 0x83 | 0xE200 )

#define KEY_MEDIA_PLAY          ( 0xB0 | 0xE400 )
#define KEY_MEDIA_PAUSE         ( 0xB1 | 0xE400 )
#define KEY_MEDIA_RECORD        ( 0xB2 | 0xE400 )
#define KEY_MEDIA_FAST_FORWARD  ( 0xB3 | 0xE400 )
#define KEY_MEDIA_REWIND        ( 0xB4 | 0xE400 )
#define KEY_MEDIA_NEXT_TRACK    ( 0xB5 | 0xE400 )
#define KEY_MEDIA_PREV_TRACK    ( 0xB6 | 0xE400 )
#define KEY_MEDIA_STOP          ( 0xB7 | 0xE400 )
#define KEY_MEDIA_EJECT         ( 0xB8 | 0xE400 )
#define KEY_MEDIA_RANDOM_PLAY   ( 0xB0 | 0xE400 )
#define KEY_MEDIA_PLAY_PAUSE    ( 0xCD | 0xE400 )
#define KEY_MEDIA_PLAY_SKIP     ( 0xCE | 0xE400 )
#define KEY_MEDIA_MUTE          ( 0xE2 | 0xE400 )
#define KEY_MEDIA_VOLUME_INC    ( 0xE9 | 0xE400 )
#define KEY_MEDIA_VOLUME_DEC    ( 0xEA | 0xE400 )

#define KEY_A                   (   4  | 0xF000 )
#define KEY_B                   (   5  | 0xF000 )
#define KEY_C                   (   6  | 0xF000 )
#define KEY_D                   (   7  | 0xF000 )
#define KEY_E                   (   8  | 0xF000 )
#define KEY_F                   (   9  | 0xF000 )
#define KEY_G                   (  10  | 0xF000 )
#define KEY_H                   (  11  | 0xF000 )
#define KEY_I                   (  12  | 0xF000 )
#define KEY_J                   (  13  | 0xF000 )
#define KEY_K                   (  14  | 0xF000 )
#define KEY_L                   (  15  | 0xF000 )
#define KEY_M                   (  16  | 0xF000 )
#define KEY_N                   (  17  | 0xF000 )
#define KEY_O                   (  18  | 0xF000 )
#define KEY_P                   (  19  | 0xF000 )
#define KEY_Q                   (  20  | 0xF000 )
#define KEY_R                   (  21  | 0xF000 )
#define KEY_S                   (  22  | 0xF000 )
#define KEY_T                   (  23  | 0xF000 )
#define KEY_U                   (  24  | 0xF000 )
#define KEY_V                   (  25  | 0xF000 )
#define KEY_W                   (  26  | 0xF000 )
#define KEY_X                   (  27  | 0xF000 )
#define KEY_Y                   (  28  | 0xF000 )
#define KEY_Z                   (  29  | 0xF000 )
#define KEY_1                   (  30  | 0xF000 )
#define KEY_2                   (  31  | 0xF000 )
#define KEY_3                   (  32  | 0xF000 )
#define KEY_4                   (  33  | 0xF000 )
#define KEY_5                   (  34  | 0xF000 )
#define KEY_6                   (  35  | 0xF000 )
#define KEY_7                   (  36  | 0xF000 )
#define KEY_8                   (  37  | 0xF000 )
#define KEY_9                   (  38  | 0xF000 )
#define KEY_0                   (  39  | 0xF000 )
#define KEY_ENTER               (  40  | 0xF000 )
#define KEY_ESC                 (  41  | 0xF000 )
#define KEY_BACKSPACE           (  42  | 0xF000 )
#define KEY_TAB                 (  43  | 0xF000 )
#define KEY_SPACE               (  44  | 0xF000 )
#define KEY_MINUS               (  45  | 0xF000 )
#define KEY_EQUAL               (  46  | 0xF000 )
#define KEY_LEFT_BRACE          (  47  | 0xF000 )
#define KEY_RIGHT_BRACE         (  48  | 0xF000 )
#define KEY_BACKSLASH           (  49  | 0xF000 )
#define KEY_NON_US_NUM          (  50  | 0xF000 )
#define KEY_SEMICOLON           (  51  | 0xF000 )
#define KEY_QUOTE               (  52  | 0xF000 )
#define KEY_TILDE               (  53  | 0xF000 )
#define KEY_COMMA               (  54  | 0xF000 )
#define KEY_PERIOD              (  55  | 0xF000 )
#define KEY_SLASH               (  56  | 0xF000 )
#define KEY_CAPS_LOCK           (  57  | 0xF000 )
#define KEY_F1                  (  58  | 0xF000 )
#define KEY_F2                  (  59  | 0xF000 )
#define KEY_F3                  (  60  | 0xF000 )
#define KEY_F4                  (  61  | 0xF000 )
#define KEY_F5                  (  62  | 0xF000 )
#define KEY_F6                  (  63  | 0xF000 )
#define KEY_F7                  (  64  | 0xF000 )
#define KEY_F8                  (  65  | 0xF000 )
#define KEY_F9                  (  66  | 0xF000 )
#define KEY_F10                 (  67  | 0xF000 )
#define KEY_F11                 (  68  | 0xF000 )
#define KEY_F12                 (  69  | 0xF000 )
#define KEY_PRINTSCREEN         (  70  | 0xF000 )
#define KEY_SCROLL_LOCK         (  71  | 0xF000 )
#define KEY_PAUSE               (  72  | 0xF000 )
#define KEY_INSERT              (  73  | 0xF000 )
#define KEY_HOME                (  74  | 0xF000 )
#define KEY_PAGE_UP             (  75  | 0xF000 )
#define KEY_DELETE              (  76  | 0xF000 )
#define KEY_END                 (  77  | 0xF000 )
#define KEY_PAGE_DOWN           (  78  | 0xF000 )
#define KEY_RIGHT               (  79  | 0xF000 )
#define KEY_LEFT                (  80  | 0xF000 )
#define KEY_DOWN                (  81  | 0xF000 )
#define KEY_UP                  (  82  | 0xF000 )
#define KEY_NUM_LOCK            (  83  | 0xF000 )
#define KEYPAD_SLASH            (  84  | 0xF000 )
#define KEYPAD_ASTERIX          (  85  | 0xF000 )
#define KEYPAD_MINUS            (  86  | 0xF000 )
#define KEYPAD_PLUS             (  87  | 0xF000 )
#define KEYPAD_ENTER            (  88  | 0xF000 )
#define KEYPAD_1                (  89  | 0xF000 )
#define KEYPAD_2                (  90  | 0xF000 )
#define KEYPAD_3                (  91  | 0xF000 )
#define KEYPAD_4                (  92  | 0xF000 )
#define KEYPAD_5                (  93  | 0xF000 )
#define KEYPAD_6                (  94  | 0xF000 )
#define KEYPAD_7                (  95  | 0xF000 )
#define KEYPAD_8                (  96  | 0xF000 )
#define KEYPAD_9                (  97  | 0xF000 )
#define KEYPAD_0                (  98  | 0xF000 )
#define KEYPAD_PERIOD           (  99  | 0xF000 )
#define KEY_NON_US_BS           ( 100  | 0xF000 )
#define KEY_MENU        	( 101  | 0xF000 )
#define KEY_F13                 ( 104  | 0xF000 )
#define KEY_F14                 ( 105  | 0xF000 )
#define KEY_F15                 ( 106  | 0xF000 )
#define KEY_F16                 ( 107  | 0xF000 )
#define KEY_F17                 ( 108  | 0xF000 )
#define KEY_F18                 ( 109  | 0xF000 )
#define KEY_F19                 ( 110  | 0xF000 )
#define KEY_F20                 ( 111  | 0xF000 )
#define KEY_F21                 ( 112  | 0xF000 )
#define KEY_F22                 ( 113  | 0xF000 )
#define KEY_F23                 ( 114  | 0xF000 )
#define KEY_F24                 ( 115  | 0xF000 )

// for compatibility with Leonardo's slightly different names
#define KEY_UP_ARROW	KEY_UP
#define KEY_DOWN_ARROW	KEY_DOWN
#define KEY_LEFT_ARROW	KEY_LEFT
#define KEY_RIGHT_ARROW	KEY_RIGHT
#define KEY_RETURN	KEY_ENTER
#define KEY_LEFT_CTRL	MODIFIERKEY_LEFT_CTRL
#define KEY_LEFT_SHIFT	MODIFIERKEY_LEFT_SHIFT
#define KEY_LEFT_ALT	MODIFIERKEY_LEFT_ALT
#define KEY_LEFT_GUI	MODIFIERKEY_LEFT_GUI
#define KEY_RIGHT_CTRL	MODIFIERKEY_RIGHT_CTRL
#define KEY_RIGHT_SHIFT	MODIFIERKEY_RIGHT_SHIFT
#define KEY_RIGHT_ALT	MODIFIERKEY_RIGHT_ALT
#define KEY_RIGHT_GUI	MODIFIERKEY_RIGHT_GUI

//masks
#define SHIFT_MASK		  0x0040
#define ALTGR_MASK		  0x0080
#define DEADKEYS_MASK   0x0700
#define CIRCUMFLEX_BITS 0x0100
#define KEYCODE_MASK    0x07FF
#define RCTRL_MASK		0x0800

//special masks, individual for a locale
#define SR_DEADKEYS_MASK		0x0F00
#define CZ_DEADKEYS_MASK		0x0F00
#define IR_DEADKEYS_MASK		0x0300
#define DE_CIRCUMFLEX_BITS		  0x0300
#define DEMAC_CIRCUMFLEX_BITS		0x0300
#define SR_CIRCUMFLEX_BITS		  0x0300
//#define CZ_CIRCUMFLEX_BITS	0x0400

#define US_KEYCODE_MASK		0x007F
#define KEYCODE_MASK_FF   0x00FF
#define KEYCODE_MASK_FFF   0x0FFF
#define KEYCODE_MASK_3FF   0x03FF

// Everything below this line is not intended for use in "normal" programs.
// These private symbols populate lookup tables, which are used to translate
// ascii and UTF8 unicode into keystroke sequences.

#define US_ASCII_20	KEY_SPACE				// 32  
#define US_ASCII_21	KEY_1 + SHIFT_MASK			// 33 !
#define US_ASCII_22	KEY_QUOTE + SHIFT_MASK			// 34 "
#define US_ASCII_23	KEY_3 + SHIFT_MASK			// 35 #
#define US_ASCII_24	KEY_4 + SHIFT_MASK			// 36 $
#define US_ASCII_25	KEY_5 + SHIFT_MASK			// 37 %
#define US_ASCII_26	KEY_7 + SHIFT_MASK			// 38 &
#define US_ASCII_27	KEY_QUOTE				// 39 '
#define US_ASCII_28	KEY_9 + SHIFT_MASK			// 40 (
#define US_ASCII_29	KEY_0 + SHIFT_MASK			// 41 )
#define US_ASCII_2A	KEY_8 + SHIFT_MASK			// 42 *
#define US_ASCII_2B	KEY_EQUAL + SHIFT_MASK			// 43 +
#define US_ASCII_2C	KEY_COMMA				// 44 ,
#define US_ASCII_2D	KEY_MINUS				// 45 -
#define US_ASCII_2E	KEY_PERIOD				// 46 .
#define US_ASCII_2F	KEY_SLASH				// 47 /
#define US_ASCII_30	KEY_0					// 48 0
#define US_ASCII_31	KEY_1					// 49 1
#define US_ASCII_32	KEY_2					// 50 2
#define US_ASCII_33	KEY_3					// 51 3
#define US_ASCII_34	KEY_4					// 52 4
#define US_ASCII_35	KEY_5					// 53 5
#define US_ASCII_36	KEY_6					// 54 6
#define US_ASCII_37	KEY_7					// 55 7
#define US_ASCII_38	KEY_8					// 55 8
#define US_ASCII_39	KEY_9					// 57 9
#define US_ASCII_3A	KEY_SEMICOLON + SHIFT_MASK		// 58 :
#define US_ASCII_3B	KEY_SEMICOLON				// 59 ;
#define US_ASCII_3C	KEY_COMMA + SHIFT_MASK			// 60 <
#define US_ASCII_3D	KEY_EQUAL				// 61 =
#define US_ASCII_3E	KEY_PERIOD + SHIFT_MASK			// 62 >
#define US_ASCII_3F	KEY_SLASH + SHIFT_MASK			// 63 ?
#define US_ASCII_40	KEY_2 + SHIFT_MASK			// 64 @
#define US_ASCII_41	KEY_A + SHIFT_MASK			// 65 A
#define US_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define US_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define US_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define US_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define US_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define US_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define US_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define US_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define US_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define US_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define US_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define US_ASCII_4D	KEY_M + SHIFT_MASK			// 77 M
#define US_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define US_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define US_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define US_ASCII_51	KEY_Q + SHIFT_MASK			// 81 Q
#define US_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define US_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define US_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define US_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define US_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define US_ASCII_57	KEY_W + SHIFT_MASK			// 87 W
#define US_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define US_ASCII_59	KEY_Y + SHIFT_MASK			// 89 Y
#define US_ASCII_5A	KEY_Z + SHIFT_MASK			// 90 Z
#define US_ASCII_5B	KEY_LEFT_BRACE				// 91 [
#define US_ASCII_5C	KEY_BACKSLASH				// 92
#define US_ASCII_5D	KEY_RIGHT_BRACE				// 93 ]
#define US_ASCII_5E	KEY_6 + SHIFT_MASK			// 94 ^
#define US_ASCII_5F	KEY_MINUS + SHIFT_MASK			// 95 _
#define US_ASCII_60	KEY_TILDE				// 96 `
#define US_ASCII_61	KEY_A					// 97 a
#define US_ASCII_62	KEY_B					// 98 b
#define US_ASCII_63	KEY_C					// 99 c
#define US_ASCII_64	KEY_D					// 100 d
#define US_ASCII_65	KEY_E					// 101 e
#define US_ASCII_66	KEY_F					// 102 f
#define US_ASCII_67	KEY_G					// 103 g
#define US_ASCII_68	KEY_H					// 104 h
#define US_ASCII_69	KEY_I					// 105 i
#define US_ASCII_6A	KEY_J					// 106 j
#define US_ASCII_6B	KEY_K					// 107 k
#define US_ASCII_6C	KEY_L					// 108 l
#define US_ASCII_6D	KEY_M					// 109 m
#define US_ASCII_6E	KEY_N					// 110 n
#define US_ASCII_6F	KEY_O					// 111 o
#define US_ASCII_70	KEY_P					// 112 p
#define US_ASCII_71	KEY_Q					// 113 q
#define US_ASCII_72	KEY_R					// 114 r
#define US_ASCII_73	KEY_S					// 115 s
#define US_ASCII_74	KEY_T					// 116 t
#define US_ASCII_75	KEY_U					// 117 u
#define US_ASCII_76	KEY_V					// 118 v
#define US_ASCII_77	KEY_W					// 119 w
#define US_ASCII_78	KEY_X					// 120 x
#define US_ASCII_79	KEY_Y					// 121 y
#define US_ASCII_7A	KEY_Z					// 122 z
#define US_ASCII_7B	KEY_LEFT_BRACE + SHIFT_MASK		// 123 {
#define US_ASCII_7C	KEY_BACKSLASH + SHIFT_MASK		// 124 |
#define US_ASCII_7D	KEY_RIGHT_BRACE + SHIFT_MASK		// 125 }
#define US_ASCII_7E	KEY_TILDE + SHIFT_MASK			// 126 ~
#define US_ASCII_7F	KEY_BACKSPACE				// 127


#define USINT_ACUTE_ACCENT_BITS	0x0200
#define USINT_GRAVE_ACCENT_BITS	0x0300
#define USINT_TILDE_BITS		0x0400
#define USINT_DIAERESIS_BITS		0x0500
#define USINT_KEYCODE_TYPE		uint16_t
#define USINT_DEADKEY_CIRCUMFLEX	KEY_6 + SHIFT_MASK
#define USINT_DEADKEY_ACUTE_ACCENT	KEY_QUOTE
#define USINT_DEADKEY_GRAVE_ACCENT	KEY_TILDE
#define USINT_DEADKEY_TILDE		KEY_TILDE + SHIFT_MASK
#define USINT_DEADKEY_DIAERESIS	KEY_QUOTE + SHIFT_MASK

#define USINT_ASCII_20	KEY_SPACE				// 32  
#define USINT_ASCII_21	KEY_1 + SHIFT_MASK			// 33 !
#define USINT_ASCII_22	USINT_DIAERESIS_BITS + KEY_SPACE		// 34 "
#define USINT_ASCII_23	KEY_3 + SHIFT_MASK			// 35 #
#define USINT_ASCII_24	KEY_4 + SHIFT_MASK			// 36 $
#define USINT_ASCII_25	KEY_5 + SHIFT_MASK			// 37 %
#define USINT_ASCII_26	KEY_7 + SHIFT_MASK			// 38 &
#define USINT_ASCII_27	USINT_ACUTE_ACCENT_BITS + KEY_SPACE		// 39 '
#define USINT_ASCII_28	KEY_9 + SHIFT_MASK			// 40 (
#define USINT_ASCII_29	KEY_0 + SHIFT_MASK			// 41 )
#define USINT_ASCII_2A	KEY_8 + SHIFT_MASK			// 42 *
#define USINT_ASCII_2B	KEY_EQUAL + SHIFT_MASK			// 43 +
#define USINT_ASCII_2C	KEY_COMMA				// 44 ,
#define USINT_ASCII_2D	KEY_MINUS				// 45 -
#define USINT_ASCII_2E	KEY_PERIOD				// 46 .
#define USINT_ASCII_2F	KEY_SLASH				// 47 /
#define USINT_ASCII_30	KEY_0					// 48 0
#define USINT_ASCII_31	KEY_1					// 49 1
#define USINT_ASCII_32	KEY_2					// 50 2
#define USINT_ASCII_33	KEY_3					// 51 3
#define USINT_ASCII_34	KEY_4					// 52 4
#define USINT_ASCII_35	KEY_5					// 53 5
#define USINT_ASCII_36	KEY_6					// 54 6
#define USINT_ASCII_37	KEY_7					// 55 7
#define USINT_ASCII_38	KEY_8					// 55 8
#define USINT_ASCII_39	KEY_9					// 57 9
#define USINT_ASCII_3A	KEY_SEMICOLON + SHIFT_MASK		// 58 :
#define USINT_ASCII_3B	KEY_SEMICOLON				// 59 ;
#define USINT_ASCII_3C	KEY_COMMA + SHIFT_MASK			// 60 <
#define USINT_ASCII_3D	KEY_EQUAL				// 61 =
#define USINT_ASCII_3E	KEY_PERIOD + SHIFT_MASK			// 62 >
#define USINT_ASCII_3F	KEY_SLASH + SHIFT_MASK			// 63 ?
#define USINT_ASCII_40	KEY_2 + SHIFT_MASK			// 64 @
#define USINT_ASCII_41	KEY_A + SHIFT_MASK			// 65 A
#define USINT_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define USINT_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define USINT_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define USINT_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define USINT_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define USINT_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define USINT_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define USINT_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define USINT_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define USINT_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define USINT_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define USINT_ASCII_4D	KEY_M + SHIFT_MASK			// 77 M
#define USINT_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define USINT_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define USINT_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define USINT_ASCII_51	KEY_Q + SHIFT_MASK			// 81 Q
#define USINT_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define USINT_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define USINT_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define USINT_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define USINT_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define USINT_ASCII_57	KEY_W + SHIFT_MASK			// 87 W
#define USINT_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define USINT_ASCII_59	KEY_Y + SHIFT_MASK			// 89 Y
#define USINT_ASCII_5A	KEY_Z + SHIFT_MASK			// 90 Z
#define USINT_ASCII_5B	KEY_LEFT_BRACE				// 91 [
#define USINT_ASCII_5C	KEY_BACKSLASH				// 92
#define USINT_ASCII_5D	KEY_RIGHT_BRACE				// 93 ]
#define USINT_ASCII_5E	CIRCUMFLEX_BITS + KEY_SPACE		// 94 ^
#define USINT_ASCII_5F	KEY_MINUS + SHIFT_MASK			// 95 _
#define USINT_ASCII_60	USINT_GRAVE_ACCENT_BITS + KEY_SPACE		// 96 `
#define USINT_ASCII_61	KEY_A					// 97 a
#define USINT_ASCII_62	KEY_B					// 98 b
#define USINT_ASCII_63	KEY_C					// 99 c
#define USINT_ASCII_64	KEY_D					// 100 d
#define USINT_ASCII_65	KEY_E					// 101 e
#define USINT_ASCII_66	KEY_F					// 102 f
#define USINT_ASCII_67	KEY_G					// 103 g
#define USINT_ASCII_68	KEY_H					// 104 h
#define USINT_ASCII_69	KEY_I					// 105 i
#define USINT_ASCII_6A	KEY_J					// 106 j
#define USINT_ASCII_6B	KEY_K					// 107 k
#define USINT_ASCII_6C	KEY_L					// 108 l
#define USINT_ASCII_6D	KEY_M					// 109 m
#define USINT_ASCII_6E	KEY_N					// 110 n
#define USINT_ASCII_6F	KEY_O					// 111 o
#define USINT_ASCII_70	KEY_P					// 112 p
#define USINT_ASCII_71	KEY_Q					// 113 q
#define USINT_ASCII_72	KEY_R					// 114 r
#define USINT_ASCII_73	KEY_S					// 115 s
#define USINT_ASCII_74	KEY_T					// 116 t
#define USINT_ASCII_75	KEY_U					// 117 u
#define USINT_ASCII_76	KEY_V					// 118 v
#define USINT_ASCII_77	KEY_W					// 119 w
#define USINT_ASCII_78	KEY_X					// 120 x
#define USINT_ASCII_79	KEY_Y					// 121 y
#define USINT_ASCII_7A	KEY_Z					// 122 z
#define USINT_ASCII_7B	KEY_LEFT_BRACE + SHIFT_MASK		// 123 {
#define USINT_ASCII_7C	KEY_BACKSLASH + SHIFT_MASK		// 124 |
#define USINT_ASCII_7D	KEY_RIGHT_BRACE + SHIFT_MASK		// 125 }
#define USINT_ASCII_7E	USINT_TILDE_BITS + KEY_SPACE			// 126 ~
#define USINT_ASCII_7F	KEY_BACKSPACE				// 127
#define USINT_ISO_8859_1_A0	KEY_SPACE				// 160       Nonbreakng Space
#define USINT_ISO_8859_1_A1	KEY_1 + ALTGR_MASK			// 161 ¡     Inverted Exclamation
#define USINT_ISO_8859_1_A2	KEY_C + ALTGR_MASK + SHIFT_MASK		// 162 ¢     Cent SIGN
#define USINT_ISO_8859_1_A3	KEY_4 + ALTGR_MASK + SHIFT_MASK		// 163 £     Pound Sign
#define USINT_ISO_8859_1_A4	KEY_4 + ALTGR_MASK			// 164 ¤     Currency or Euro Sign
#define USINT_ISO_8859_1_A5	KEY_MINUS + ALTGR_MASK			// 165 ¥     YEN SIGN
#define USINT_ISO_8859_1_A6	KEY_BACKSLASH + ALTGR_MASK + SHIFT_MASK	// 166 ¦     BROKEN BAR			??
#define USINT_ISO_8859_1_A7	KEY_S + ALTGR_MASK + SHIFT_MASK		// 167 §     SECTION SIGN
#define USINT_ISO_8859_1_A8	KEY_QUOTE + ALTGR_MASK + SHIFT_MASK	// 168 ¨     DIAERESIS
#define USINT_ISO_8859_1_A9	KEY_C + ALTGR_MASK			// 169 ©     COPYRIGHT SIGN
#define USINT_ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define USINT_ISO_8859_1_AB	KEY_LEFT_BRACE + ALTGR_MASK		// 171 «     LEFT DOUBLE ANGLE QUOTE
#define USINT_ISO_8859_1_AC	KEY_BACKSLASH + ALTGR_MASK		// 172 ¬     NOT SIGN			??
#define USINT_ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define USINT_ISO_8859_1_AE	KEY_R + ALTGR_MASK			// 174 ®     REGISTERED SIGN
#define USINT_ISO_8859_1_AF	0					// 175 ¯     MACRON
#define USINT_ISO_8859_1_B0	KEY_SEMICOLON + ALTGR_MASK + SHIFT_MASK	// 176 °     DEGREE SIGN
#define USINT_ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define USINT_ISO_8859_1_B2	KEY_2 + ALTGR_MASK			// 178 ²     SUPERSCRIPT TWO
#define USINT_ISO_8859_1_B3	KEY_3 + ALTGR_MASK			// 179 ³     SUPERSCRIPT THREE
#define USINT_ISO_8859_1_B4	KEY_QUOTE + ALTGR_MASK			// 180 ´     ACUTE ACCENT
#define USINT_ISO_8859_1_B5	KEY_M + ALTGR_MASK			// 181 µ     MICRO SIGN
#define USINT_ISO_8859_1_B6	KEY_SEMICOLON + ALTGR_MASK		// 182 ¶     PILCROW SIGN
#define USINT_ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define USINT_ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define USINT_ISO_8859_1_B9	KEY_1 + ALTGR_MASK + SHIFT_MASK		// 185 ¹     SUPERSCRIPT ONE
#define USINT_ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define USINT_ISO_8859_1_BB	KEY_RIGHT_BRACE + ALTGR_MASK		// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define USINT_ISO_8859_1_BC	KEY_6 + ALTGR_MASK			// 188 ¼     FRACTION ONE QUARTER
#define USINT_ISO_8859_1_BD	KEY_7 + ALTGR_MASK			// 189 ½     FRACTION ONE HALF
#define USINT_ISO_8859_1_BE	KEY_8 + ALTGR_MASK			// 190 ¾     FRACTION THREE QUARTERS
#define USINT_ISO_8859_1_BF	KEY_SLASH + ALTGR_MASK			// 191 ¿     INVERTED QUESTION MARK
#define USINT_ISO_8859_1_C0	USINT_GRAVE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define USINT_ISO_8859_1_C1	KEY_A + ALTGR_MASK + SHIFT_MASK		// 193 Á     A ACUTE
#define USINT_ISO_8859_1_C2	CIRCUMFLEX_BITS	+ KEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define USINT_ISO_8859_1_C3	USINT_TILDE_BITS + KEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define USINT_ISO_8859_1_C4	KEY_Q + ALTGR_MASK + SHIFT_MASK		// 196 Ä     A DIAERESIS
#define USINT_ISO_8859_1_C5	KEY_W + ALTGR_MASK + SHIFT_MASK		// 197 Å     A RING ABOVE
#define USINT_ISO_8859_1_C6	KEY_Z + ALTGR_MASK + SHIFT_MASK		// 198 Æ     AE
#define USINT_ISO_8859_1_C7	KEY_COMMA + ALTGR_MASK + SHIFT_MASK	// 199 Ç     C CEDILLA
#define USINT_ISO_8859_1_C8	USINT_GRAVE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define USINT_ISO_8859_1_C9	KEY_E + ALTGR_MASK + SHIFT_MASK		// 201 É     E ACUTE
#define USINT_ISO_8859_1_CA	CIRCUMFLEX_BITS + KEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define USINT_ISO_8859_1_CB	USINT_DIAERESIS_BITS + KEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define USINT_ISO_8859_1_CC	USINT_GRAVE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define USINT_ISO_8859_1_CD	KEY_I + ALTGR_MASK + SHIFT_MASK		// 205 Í     I ACUTE
#define USINT_ISO_8859_1_CE	CIRCUMFLEX_BITS + KEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define USINT_ISO_8859_1_CF	USINT_DIAERESIS_BITS + KEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define USINT_ISO_8859_1_D0	KEY_D + ALTGR_MASK + SHIFT_MASK		// 208 Ð     ETH
#define USINT_ISO_8859_1_D1	KEY_N + ALTGR_MASK + SHIFT_MASK		// 209 Ñ     N TILDE
#define USINT_ISO_8859_1_D2	USINT_GRAVE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define USINT_ISO_8859_1_D3	KEY_O + ALTGR_MASK + SHIFT_MASK		// 211 Ó     O ACUTE
#define USINT_ISO_8859_1_D4	CIRCUMFLEX_BITS + KEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define USINT_ISO_8859_1_D5	USINT_TILDE_BITS + KEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define USINT_ISO_8859_1_D6	KEY_P + ALTGR_MASK + SHIFT_MASK		// 214 Ö     O DIAERESIS
#define USINT_ISO_8859_1_D7	KEY_EQUAL + ALTGR_MASK			// 215 ×     MULTIPLICATION
#define USINT_ISO_8859_1_D8	KEY_L + ALTGR_MASK + SHIFT_MASK		// 216 Ø     O STROKE
#define USINT_ISO_8859_1_D9	USINT_GRAVE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define USINT_ISO_8859_1_DA	KEY_U + ALTGR_MASK + SHIFT_MASK		// 218 Ú     U ACUTE
#define USINT_ISO_8859_1_DB	CIRCUMFLEX_BITS + KEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define USINT_ISO_8859_1_DC	KEY_Y + ALTGR_MASK + SHIFT_MASK		// 220 Ü     U DIAERESIS
#define USINT_ISO_8859_1_DD	USINT_ACUTE_ACCENT_BITS + KEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define USINT_ISO_8859_1_DE	KEY_T + ALTGR_MASK + SHIFT_MASK		// 222 Þ     THORN
#define USINT_ISO_8859_1_DF	KEY_S + ALTGR_MASK			// 223 ß     SHARP S
#define USINT_ISO_8859_1_E0	USINT_GRAVE_ACCENT_BITS + KEY_A		// 224 à     a GRAVE
#define USINT_ISO_8859_1_E1	KEY_A + ALTGR_MASK			// 225 á     a ACUTE
#define USINT_ISO_8859_1_E2	CIRCUMFLEX_BITS + KEY_A			// 226 â     a CIRCUMFLEX
#define USINT_ISO_8859_1_E3	USINT_TILDE_BITS + KEY_A			// 227 ã     a TILDE
#define USINT_ISO_8859_1_E4	USINT_DIAERESIS_BITS + KEY_A			// 228 ä     a DIAERESIS
#define USINT_ISO_8859_1_E5	KEY_W + ALTGR_MASK			// 229 å     a RING ABOVE
#define USINT_ISO_8859_1_E6	KEY_Z + ALTGR_MASK			// 230 æ     ae
#define USINT_ISO_8859_1_E7	KEY_COMMA + ALTGR_MASK			// 231 ç     c CEDILLA
#define USINT_ISO_8859_1_E8	USINT_GRAVE_ACCENT_BITS + KEY_E		// 232 è     e GRAVE
#define USINT_ISO_8859_1_E9	USINT_ACUTE_ACCENT_BITS + KEY_E		// 233 é     e ACUTE
#define USINT_ISO_8859_1_EA	CIRCUMFLEX_BITS + KEY_E			// 234 ê     e CIRCUMFLEX
#define USINT_ISO_8859_1_EB	USINT_DIAERESIS_BITS + KEY_E			// 235 ë     e DIAERESIS
#define USINT_ISO_8859_1_EC	USINT_GRAVE_ACCENT_BITS + KEY_I		// 236 ì     i GRAVE
#define USINT_ISO_8859_1_ED	KEY_I + ALTGR_MASK			// 237 í     i ACUTE
#define USINT_ISO_8859_1_EE	CIRCUMFLEX_BITS + KEY_I			// 238 î     i CIRCUMFLEX
#define USINT_ISO_8859_1_EF	USINT_DIAERESIS_BITS + KEY_I			// 239 ï     i DIAERESIS
#define USINT_ISO_8859_1_F0	KEY_D + ALTGR_MASK			// 240 ð     ETH
#define USINT_ISO_8859_1_F1	KEY_N + ALTGR_MASK			// 241 ñ     n TILDE
#define USINT_ISO_8859_1_F2	USINT_GRAVE_ACCENT_BITS + KEY_O		// 242 ò     o GRAVE
#define USINT_ISO_8859_1_F3	KEY_O + ALTGR_MASK			// 243 ó     o ACUTE
#define USINT_ISO_8859_1_F4	CIRCUMFLEX_BITS + KEY_O			// 244 ô     o CIRCUMFLEX
#define USINT_ISO_8859_1_F5	USINT_TILDE_BITS + KEY_O 			// 245 õ     o TILDE
#define USINT_ISO_8859_1_F6	KEY_P + ALTGR_MASK			// 246 ö     o DIAERESIS
#define USINT_ISO_8859_1_F7	KEY_EQUAL + ALTGR_MASK + SHIFT_MASK	// 247 ÷     DIVISION
#define USINT_ISO_8859_1_F8	KEY_L + ALTGR_MASK			// 248 ø     o STROKE
#define USINT_ISO_8859_1_F9	USINT_GRAVE_ACCENT_BITS + KEY_U		// 249 ù     u GRAVE
#define USINT_ISO_8859_1_FA	KEY_U + ALTGR_MASK			// 250 ú     u ACUTE
#define USINT_ISO_8859_1_FB	CIRCUMFLEX_BITS + KEY_U			// 251 û     u CIRCUMFLEX
#define USINT_ISO_8859_1_FC	KEY_Y + ALTGR_MASK			// 252 ü     u DIAERESIS
#define USINT_ISO_8859_1_FD	USINT_ACUTE_ACCENT_BITS + KEY_Y		// 253 ý     y ACUTE
#define USINT_ISO_8859_1_FE	KEY_T + ALTGR_MASK			// 254 þ     THORN
#define USINT_ISO_8859_1_FF	USINT_DIAERESIS_BITS + KEY_Y			// 255 ÿ     y DIAERESIS
#define USINT_UNICODE_20AC	KEY_5 + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define USINT_UNICODE_EXTRA00	0x20AC
#define USINT_KEYCODE_EXTRA00	KEY_5 + ALTGR_MASK			// 20AC €    Euro Sign



#define DE_ACUTE_ACCENT_BITS	0x0400
#define DE_GRAVE_ACCENT_BITS	0x0500
#define DE_KEYCODE_TYPE		uint16_t
#define DE_DEADKEY_CIRCUMFLEX	KEY_TILDE
#define DE_DEADKEY_ACUTE_ACCENT	KEY_EQUAL
#define DE_DEADKEY_GRAVE_ACCENT	KEY_EQUAL + SHIFT_MASK
#define KEY_NON_US_100		63

#define DE_ASCII_20	KEY_SPACE				// 32  
#define DE_ASCII_21	KEY_1 + SHIFT_MASK			// 33 !
#define DE_ASCII_22	KEY_2 + SHIFT_MASK			// 34 "
#define DE_ASCII_23	KEY_BACKSLASH				// 35 #		??
#define DE_ASCII_24	KEY_4 + SHIFT_MASK			// 36 $
#define DE_ASCII_25	KEY_5 + SHIFT_MASK			// 37 %
#define DE_ASCII_26	KEY_6 + SHIFT_MASK			// 38 &
#define DE_ASCII_27	KEY_BACKSLASH + SHIFT_MASK		// 39 '
#define DE_ASCII_28	KEY_8 + SHIFT_MASK			// 40 (
#define DE_ASCII_29	KEY_9 + SHIFT_MASK			// 41 )
#define DE_ASCII_2A	KEY_RIGHT_BRACE + SHIFT_MASK		// 42 *
#define DE_ASCII_2B	KEY_RIGHT_BRACE				// 43 +
#define DE_ASCII_2C	KEY_COMMA				// 44 ,
#define DE_ASCII_2D	KEY_SLASH				// 45 -
#define DE_ASCII_2E	KEY_PERIOD				// 46 .
#define DE_ASCII_2F	KEY_7 + SHIFT_MASK			// 47 /
#define DE_ASCII_30	KEY_0					// 48 0
#define DE_ASCII_31	KEY_1					// 49 1
#define DE_ASCII_32	KEY_2					// 50 2
#define DE_ASCII_33	KEY_3					// 51 3
#define DE_ASCII_34	KEY_4					// 52 4
#define DE_ASCII_35	KEY_5					// 53 5
#define DE_ASCII_36	KEY_6					// 54 6
#define DE_ASCII_37	KEY_7					// 55 7
#define DE_ASCII_38	KEY_8					// 55 8
#define DE_ASCII_39	KEY_9					// 57 9
#define DE_ASCII_3A	KEY_PERIOD + SHIFT_MASK			// 58 :
#define DE_ASCII_3B	KEY_COMMA + SHIFT_MASK			// 59 ;
#define DE_ASCII_3C	KEY_NON_US_100				// 60 <
#define DE_ASCII_3D	KEY_0 + SHIFT_MASK			// 61 =
#define DE_ASCII_3E	KEY_NON_US_100 + SHIFT_MASK		// 62 >
#define DE_ASCII_3F	KEY_MINUS + SHIFT_MASK			// 63 ?
#define DE_ASCII_40	KEY_Q + ALTGR_MASK			// 64 @
#define DE_ASCII_41	KEY_A + SHIFT_MASK			// 65 A
#define DE_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define DE_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define DE_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define DE_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define DE_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define DE_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define DE_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define DE_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define DE_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define DE_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define DE_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define DE_ASCII_4D	KEY_M + SHIFT_MASK			// 77 M
#define DE_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define DE_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define DE_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define DE_ASCII_51	KEY_Q + SHIFT_MASK			// 81 Q
#define DE_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define DE_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define DE_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define DE_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define DE_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define DE_ASCII_57	KEY_W + SHIFT_MASK			// 87 W
#define DE_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define DE_ASCII_59	KEY_Z + SHIFT_MASK			// 89 Y
#define DE_ASCII_5A	KEY_Y + SHIFT_MASK			// 90 Z
#define DE_ASCII_5B	KEY_8 + ALTGR_MASK			// 91 [
#define DE_ASCII_5C	KEY_MINUS + ALTGR_MASK			// 92
#define DE_ASCII_5D	KEY_9 + ALTGR_MASK			// 93 ]
#define DE_ASCII_5E	DE_CIRCUMFLEX_BITS + KEY_SPACE		// 94 ^
#define DE_ASCII_5F	KEY_SLASH + SHIFT_MASK			// 95 _
#define DE_ASCII_60	DE_GRAVE_ACCENT_BITS + KEY_SPACE		// 96 `
#define DE_ASCII_61	KEY_A					// 97 a
#define DE_ASCII_62	KEY_B					// 98 b
#define DE_ASCII_63	KEY_C					// 99 c
#define DE_ASCII_64	KEY_D					// 100 d
#define DE_ASCII_65	KEY_E					// 101 e
#define DE_ASCII_66	KEY_F					// 102 f
#define DE_ASCII_67	KEY_G					// 103 g
#define DE_ASCII_68	KEY_H					// 104 h
#define DE_ASCII_69	KEY_I					// 105 i
#define DE_ASCII_6A	KEY_J					// 106 j
#define DE_ASCII_6B	KEY_K					// 107 k
#define DE_ASCII_6C	KEY_L					// 108 l
#define DE_ASCII_6D	KEY_M					// 109 m
#define DE_ASCII_6E	KEY_N					// 110 n
#define DE_ASCII_6F	KEY_O					// 111 o
#define DE_ASCII_70	KEY_P					// 112 p
#define DE_ASCII_71	KEY_Q					// 113 q
#define DE_ASCII_72	KEY_R					// 114 r
#define DE_ASCII_73	KEY_S					// 115 s
#define DE_ASCII_74	KEY_T					// 116 t
#define DE_ASCII_75	KEY_U					// 117 u
#define DE_ASCII_76	KEY_V					// 118 v
#define DE_ASCII_77	KEY_W					// 119 w
#define DE_ASCII_78	KEY_X					// 120 x
#define DE_ASCII_79	KEY_Z					// 121 y
#define DE_ASCII_7A	KEY_Y					// 122 z
#define DE_ASCII_7B	KEY_7 + ALTGR_MASK			// 123 {
#define DE_ASCII_7C	KEY_NON_US_100 + ALTGR_MASK		// 124 |
#define DE_ASCII_7D	KEY_0 + ALTGR_MASK			// 125 }
#define DE_ASCII_7E	KEY_RIGHT_BRACE + ALTGR_MASK		// 126 ~
#define DE_ASCII_7F	KEY_BACKSPACE				// 127
#define DE_ISO_8859_1_A0	KEY_SPACE				// 160       Nonbreakng Space
#define DE_ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define DE_ISO_8859_1_A2	0					// 162 ¢     Cent Sign
#define DE_ISO_8859_1_A3	0					// 163 £     Pound Sign
#define DE_ISO_8859_1_A4	KEY_E + ALTGR_MASK			// 164 ¤     Currency Sign
#define DE_ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define DE_ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define DE_ISO_8859_1_A7	KEY_3 + SHIFT_MASK			// 167 §     SECTION SIGN
#define DE_ISO_8859_1_A8	0					// 168 ¨     DIAERESIS
#define DE_ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define DE_ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define DE_ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define DE_ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define DE_ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define DE_ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define DE_ISO_8859_1_AF	0					// 175 ¯     MACRON
#define DE_ISO_8859_1_B0	KEY_TILDE + SHIFT_MASK			// 176 °     DEGREE SIGN
#define DE_ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define DE_ISO_8859_1_B2	KEY_2 + ALTGR_MASK			// 178 ²     SUPERSCRIPT TWO
#define DE_ISO_8859_1_B3	KEY_3 + ALTGR_MASK			// 179 ³     SUPERSCRIPT THREE
#define DE_ISO_8859_1_B4	0					// 180 ´     ACUTE ACCENT
#define DE_ISO_8859_1_B5	KEY_M + ALTGR_MASK			// 181 µ     MICRO SIGN
#define DE_ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define DE_ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define DE_ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define DE_ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define DE_ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define DE_ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define DE_ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define DE_ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define DE_ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define DE_ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define DE_ISO_8859_1_C0	DE_GRAVE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define DE_ISO_8859_1_C1	DE_ACUTE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define DE_ISO_8859_1_C2	DE_CIRCUMFLEX_BITS	+ KEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define DE_ISO_8859_1_C3	0					// 195 Ã     A TILDE
#define DE_ISO_8859_1_C4	KEY_QUOTE + SHIFT_MASK			// 196 Ä     A DIAERESIS
#define DE_ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define DE_ISO_8859_1_C6	0					// 198 Æ     AE
#define DE_ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define DE_ISO_8859_1_C8	DE_GRAVE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define DE_ISO_8859_1_C9	DE_ACUTE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define DE_ISO_8859_1_CA	DE_CIRCUMFLEX_BITS + KEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define DE_ISO_8859_1_CB	0					// 203 Ë     E DIAERESIS
#define DE_ISO_8859_1_CC	DE_GRAVE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define DE_ISO_8859_1_CD	DE_ACUTE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define DE_ISO_8859_1_CE	DE_CIRCUMFLEX_BITS + KEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define DE_ISO_8859_1_CF	0					// 207 Ï     I DIAERESIS
#define DE_ISO_8859_1_D0	0					// 208 Ð     ETH
#define DE_ISO_8859_1_D1	0					// 209 Ñ     N TILDE
#define DE_ISO_8859_1_D2	DE_GRAVE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define DE_ISO_8859_1_D3	DE_ACUTE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define DE_ISO_8859_1_D4	DE_CIRCUMFLEX_BITS + KEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define DE_ISO_8859_1_D5	0					// 213 Õ     O TILDE
#define DE_ISO_8859_1_D6	KEY_SEMICOLON + SHIFT_MASK		// 214 Ö     O DIAERESIS
#define DE_ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define DE_ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define DE_ISO_8859_1_D9	DE_GRAVE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define DE_ISO_8859_1_DA	DE_ACUTE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define DE_ISO_8859_1_DB	DE_CIRCUMFLEX_BITS + KEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define DE_ISO_8859_1_DC	KEY_LEFT_BRACE + SHIFT_MASK		// 220 Ü     U DIAERESIS
#define DE_ISO_8859_1_DD	DE_ACUTE_ACCENT_BITS + KEY_Z + SHIFT_MASK	// 221 Ý     Y ACUTE
#define DE_ISO_8859_1_DE	0					// 222 Þ     THORN
#define DE_ISO_8859_1_DF	KEY_MINUS				// 223 ß     SHARP S
#define DE_ISO_8859_1_E0	DE_GRAVE_ACCENT_BITS + KEY_A		// 224 à     a GRAVE
#define DE_ISO_8859_1_E1	DE_ACUTE_ACCENT_BITS + KEY_A		// 225 á     a ACUTE
#define DE_ISO_8859_1_E2	DE_CIRCUMFLEX_BITS + KEY_A			// 226 â     a CIRCUMFLEX
#define DE_ISO_8859_1_E3	0					// 227 ã     a TILDE
#define DE_ISO_8859_1_E4	KEY_QUOTE				// 228 ä     a DIAERESIS
#define DE_ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define DE_ISO_8859_1_E6	0					// 230 æ     ae
#define DE_ISO_8859_1_E7	0					// 231 ç     c CEDILLA
#define DE_ISO_8859_1_E8	DE_GRAVE_ACCENT_BITS + KEY_E		// 232 è     e GRAVE
#define DE_ISO_8859_1_E9	DE_ACUTE_ACCENT_BITS + KEY_E		// 233 é     e ACUTE
#define DE_ISO_8859_1_EA	DE_CIRCUMFLEX_BITS + KEY_E			// 234 ê     e CIRCUMFLEX
#define DE_ISO_8859_1_EB	0					// 235 ë     e DIAERESIS
#define DE_ISO_8859_1_EC	DE_GRAVE_ACCENT_BITS + KEY_I		// 236 ì     i GRAVE
#define DE_ISO_8859_1_ED	DE_ACUTE_ACCENT_BITS + KEY_I		// 237 í     i ACUTE
#define DE_ISO_8859_1_EE	DE_CIRCUMFLEX_BITS + KEY_I			// 238 î     i CIRCUMFLEX
#define DE_ISO_8859_1_EF	0					// 239 ï     i DIAERESIS
#define DE_ISO_8859_1_F0	0					// 240 ð     ETH
#define DE_ISO_8859_1_F1	0					// 241 ñ     n TILDE
#define DE_ISO_8859_1_F2	DE_GRAVE_ACCENT_BITS + KEY_O		// 242 ò     o GRAVE
#define DE_ISO_8859_1_F3	DE_ACUTE_ACCENT_BITS + KEY_O		// 243 ó     o ACUTE
#define DE_ISO_8859_1_F4	DE_CIRCUMFLEX_BITS + KEY_O			// 244 ô     o CIRCUMFLEX
#define DE_ISO_8859_1_F5	0					// 245 õ     o TILDE
#define DE_ISO_8859_1_F6	KEY_SEMICOLON				// 246 ö     o DIAERESIS
#define DE_ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define DE_ISO_8859_1_F8	0					// 248 ø     o STROKE
#define DE_ISO_8859_1_F9	DE_GRAVE_ACCENT_BITS + KEY_U		// 249 ù     u GRAVE
#define DE_ISO_8859_1_FA	DE_ACUTE_ACCENT_BITS + KEY_U		// 250 ú     u ACUTE
#define DE_ISO_8859_1_FB	DE_CIRCUMFLEX_BITS + KEY_U			// 251 û     u CIRCUMFLEX
#define DE_ISO_8859_1_FC	KEY_LEFT_BRACE				// 252 ü     u DIAERESIS
#define DE_ISO_8859_1_FD	DE_ACUTE_ACCENT_BITS + KEY_Z		// 253 ý     y ACUTE
#define DE_ISO_8859_1_FE	0					// 254 þ     THORN
#define DE_ISO_8859_1_FF	0					// 255 ÿ     y DIAERESIS
#define DE_UNICODE_20AC	KEY_E + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define DE_UNICODE_EXTRA00	0x20AC
#define DE_KEYCODE_EXTRA00	KEY_E + ALTGR_MASK			// 20AC €    Euro Sign


#define DEMAC_ACUTE_ACCENT_BITS	0x0100
#define DEMAC_GRAVE_ACCENT_BITS	0x0200
#define	DEMAC_DIAERESIS_BITS		0x0400
#define	DEMAC_TILDE_BITS		0x0500
#define DEMAC_KEYCODE_TYPE		uint16_t
#define DEMAC_DEADKEY_ACUTE_ACCENT	KEY_EQUAL
#define DEMAC_DEADKEY_GRAVE_ACCENT	KEY_EQUAL + SHIFT_MASK
#define DEMAC_DEADKEY_CIRCUMFLEX	KEY_6 + SHIFT_MASK + ALTGR_MASK
#define DEMAC_DEADKEY_DIAERESIS	KEY_U + ALTGR_MASK
#define DEMAC_DEADKEY_TILDE		KEY_N + ALTGR_MASK
#define KEY_NON_US_100		63

#define DEMAC_ASCII_20	KEY_SPACE				// 32  
#define DEMAC_ASCII_21	KEY_1 + SHIFT_MASK			// 33 !
#define DEMAC_ASCII_22	KEY_2 + SHIFT_MASK			// 34 "
#define DEMAC_ASCII_23	KEY_BACKSLASH				// 35 #		??
#define DEMAC_ASCII_24	KEY_4 + SHIFT_MASK			// 36 $
#define DEMAC_ASCII_25	KEY_5 + SHIFT_MASK			// 37 %
#define DEMAC_ASCII_26	KEY_6 + SHIFT_MASK			// 38 &
#define DEMAC_ASCII_27	KEY_BACKSLASH + SHIFT_MASK		// 39 '
#define DEMAC_ASCII_28	KEY_8 + SHIFT_MASK			// 40 (
#define DEMAC_ASCII_29	KEY_9 + SHIFT_MASK			// 41 )
#define DEMAC_ASCII_2A	KEY_RIGHT_BRACE + SHIFT_MASK		// 42 *
#define DEMAC_ASCII_2B	KEY_RIGHT_BRACE				// 43 +
#define DEMAC_ASCII_2C	KEY_COMMA				// 44 ,
#define DEMAC_ASCII_2D	KEY_SLASH				// 45 -
#define DEMAC_ASCII_2E	KEY_PERIOD				// 46 .
#define DEMAC_ASCII_2F	KEY_7 + SHIFT_MASK			// 47 /
#define DEMAC_ASCII_30	KEY_0					// 48 0
#define DEMAC_ASCII_31	KEY_1					// 49 1
#define DEMAC_ASCII_32	KEY_2					// 50 2
#define DEMAC_ASCII_33	KEY_3					// 51 3
#define DEMAC_ASCII_34	KEY_4					// 52 4
#define DEMAC_ASCII_35	KEY_5					// 53 5
#define DEMAC_ASCII_36	KEY_6					// 54 6
#define DEMAC_ASCII_37	KEY_7					// 55 7
#define DEMAC_ASCII_38	KEY_8					// 55 8
#define DEMAC_ASCII_39	KEY_9					// 57 9
#define DEMAC_ASCII_3A	KEY_PERIOD + SHIFT_MASK			// 58 :
#define DEMAC_ASCII_3B	KEY_COMMA + SHIFT_MASK			// 59 ;
#define DEMAC_ASCII_3C	KEY_TILDE				// 60 <
#define DEMAC_ASCII_3D	KEY_0 + SHIFT_MASK			// 61 =
#define DEMAC_ASCII_3E	KEY_TILDE + SHIFT_MASK			// 62 >
#define DEMAC_ASCII_3F	KEY_MINUS + SHIFT_MASK			// 63 ?
#define DEMAC_ASCII_40	KEY_Q + ALTGR_MASK			// 64 @
#define DEMAC_ASCII_41	KEY_A + SHIFT_MASK			// 65 A
#define DEMAC_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define DEMAC_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define DEMAC_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define DEMAC_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define DEMAC_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define DEMAC_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define DEMAC_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define DEMAC_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define DEMAC_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define DEMAC_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define DEMAC_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define DEMAC_ASCII_4D	KEY_M + SHIFT_MASK			// 77 M
#define DEMAC_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define DEMAC_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define DEMAC_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define DEMAC_ASCII_51	KEY_Q + SHIFT_MASK			// 81 Q
#define DEMAC_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define DEMAC_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define DEMAC_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define DEMAC_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define DEMAC_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define DEMAC_ASCII_57	KEY_W + SHIFT_MASK			// 87 W
#define DEMAC_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define DEMAC_ASCII_59	KEY_Z + SHIFT_MASK			// 89 Y
#define DEMAC_ASCII_5A	KEY_Y + SHIFT_MASK			// 90 Z
#define DEMAC_ASCII_5B	KEY_5 + ALTGR_MASK			// 91 [
#define DEMAC_ASCII_5C	KEY_7 + ALTGR_MASK + SHIFT_MASK		// 92
#define DEMAC_ASCII_5D	KEY_6 + ALTGR_MASK			// 93 ]
#define DEMAC_ASCII_5E	CIRCUMFLEX_BITS + KEY_SPACE		// 94 ^
#define DEMAC_ASCII_5F	KEY_SLASH + SHIFT_MASK			// 95 _
#define DEMAC_ASCII_60	DEMAC_GRAVE_ACCENT_BITS + KEY_SPACE		// 96 `
#define DEMAC_ASCII_61	KEY_A					// 97 a
#define DEMAC_ASCII_62	KEY_B					// 98 b
#define DEMAC_ASCII_63	KEY_C					// 99 c
#define DEMAC_ASCII_64	KEY_D					// 100 d
#define DEMAC_ASCII_65	KEY_E					// 101 e
#define DEMAC_ASCII_66	KEY_F					// 102 f
#define DEMAC_ASCII_67	KEY_G					// 103 g
#define DEMAC_ASCII_68	KEY_H					// 104 h
#define DEMAC_ASCII_69	KEY_I					// 105 i
#define DEMAC_ASCII_6A	KEY_J					// 106 j
#define DEMAC_ASCII_6B	KEY_K					// 107 k
#define DEMAC_ASCII_6C	KEY_L					// 108 l
#define DEMAC_ASCII_6D	KEY_M					// 109 m
#define DEMAC_ASCII_6E	KEY_N					// 110 n
#define DEMAC_ASCII_6F	KEY_O					// 111 o
#define DEMAC_ASCII_70	KEY_P					// 112 p
#define DEMAC_ASCII_71	KEY_Q					// 113 q
#define DEMAC_ASCII_72	KEY_R					// 114 r
#define DEMAC_ASCII_73	KEY_S					// 115 s
#define DEMAC_ASCII_74	KEY_T					// 116 t
#define DEMAC_ASCII_75	KEY_U					// 117 u
#define DEMAC_ASCII_76	KEY_V					// 118 v
#define DEMAC_ASCII_77	KEY_W					// 119 w
#define DEMAC_ASCII_78	KEY_X					// 120 x
#define DEMAC_ASCII_79	KEY_Z					// 121 y
#define DEMAC_ASCII_7A	KEY_Y					// 122 z
#define DEMAC_ASCII_7B	KEY_8 + ALTGR_MASK			// 123 {
#define DEMAC_ASCII_7C	KEY_7 + ALTGR_MASK			// 124 |
#define DEMAC_ASCII_7D	KEY_9 + ALTGR_MASK			// 125 }
#define DEMAC_ASCII_7E	DEMAC_TILDE_BITS + KEY_SPACE			// 126 ~
#define DEMAC_ASCII_7F	KEY_BACKSPACE				// 127
#define DEMAC_ISO_8859_1_A0	KEY_SPACE				// 160       Nonbreakng Space
#define DEMAC_ISO_8859_1_A1	KEY_1 + ALTGR_MASK			// 161 ¡     Inverted Exclamation
#define DEMAC_ISO_8859_1_A2	KEY_4 + ALTGR_MASK			// 162 ¢     Cent Sign
#define DEMAC_ISO_8859_1_A3	KEY_4 + SHIFT_MASK + ALTGR_MASK		// 163 £     Pound Sign
#define DEMAC_ISO_8859_1_A4	KEY_E + ALTGR_MASK			// 164 ¤     Currency Sign
#define DEMAC_ISO_8859_1_A5	KEY_Z + ALTGR_MASK			// 165 ¥     YEN SIGN
#define DEMAC_ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define DEMAC_ISO_8859_1_A7	KEY_3 + SHIFT_MASK			// 167 §     SECTION SIGN
#define DEMAC_ISO_8859_1_A8	DEMAC_DIAERESIS_BITS + KEY_SPACE		// 168 ¨     DIAERESIS
#define DEMAC_ISO_8859_1_A9	KEY_G + ALTGR_MASK			// 169 ©     COPYRIGHT SIGN
#define DEMAC_ISO_8859_1_AA	KEY_H + ALTGR_MASK			// 170 ª     FEMININE ORDINAL
#define DEMAC_ISO_8859_1_AB	KEY_Q + ALTGR_MASK			// 171 «     LEFT DOUBLE ANGLE QUOTE
#define DEMAC_ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define DEMAC_ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define DEMAC_ISO_8859_1_AE	KEY_R + ALTGR_MASK			// 174 ®     REGISTERED SIGN
#define DEMAC_ISO_8859_1_AF	KEY_0 + SHIFT_MASK + ALTGR_MASK		// 175 ¯     MACRON
#define DEMAC_ISO_8859_1_B0	KEY_LEFT_BRACE + ALTGR_MASK + SHIFT_MASK// 176 °     DEGREE SIGN
#define DEMAC_ISO_8859_1_B1	KEY_RIGHT_BRACE + ALTGR_MASK		// 177 ±     PLUS-MINUS SIGN
#define DEMAC_ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define DEMAC_ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define DEMAC_ISO_8859_1_B4	DEMAC_ACUTE_ACCENT_BITS + KEY_SPACE		// 180 ´     ACUTE ACCENT
#define DEMAC_ISO_8859_1_B5	KEY_M + ALTGR_MASK			// 181 µ     MICRO SIGN
#define DEMAC_ISO_8859_1_B6	KEY_3 + ALTGR_MASK			// 182 ¶     PILCROW SIGN
#define DEMAC_ISO_8859_1_B7	KEY_9 + SHIFT_MASK + ALTGR_MASK		// 183 ·     MIDDLE DOT
#define DEMAC_ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define DEMAC_ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define DEMAC_ISO_8859_1_BA	KEY_J + ALTGR_MASK			// 186 º     MASCULINE ORDINAL
#define DEMAC_ISO_8859_1_BB	KEY_Q + SHIFT_MASK + ALTGR_MASK		// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define DEMAC_ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define DEMAC_ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define DEMAC_ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define DEMAC_ISO_8859_1_BF	KEY_MINUS + ALTGR_MASK			// 191 ¿     INVERTED QUESTION MARK
#define DEMAC_ISO_8859_1_C0	DEMAC_GRAVE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define DEMAC_ISO_8859_1_C1	DEMAC_ACUTE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define DEMAC_ISO_8859_1_C2	CIRCUMFLEX_BITS	+ KEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define DEMAC_ISO_8859_1_C3	DEMAC_TILDE_BITS + KEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define DEMAC_ISO_8859_1_C4	KEY_QUOTE + SHIFT_MASK			// 196 Ä     A DIAERESIS
#define DEMAC_ISO_8859_1_C5	KEY_A + ALTGR_MASK + SHIFT_MASK		// 197 Å     A RING ABOVE
#define DEMAC_ISO_8859_1_C6	KEY_QUOTE + ALTGR_MASK + SHIFT_MASK	// 198 Æ     AE
#define DEMAC_ISO_8859_1_C7	KEY_C + ALTGR_MASK + SHIFT_MASK		// 199 Ç     C CEDILLA
#define DEMAC_ISO_8859_1_C8	DEMAC_GRAVE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define DEMAC_ISO_8859_1_C9	DEMAC_ACUTE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define DEMAC_ISO_8859_1_CA	CIRCUMFLEX_BITS + KEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define DEMAC_ISO_8859_1_CB	DEMAC_DIAERESIS_BITS + KEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define DEMAC_ISO_8859_1_CC	DEMAC_GRAVE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define DEMAC_ISO_8859_1_CD	DEMAC_ACUTE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define DEMAC_ISO_8859_1_CE	CIRCUMFLEX_BITS + KEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define DEMAC_ISO_8859_1_CF	DEMAC_DIAERESIS_BITS + KEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define DEMAC_ISO_8859_1_D0	0					// 208 Ð     ETH
#define DEMAC_ISO_8859_1_D1	DEMAC_TILDE_BITS + KEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define DEMAC_ISO_8859_1_D2	DEMAC_GRAVE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define DEMAC_ISO_8859_1_D3	DEMAC_ACUTE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define DEMAC_ISO_8859_1_D4	CIRCUMFLEX_BITS + KEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define DEMAC_ISO_8859_1_D5	DEMAC_TILDE_BITS + KEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define DEMAC_ISO_8859_1_D6	KEY_SEMICOLON + SHIFT_MASK		// 214 Ö     O DIAERESIS
#define DEMAC_ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define DEMAC_ISO_8859_1_D8	KEY_O + ALTGR_MASK + SHIFT_MASK		// 216 Ø     O STROKE
#define DEMAC_ISO_8859_1_D9	DEMAC_GRAVE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define DEMAC_ISO_8859_1_DA	DEMAC_ACUTE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define DEMAC_ISO_8859_1_DB	CIRCUMFLEX_BITS + KEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define DEMAC_ISO_8859_1_DC	KEY_LEFT_BRACE + SHIFT_MASK		// 220 Ü     U DIAERESIS
#define DEMAC_ISO_8859_1_DD	DEMAC_ACUTE_ACCENT_BITS + KEY_Z + SHIFT_MASK	// 221 Ý     Y ACUTE
#define DEMAC_ISO_8859_1_DE	0					// 222 Þ     THORN
#define DEMAC_ISO_8859_1_DF	KEY_MINUS				// 223 ß     SHARP S
#define DEMAC_ISO_8859_1_E0	DEMAC_GRAVE_ACCENT_BITS + KEY_A		// 224 à     a GRAVE
#define DEMAC_ISO_8859_1_E1	DEMAC_ACUTE_ACCENT_BITS + KEY_A		// 225 á     a ACUTE
#define DEMAC_ISO_8859_1_E2	CIRCUMFLEX_BITS + KEY_A			// 226 â     a CIRCUMFLEX
#define DEMAC_ISO_8859_1_E3	DEMAC_TILDE_BITS + KEY_A			// 227 ã     a TILDE
#define DEMAC_ISO_8859_1_E4	KEY_QUOTE				// 228 ä     a DIAERESIS
#define DEMAC_ISO_8859_1_E5	KEY_A + ALTGR_MASK			// 229 å     a RING ABOVE
#define DEMAC_ISO_8859_1_E6	KEY_QUOTE + ALTGR_MASK			// 230 æ     ae
#define DEMAC_ISO_8859_1_E7	KEY_C + ALTGR_MASK			// 231 ç     c CEDILLA
#define DEMAC_ISO_8859_1_E8	DEMAC_GRAVE_ACCENT_BITS + KEY_E		// 232 è     e GRAVE
#define DEMAC_ISO_8859_1_E9	DEMAC_ACUTE_ACCENT_BITS + KEY_E		// 233 é     e ACUTE
#define DEMAC_ISO_8859_1_EA	CIRCUMFLEX_BITS + KEY_E			// 234 ê     e CIRCUMFLEX
#define DEMAC_ISO_8859_1_EB	DEMAC_DIAERESIS_BITS + KEY_E			// 235 ë     e DIAERESIS
#define DEMAC_ISO_8859_1_EC	DEMAC_GRAVE_ACCENT_BITS + KEY_I		// 236 ì     i GRAVE
#define DEMAC_ISO_8859_1_ED	DEMAC_ACUTE_ACCENT_BITS + KEY_I		// 237 í     i ACUTE
#define DEMAC_ISO_8859_1_EE	CIRCUMFLEX_BITS + KEY_I			// 238 î     i CIRCUMFLEX
#define DEMAC_ISO_8859_1_EF	DEMAC_DIAERESIS_BITS + KEY_I			// 239 ï     i DIAERESIS
#define DEMAC_ISO_8859_1_F0	0					// 240 ð     ETH
#define DEMAC_ISO_8859_1_F1	DEMAC_TILDE_BITS + KEY_N			// 241 ñ     n TILDE
#define DEMAC_ISO_8859_1_F2	DEMAC_GRAVE_ACCENT_BITS + KEY_O		// 242 ò     o GRAVE
#define DEMAC_ISO_8859_1_F3	DEMAC_ACUTE_ACCENT_BITS + KEY_O		// 243 ó     o ACUTE
#define DEMAC_ISO_8859_1_F4	CIRCUMFLEX_BITS + KEY_O			// 244 ô     o CIRCUMFLEX
#define DEMAC_ISO_8859_1_F5	DEMAC_TILDE_BITS + KEY_O			// 245 õ     o TILDE
#define DEMAC_ISO_8859_1_F6	KEY_SEMICOLON				// 246 ö     o DIAERESIS
#define DEMAC_ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define DEMAC_ISO_8859_1_F8	KEY_O + ALTGR_MASK			// 248 ø     o STROKE
#define DEMAC_ISO_8859_1_F9	DEMAC_GRAVE_ACCENT_BITS + KEY_U		// 249 ù     u GRAVE
#define DEMAC_ISO_8859_1_FA	DEMAC_ACUTE_ACCENT_BITS + KEY_U		// 250 ú     u ACUTE
#define DEMAC_ISO_8859_1_FB	CIRCUMFLEX_BITS + KEY_U			// 251 û     u CIRCUMFLEX
#define DEMAC_ISO_8859_1_FC	KEY_LEFT_BRACE				// 252 ü     u DIAERESIS
#define DEMAC_ISO_8859_1_FD	DEMAC_ACUTE_ACCENT_BITS + KEY_Z		// 253 ý     y ACUTE
#define DEMAC_ISO_8859_1_FE	0					// 254 þ     THORN
#define DEMAC_ISO_8859_1_FF	DEMAC_DIAERESIS_BITS + KEY_Z			// 255 ÿ     y DIAERESIS
#define DEMAC_UNICODE_20AC	KEY_E + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define DEMAC_UNICODE_EXTRA00	0x20AC
#define DEMAC_KEYCODE_EXTRA00	KEY_E + ALTGR_MASK			// 20AC €    Euro Sign




#define CAFR_ACUTE_ACCENT_BITS	0x0200
#define CAFR_GRAVE_ACCENT_BITS	0x0300
#define CAFR_DIAERESIS_BITS		0x0400
#define CAFR_CEDILLA_BITS		0x0500

#define CAFR_KEYCODE_TYPE		uint16_t
#define CAFR_DEADKEY_CIRCUMFLEX	KEY_LEFT_BRACE
#define CAFR_DEADKEY_ACUTE_ACCENT	KEY_SLASH + ALTGR_MASK
#define CAFR_DEADKEY_GRAVE_ACCENT	KEY_QUOTE
#define CAFR_DEADKEY_DIAERESIS	KEY_RIGHT_BRACE + SHIFT_MASK
#define CAFR_DEADKEY_CEDILLA		KEY_RIGHT_BRACE
#define KEY_NON_US_100		63

#define CAFR_ASCII_20	KEY_SPACE				// 32  
#define CAFR_ASCII_21	KEY_1 + SHIFT_MASK			// 33 !
#define CAFR_ASCII_22	KEY_2 + SHIFT_MASK			// 34 "
#define CAFR_ASCII_23	KEY_TILDE + SHIFT_MASK			// 35 #
#define CAFR_ASCII_24	KEY_4 + SHIFT_MASK			// 36 $
#define CAFR_ASCII_25	KEY_5 + SHIFT_MASK			// 37 %
#define CAFR_ASCII_26	KEY_7 + SHIFT_MASK			// 38 &
#define CAFR_ASCII_27	KEY_COMMA + SHIFT_MASK			// 39 '
//#define CAFR_ASCII_27	ACUTE_ACCENT_BITS + KEY_SPACE		// 39 '
#define CAFR_ASCII_28	KEY_9 + SHIFT_MASK			// 40 (
#define CAFR_ASCII_29	KEY_0 + SHIFT_MASK			// 41 )
#define CAFR_ASCII_2A	KEY_8 + SHIFT_MASK			// 42 *
#define CAFR_ASCII_2B	KEY_EQUAL + SHIFT_MASK			// 43 +
#define CAFR_ASCII_2C	KEY_COMMA				// 44 ,
#define CAFR_ASCII_2D	KEY_MINUS				// 45 -
#define CAFR_ASCII_2E	KEY_PERIOD				// 46 .
#define CAFR_ASCII_2F	KEY_3 + SHIFT_MASK			// 47 /
#define CAFR_ASCII_30	KEY_0					// 48 0
#define CAFR_ASCII_31	KEY_1					// 49 1
#define CAFR_ASCII_32	KEY_2					// 50 2
#define CAFR_ASCII_33	KEY_3					// 51 3
#define CAFR_ASCII_34	KEY_4					// 52 4
#define CAFR_ASCII_35	KEY_5					// 53 5
#define CAFR_ASCII_36	KEY_6					// 54 6
#define CAFR_ASCII_37	KEY_7					// 55 7
#define CAFR_ASCII_38	KEY_8					// 55 8
#define CAFR_ASCII_39	KEY_9					// 57 9
#define CAFR_ASCII_3A	KEY_SEMICOLON + SHIFT_MASK		// 58 :
#define CAFR_ASCII_3B	KEY_SEMICOLON				// 59 ;
#define CAFR_ASCII_3C	KEY_BACKSLASH				// 60 <
#define CAFR_ASCII_3D	KEY_EQUAL				// 61 =
#define CAFR_ASCII_3E	KEY_BACKSLASH + SHIFT_MASK		// 62 >
#define CAFR_ASCII_3F	KEY_6 + SHIFT_MASK			// 63 ?
#define CAFR_ASCII_40	KEY_2 + ALTGR_MASK			// 64 @
#define CAFR_ASCII_41	KEY_A + SHIFT_MASK			// 65 A
#define CAFR_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define CAFR_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define CAFR_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define CAFR_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define CAFR_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define CAFR_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define CAFR_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define CAFR_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define CAFR_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define CAFR_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define CAFR_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define CAFR_ASCII_4D	KEY_M + SHIFT_MASK			// 77 M
#define CAFR_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define CAFR_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define CAFR_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define CAFR_ASCII_51	KEY_Q + SHIFT_MASK			// 81 Q
#define CAFR_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define CAFR_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define CAFR_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define CAFR_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define CAFR_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define CAFR_ASCII_57	KEY_W + SHIFT_MASK			// 87 W
#define CAFR_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define CAFR_ASCII_59	KEY_Y + SHIFT_MASK			// 89 Y
#define CAFR_ASCII_5A	KEY_Z + SHIFT_MASK			// 90 Z
#define CAFR_ASCII_5B	KEY_LEFT_BRACE + ALTGR_MASK		// 91 [
#define CAFR_ASCII_5C	KEY_TILDE + ALTGR_MASK			// 92
#define CAFR_ASCII_5D	KEY_RIGHT_BRACE + ALTGR_MASK		// 93 ]
#define CAFR_ASCII_5E	CIRCUMFLEX_BITS + KEY_SPACE		// 94 ^
#define CAFR_ASCII_5F	KEY_MINUS + SHIFT_MASK			// 95 _
#define CAFR_ASCII_60	CAFR_GRAVE_ACCENT_BITS + KEY_SPACE		// 96 `
#define CAFR_ASCII_61	KEY_A					// 97 a
#define CAFR_ASCII_62	KEY_B					// 98 b
#define CAFR_ASCII_63	KEY_C					// 99 c
#define CAFR_ASCII_64	KEY_D					// 100 d
#define CAFR_ASCII_65	KEY_E					// 101 e
#define CAFR_ASCII_66	KEY_F					// 102 f
#define CAFR_ASCII_67	KEY_G					// 103 g
#define CAFR_ASCII_68	KEY_H					// 104 h
#define CAFR_ASCII_69	KEY_I					// 105 i
#define CAFR_ASCII_6A	KEY_J					// 106 j
#define CAFR_ASCII_6B	KEY_K					// 107 k
#define CAFR_ASCII_6C	KEY_L					// 108 l
#define CAFR_ASCII_6D	KEY_M					// 109 m
#define CAFR_ASCII_6E	KEY_N					// 110 n
#define CAFR_ASCII_6F	KEY_O					// 111 o
#define CAFR_ASCII_70	KEY_P					// 112 p
#define CAFR_ASCII_71	KEY_Q					// 113 q
#define CAFR_ASCII_72	KEY_R					// 114 r
#define CAFR_ASCII_73	KEY_S					// 115 s
#define CAFR_ASCII_74	KEY_T					// 116 t
#define CAFR_ASCII_75	KEY_U					// 117 u
#define CAFR_ASCII_76	KEY_V					// 118 v
#define CAFR_ASCII_77	KEY_W					// 119 w
#define CAFR_ASCII_78	KEY_X					// 120 x
#define CAFR_ASCII_79	KEY_Y					// 121 y
#define CAFR_ASCII_7A	KEY_Z					// 122 z
#define CAFR_ASCII_7B	KEY_QUOTE + ALTGR_MASK			// 123 {
#define CAFR_ASCII_7C	KEY_TILDE + SHIFT_MASK			// 124 |
#define CAFR_ASCII_7D	KEY_BACKSLASH + ALTGR_MASK		// 125 }
#define CAFR_ASCII_7E	KEY_SEMICOLON + ALTGR_MASK		// 126 ~
#define CAFR_ASCII_7F	KEY_BACKSPACE				// 127
#define CAFR_ISO_8859_1_A0	KEY_SPACE				// 160       Nonbreakng Space
#define CAFR_ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define CAFR_ISO_8859_1_A2	KEY_4 + ALTGR_MASK			// 162 ¢     Cent SIGN
#define CAFR_ISO_8859_1_A3	KEY_3 + ALTGR_MASK			// 163 £     Pound Sign
#define CAFR_ISO_8859_1_A4	KEY_5 + ALTGR_MASK			// 164 ¤     Currency or Euro Sign
#define CAFR_ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define CAFR_ISO_8859_1_A6	KEY_7 + ALTGR_MASK			// 166 ¦     BROKEN BAR
#define CAFR_ISO_8859_1_A7	KEY_O + ALTGR_MASK			// 167 §     SECTION SIGN
#define CAFR_ISO_8859_1_A8	0					// 168 ¨     DIAERESIS
#define CAFR_ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define CAFR_ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define CAFR_ISO_8859_1_AB	KEY_NON_US_100				// 171 «     LEFT DOUBLE ANGLE QUOTE
#define CAFR_ISO_8859_1_AC	KEY_6 + ALTGR_MASK			// 172 ¬     NOT SIGN
#define CAFR_ISO_8859_1_AD	KEY_PERIOD + ALTGR_MASK			// 173       SOFT HYPHEN
#define CAFR_ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define CAFR_ISO_8859_1_AF	KEY_COMMA + ALTGR_MASK			// 175 ¯     MACRON
#define CAFR_ISO_8859_1_B0	KEY_NON_US_100 + ALTGR_MASK		// 176 °     DEGREE SIGN
#define CAFR_ISO_8859_1_B1	KEY_1 + ALTGR_MASK			// 177 ±     PLUS-MINUS SIGN
#define CAFR_ISO_8859_1_B2	KEY_8 + ALTGR_MASK			// 178 ²     SUPERSCRIPT TWO
#define CAFR_ISO_8859_1_B3	KEY_9 + ALTGR_MASK			// 179 ³     SUPERSCRIPT THREE
#define CAFR_ISO_8859_1_B4	0					// 180 ´     ACUTE ACCENT
#define CAFR_ISO_8859_1_B5	KEY_M + ALTGR_MASK			// 181 µ     MICRO SIGN
#define CAFR_ISO_8859_1_B6	KEY_P + ALTGR_MASK			// 182 ¶     PILCROW SIGN
#define CAFR_ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define CAFR_ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define CAFR_ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define CAFR_ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define CAFR_ISO_8859_1_BB	KEY_NON_US_100 + SHIFT_MASK		// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define CAFR_ISO_8859_1_BC	KEY_0 + ALTGR_MASK			// 188 ¼     FRACTION ONE QUARTER
#define CAFR_ISO_8859_1_BD	KEY_MINUS + ALTGR_MASK			// 189 ½     FRACTION ONE HALF
#define CAFR_ISO_8859_1_BE	KEY_EQUAL + ALTGR_MASK			// 190 ¾     FRACTION THREE QUARTERS
#define CAFR_ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define CAFR_ISO_8859_1_C0	CAFR_GRAVE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define CAFR_ISO_8859_1_C1	CAFR_ACUTE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define CAFR_ISO_8859_1_C2	CIRCUMFLEX_BITS	+ KEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define CAFR_ISO_8859_1_C3	0					// 195 Ã     A TILDE
#define CAFR_ISO_8859_1_C4	CAFR_DIAERESIS_BITS + KEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define CAFR_ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define CAFR_ISO_8859_1_C6	0					// 198 Æ     AE
#define CAFR_ISO_8859_1_C7	CAFR_CEDILLA_BITS + KEY_C + SHIFT_MASK	// 199 Ç     C CEDILLA
#define CAFR_ISO_8859_1_C8	CAFR_GRAVE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define CAFR_ISO_8859_1_C9	KEY_SLASH + SHIFT_MASK			// 201 É     E ACUTE
#define CAFR_ISO_8859_1_CA	CIRCUMFLEX_BITS + KEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define CAFR_ISO_8859_1_CB	CAFR_DIAERESIS_BITS + KEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define CAFR_ISO_8859_1_CC	CAFR_GRAVE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define CAFR_ISO_8859_1_CD	CAFR_ACUTE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define CAFR_ISO_8859_1_CE	CIRCUMFLEX_BITS + KEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define CAFR_ISO_8859_1_CF	CAFR_DIAERESIS_BITS + KEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define CAFR_ISO_8859_1_D0	0					// 208 Ð     ETH
#define CAFR_ISO_8859_1_D1	0					// 209 Ñ     N TILDE
#define CAFR_ISO_8859_1_D2	CAFR_GRAVE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define CAFR_ISO_8859_1_D3	CAFR_ACUTE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define CAFR_ISO_8859_1_D4	CIRCUMFLEX_BITS + KEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define CAFR_ISO_8859_1_D5	0					// 213 Õ     O TILDE
#define CAFR_ISO_8859_1_D6	CAFR_DIAERESIS_BITS + KEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define CAFR_ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define CAFR_ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define CAFR_ISO_8859_1_D9	CAFR_GRAVE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define CAFR_ISO_8859_1_DA	CAFR_ACUTE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define CAFR_ISO_8859_1_DB	CIRCUMFLEX_BITS + KEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define CAFR_ISO_8859_1_DC	CAFR_DIAERESIS_BITS + KEY_U			// 220 Ü     U DIAERESIS
#define CAFR_ISO_8859_1_DD	CAFR_ACUTE_ACCENT_BITS + KEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define CAFR_ISO_8859_1_DE	0					// 222 Þ     THORN
#define CAFR_ISO_8859_1_DF	0					// 223 ß     SHARP S
#define CAFR_ISO_8859_1_E0	CAFR_GRAVE_ACCENT_BITS + KEY_A		// 224 à     a GRAVE
#define CAFR_ISO_8859_1_E1	CAFR_ACUTE_ACCENT_BITS + KEY_A		// 225 á     a ACUTE
#define CAFR_ISO_8859_1_E2	CIRCUMFLEX_BITS + KEY_A			// 226 â     a CIRCUMFLEX
#define CAFR_ISO_8859_1_E3	0					// 227 ã     a TILDE
#define CAFR_ISO_8859_1_E4	CAFR_DIAERESIS_BITS + KEY_A			// 228 ä     a DIAERESIS
#define CAFR_ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define CAFR_ISO_8859_1_E6	0					// 230 æ     ae
#define CAFR_ISO_8859_1_E7	CAFR_CEDILLA_BITS + KEY_C			// 231 ç     c CEDILLA
#define CAFR_ISO_8859_1_E8	CAFR_GRAVE_ACCENT_BITS + KEY_E		// 232 è     e GRAVE
#define CAFR_ISO_8859_1_E9	KEY_SLASH				// 233 é     e ACUTE
#define CAFR_ISO_8859_1_EA	CIRCUMFLEX_BITS + KEY_E			// 234 ê     e CIRCUMFLEX
#define CAFR_ISO_8859_1_EB	CAFR_DIAERESIS_BITS + KEY_E			// 235 ë     e DIAERESIS
#define CAFR_ISO_8859_1_EC	CAFR_GRAVE_ACCENT_BITS + KEY_I		// 236 ì     i GRAVE
#define CAFR_ISO_8859_1_ED	CAFR_ACUTE_ACCENT_BITS + KEY_I		// 237 í     i ACUTE
#define CAFR_ISO_8859_1_EE	CIRCUMFLEX_BITS + KEY_I			// 238 î     i CIRCUMFLEX
#define CAFR_ISO_8859_1_EF	CAFR_DIAERESIS_BITS + KEY_I			// 239 ï     i DIAERESIS
#define CAFR_ISO_8859_1_F0	0					// 240 ð     ETH
#define CAFR_ISO_8859_1_F1	0					// 241 ñ     n TILDE
#define CAFR_ISO_8859_1_F2	CAFR_GRAVE_ACCENT_BITS + KEY_O		// 242 ò     o GRAVE
#define CAFR_ISO_8859_1_F3	CAFR_ACUTE_ACCENT_BITS + KEY_O		// 243 ó     o ACUTE
#define CAFR_ISO_8859_1_F4	CIRCUMFLEX_BITS + KEY_O			// 244 ô     o CIRCUMFLEX
#define CAFR_ISO_8859_1_F5	0					// 245 õ     o TILDE
#define CAFR_ISO_8859_1_F6	CAFR_DIAERESIS_BITS + KEY_O			// 246 ö     o DIAERESIS
#define CAFR_ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define CAFR_ISO_8859_1_F8	0					// 248 ø     o STROKE
#define CAFR_ISO_8859_1_F9	CAFR_GRAVE_ACCENT_BITS + KEY_U		// 249 ù     u GRAVE
#define CAFR_ISO_8859_1_FA	CAFR_ACUTE_ACCENT_BITS + KEY_U		// 250 ú     u ACUTE
#define CAFR_ISO_8859_1_FB	CIRCUMFLEX_BITS + KEY_U			// 251 û     u CIRCUMFLEX
#define CAFR_ISO_8859_1_FC	CAFR_DIAERESIS_BITS + KEY_U			// 252 ü     u DIAERESIS
#define CAFR_ISO_8859_1_FD	CAFR_ACUTE_ACCENT_BITS + KEY_Y		// 253 ý     y ACUTE
#define CAFR_ISO_8859_1_FE	0					// 254 þ     THORN
#define CAFR_ISO_8859_1_FF	CAFR_DIAERESIS_BITS + KEY_Y			// 255 ÿ     y DIAERESIS



#define CAML_DIAERESIS_BITS		0x0200
#define CAML_ACUTE_ACCENT_BITS	0x0300
#define CAML_CEDILLA_BITS		0x0400
#define CAML_GRAVE_ACCENT_BITS	0x0500
#define CAML_TILDE_BITS		0x0600
#define CAML_RING_ABOVE_BITS	 	0x0700
#define CAML_KEYCODE_TYPE		uint16_t
#define CAML_DEADKEY_CIRCUMFLEX	KEY_LEFT_BRACE
#define CAML_DEADKEY_DIAERESIS	KEY_LEFT_BRACE + SHIFT_MASK
#define CAML_DEADKEY_ACUTE_ACCENT	KEY_SEMICOLON + RCTRL_MASK
#define CAML_DEADKEY_CEDILLA		KEY_EQUAL + RCTRL_MASK
#define CAML_DEADKEY_GRAVE_ACCENT	KEY_LEFT_BRACE + ALTGR_MASK
#define CAML_DEADKEY_TILDE		KEY_RIGHT_BRACE + ALTGR_MASK
#define CAML_DEADKEY_RING_ABOVE	KEY_LEFT_BRACE + SHIFT_MASK + RCTRL_MASK
#define KEY_NON_US_100		63

#define CAML_ASCII_20	KEY_SPACE				// 32  
#define CAML_ASCII_21	KEY_1 + SHIFT_MASK			// 33 !
#define CAML_ASCII_22	KEY_PERIOD + SHIFT_MASK			// 34 "
#define CAML_ASCII_23	KEY_3 + SHIFT_MASK			// 35 #
#define CAML_ASCII_24	KEY_4 + SHIFT_MASK			// 36 $
#define CAML_ASCII_25	KEY_5 + SHIFT_MASK			// 37 %
#define CAML_ASCII_26	KEY_7 + SHIFT_MASK			// 38 &
#define CAML_ASCII_27	KEY_COMMA + SHIFT_MASK			// 39 '
#define CAML_ASCII_28	KEY_9 + SHIFT_MASK			// 40 (
#define CAML_ASCII_29	KEY_0 + SHIFT_MASK			// 41 )
#define CAML_ASCII_2A	KEY_8 + SHIFT_MASK			// 42 *
#define CAML_ASCII_2B	KEY_EQUAL + SHIFT_MASK			// 43 +
#define CAML_ASCII_2C	KEY_COMMA				// 44 ,
#define CAML_ASCII_2D	KEY_MINUS				// 45 -
#define CAML_ASCII_2E	KEY_PERIOD				// 46 .
#define CAML_ASCII_2F	KEY_TILDE				// 47 /
#define CAML_ASCII_30	KEY_0					// 48 0
#define CAML_ASCII_31	KEY_1					// 49 1
#define CAML_ASCII_32	KEY_2					// 50 2
#define CAML_ASCII_33	KEY_3					// 51 3
#define CAML_ASCII_34	KEY_4					// 52 4
#define CAML_ASCII_35	KEY_5					// 53 5
#define CAML_ASCII_36	KEY_6					// 54 6
#define CAML_ASCII_37	KEY_7					// 55 7
#define CAML_ASCII_38	KEY_8					// 55 8
#define CAML_ASCII_39	KEY_9					// 57 9
#define CAML_ASCII_3A	KEY_SEMICOLON + SHIFT_MASK		// 58 :
#define CAML_ASCII_3B	KEY_SEMICOLON				// 59 ;
#define CAML_ASCII_3C	KEY_COMMA + ALTGR_MASK			// 60 <
#define CAML_ASCII_3D	KEY_EQUAL				// 61 =
#define CAML_ASCII_3E	KEY_PERIOD + ALTGR_MASK			// 62 >
#define CAML_ASCII_3F	KEY_6 + SHIFT_MASK			// 63 ?
#define CAML_ASCII_40	KEY_2 + SHIFT_MASK			// 64 @
#define CAML_ASCII_41	KEY_A + SHIFT_MASK			// 65 A
#define CAML_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define CAML_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define CAML_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define CAML_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define CAML_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define CAML_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define CAML_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define CAML_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define CAML_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define CAML_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define CAML_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define CAML_ASCII_4D	KEY_M + SHIFT_MASK			// 77 M
#define CAML_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define CAML_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define CAML_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define CAML_ASCII_51	KEY_Q + SHIFT_MASK			// 81 Q
#define CAML_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define CAML_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define CAML_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define CAML_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define CAML_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define CAML_ASCII_57	KEY_W + SHIFT_MASK			// 87 W
#define CAML_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define CAML_ASCII_59	KEY_Y + SHIFT_MASK			// 89 Y
#define CAML_ASCII_5A	KEY_Z + SHIFT_MASK			// 90 Z
#define CAML_ASCII_5B	KEY_9 + ALTGR_MASK			// 91 [
#define CAML_ASCII_5C	KEY_TILDE + SHIFT_MASK			// 92
#define CAML_ASCII_5D	KEY_0 + ALTGR_MASK			// 93 ]
#define CAML_ASCII_5E	CIRCUMFLEX_BITS + KEY_SPACE		// 94 ^
#define CAML_ASCII_5F	KEY_MINUS + SHIFT_MASK			// 95 _
#define CAML_ASCII_60	CAML_GRAVE_ACCENT_BITS + KEY_SPACE		// 96 `
#define CAML_ASCII_61	KEY_A					// 97 a
#define CAML_ASCII_62	KEY_B					// 98 b
#define CAML_ASCII_63	KEY_C					// 99 c
#define CAML_ASCII_64	KEY_D					// 100 d
#define CAML_ASCII_65	KEY_E					// 101 e
#define CAML_ASCII_66	KEY_F					// 102 f
#define CAML_ASCII_67	KEY_G					// 103 g
#define CAML_ASCII_68	KEY_H					// 104 h
#define CAML_ASCII_69	KEY_I					// 105 i
#define CAML_ASCII_6A	KEY_J					// 106 j
#define CAML_ASCII_6B	KEY_K					// 107 k
#define CAML_ASCII_6C	KEY_L					// 108 l
#define CAML_ASCII_6D	KEY_M					// 109 m
#define CAML_ASCII_6E	KEY_N					// 110 n
#define CAML_ASCII_6F	KEY_O					// 111 o
#define CAML_ASCII_70	KEY_P					// 112 p
#define CAML_ASCII_71	KEY_Q					// 113 q
#define CAML_ASCII_72	KEY_R					// 114 r
#define CAML_ASCII_73	KEY_S					// 115 s
#define CAML_ASCII_74	KEY_T					// 116 t
#define CAML_ASCII_75	KEY_U					// 117 u
#define CAML_ASCII_76	KEY_V					// 118 v
#define CAML_ASCII_77	KEY_W					// 119 w
#define CAML_ASCII_78	KEY_X					// 120 x
#define CAML_ASCII_79	KEY_Y					// 121 y
#define CAML_ASCII_7A	KEY_Z					// 122 z
#define CAML_ASCII_7B	KEY_7 + ALTGR_MASK			// 123 {
#define CAML_ASCII_7C	KEY_TILDE + ALTGR_MASK			// 124 |
#define CAML_ASCII_7D	KEY_8 + ALTGR_MASK			// 125 }
#define CAML_ASCII_7E	KEY_RIGHT_BRACE + RCTRL_MASK		// 126 ~
#define CAML_ASCII_7F	KEY_BACKSPACE				// 127
#define CAML_ISO_8859_1_A0	KEY_SPACE + ALTGR_MASK			// 160       Nonbreakng Space
#define CAML_ISO_8859_1_A1	KEY_1 + SHIFT_MASK + RCTRL_MASK		// 161 ¡     Inverted Exclamation
#define CAML_ISO_8859_1_A2	KEY_C + RCTRL_MASK			// 162 ¢     Cent SIGN
#define CAML_ISO_8859_1_A3	KEY_3 + SHIFT_MASK + RCTRL_MASK		// 163 £     Pound Sign
#define CAML_ISO_8859_1_A4	KEY_4 + SHIFT_MASK + RCTRL_MASK		// 164 ¤     Currency or Euro Sign
#define CAML_ISO_8859_1_A5	KEY_Y + SHIFT_MASK + RCTRL_MASK		// 165 ¥     YEN SIGN
#define CAML_ISO_8859_1_A6	KEY_NON_US_100 + SHIFT_MASK + RCTRL_MASK// 166 ¦     BROKEN BAR
#define CAML_ISO_8859_1_A7	KEY_S + SHIFT_MASK + RCTRL_MASK		// 167 §     SECTION SIGN
#define CAML_ISO_8859_1_A8	CAML_DIAERESIS_BITS + KEY_SPACE		// 168 ¨     DIAERESIS
#define CAML_ISO_8859_1_A9	KEY_C + SHIFT_MASK + RCTRL_MASK		// 169 ©     COPYRIGHT SIGN
#define CAML_ISO_8859_1_AA	KEY_F + SHIFT_MASK + RCTRL_MASK		// 170 ª     FEMININE ORDINAL
#define CAML_ISO_8859_1_AB	KEY_Z + ALTGR_MASK			// 171 «     LEFT DOUBLE ANGLE QUOTE
#define CAML_ISO_8859_1_AC	KEY_EQUAL + ALTGR_MASK			// 172 ¬     NOT SIGN
#define CAML_ISO_8859_1_AD	KEY_TILDE + SHIFT_MASK + RCTRL_MASK	// 173       SOFT HYPHEN
#define CAML_ISO_8859_1_AE	KEY_R + SHIFT_MASK + RCTRL_MASK		// 174 ®     REGISTERED SIGN
#define CAML_ISO_8859_1_AF	0  // special dead key - no implemented	// 175 ¯     MACRON
#define CAML_ISO_8859_1_B0	KEY_SEMICOLON + ALTGR_MASK		// 176 °     DEGREE SIGN
#define CAML_ISO_8859_1_B1	KEY_9 + SHIFT_MASK + RCTRL_MASK		// 177 ±     PLUS-MINUS SIGN
#define CAML_ISO_8859_1_B2	KEY_2 + RCTRL_MASK			// 178 ²     SUPERSCRIPT TWO
#define CAML_ISO_8859_1_B3	KEY_3 + RCTRL_MASK			// 179 ³     SUPERSCRIPT THREE
#define CAML_ISO_8859_1_B4	CAML_ACUTE_ACCENT_BITS + KEY_SPACE		// 180 ´     ACUTE ACCENT
#define CAML_ISO_8859_1_B5	KEY_M + RCTRL_MASK			// 181 µ     MICRO SIGN
#define CAML_ISO_8859_1_B6	KEY_R + RCTRL_MASK			// 182 ¶     PILCROW SIGN
#define CAML_ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define CAML_ISO_8859_1_B8	CAML_CEDILLA_BITS + KEY_SPACE		// 184 ¸     CEDILLA
#define CAML_ISO_8859_1_B9	KEY_1 + RCTRL_MASK			// 185 ¹     SUPERSCRIPT ONE
#define CAML_ISO_8859_1_BA	KEY_M + SHIFT_MASK + RCTRL_MASK		// 186 º     MASCULINE ORDINAL
#define CAML_ISO_8859_1_BB	KEY_X + ALTGR_MASK			// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define CAML_ISO_8859_1_BC	KEY_4 + RCTRL_MASK			// 188 ¼     FRACTION ONE QUARTER
#define CAML_ISO_8859_1_BD	KEY_5 + RCTRL_MASK			// 189 ½     FRACTION ONE HALF
#define CAML_ISO_8859_1_BE	KEY_6 + RCTRL_MASK			// 190 ¾     FRACTION THREE QUARTERS
#define CAML_ISO_8859_1_BF	KEY_MINUS + SHIFT_MASK + RCTRL_MASK	// 191 ¿     INVERTED QUESTION MARK
#define CAML_ISO_8859_1_C0	KEY_BACKSLASH + SHIFT_MASK		// 192 À     A GRAVE
#define CAML_ISO_8859_1_C1	CAML_ACUTE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define CAML_ISO_8859_1_C2	CIRCUMFLEX_BITS	+ KEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define CAML_ISO_8859_1_C3	CAML_TILDE_BITS + KEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define CAML_ISO_8859_1_C4	CAML_DIAERESIS_BITS + KEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define CAML_ISO_8859_1_C5	CAML_RING_ABOVE_BITS + KEY_A + SHIFT_MASK	// 197 Å     A RING ABOVE
#define CAML_ISO_8859_1_C6	KEY_A + SHIFT_MASK + RCTRL_MASK		// 198 Æ     AE
#define CAML_ISO_8859_1_C7	KEY_RIGHT_BRACE + SHIFT_MASK		// 199 Ç     C CEDILLA
#define CAML_ISO_8859_1_C8	KEY_QUOTE + SHIFT_MASK			// 200 È     E GRAVE
#define CAML_ISO_8859_1_C9	KEY_SLASH + SHIFT_MASK			// 201 É     E ACUTE
#define CAML_ISO_8859_1_CA	CIRCUMFLEX_BITS + KEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define CAML_ISO_8859_1_CB	CAML_DIAERESIS_BITS + KEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define CAML_ISO_8859_1_CC	CAML_GRAVE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define CAML_ISO_8859_1_CD	CAML_ACUTE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define CAML_ISO_8859_1_CE	CIRCUMFLEX_BITS + KEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define CAML_ISO_8859_1_CF	CAML_DIAERESIS_BITS + KEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define CAML_ISO_8859_1_D0	KEY_D + SHIFT_MASK + RCTRL_MASK		// 208 Ð     ETH
#define CAML_ISO_8859_1_D1	CAML_TILDE_BITS + KEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define CAML_ISO_8859_1_D2	CAML_GRAVE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define CAML_ISO_8859_1_D3	CAML_ACUTE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define CAML_ISO_8859_1_D4	CIRCUMFLEX_BITS + KEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define CAML_ISO_8859_1_D5	CAML_TILDE_BITS + KEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define CAML_ISO_8859_1_D6	CAML_DIAERESIS_BITS + KEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define CAML_ISO_8859_1_D7	KEY_COMMA + SHIFT_MASK + RCTRL_MASK	// 215 ×     MULTIPLICATION
#define CAML_ISO_8859_1_D8	KEY_O + SHIFT_MASK + RCTRL_MASK		// 216 Ø     O STROKE
#define CAML_ISO_8859_1_D9	KEY_NON_US_100 + SHIFT_MASK		// 217 Ù     U GRAVE
#define CAML_ISO_8859_1_DA	CAML_ACUTE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define CAML_ISO_8859_1_DB	CIRCUMFLEX_BITS + KEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define CAML_ISO_8859_1_DC	CAML_DIAERESIS_BITS + KEY_U			// 220 Ü     U DIAERESIS
#define CAML_ISO_8859_1_DD	CAML_ACUTE_ACCENT_BITS + KEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define CAML_ISO_8859_1_DE	KEY_P + RCTRL_MASK + SHIFT_MASK		// 222 Þ     THORN
#define CAML_ISO_8859_1_DF	KEY_S + RCTRL_MASK			// 223 ß     SHARP S
#define CAML_ISO_8859_1_E0	KEY_BACKSLASH				// 224 à     a GRAVE
#define CAML_ISO_8859_1_E1	CAML_ACUTE_ACCENT_BITS + KEY_A		// 225 á     a ACUTE
#define CAML_ISO_8859_1_E2	CIRCUMFLEX_BITS + KEY_A			// 226 â     a CIRCUMFLEX
#define CAML_ISO_8859_1_E3	CAML_TILDE_BITS + KEY_A			// 227 ã     a TILDE
#define CAML_ISO_8859_1_E4	CAML_DIAERESIS_BITS + KEY_A			// 228 ä     a DIAERESIS
#define CAML_ISO_8859_1_E5	CAML_RING_ABOVE_BITS + KEY_A			// 229 å     a RING ABOVE
#define CAML_ISO_8859_1_E6	KEY_A + RCTRL_MASK			// 230 æ     ae
#define CAML_ISO_8859_1_E7	KEY_RIGHT_BRACE				// 231 ç     c CEDILLA
#define CAML_ISO_8859_1_E8	KEY_QUOTE				// 232 è     e GRAVE
#define CAML_ISO_8859_1_E9	KEY_SLASH				// 233 é     e ACUTE
#define CAML_ISO_8859_1_EA	CIRCUMFLEX_BITS + KEY_E			// 234 ê     e CIRCUMFLEX
#define CAML_ISO_8859_1_EB	CAML_DIAERESIS_BITS + KEY_E			// 235 ë     e DIAERESIS
#define CAML_ISO_8859_1_EC	CAML_GRAVE_ACCENT_BITS + KEY_I		// 236 ì     i GRAVE
#define CAML_ISO_8859_1_ED	CAML_ACUTE_ACCENT_BITS + KEY_I		// 237 í     i ACUTE
#define CAML_ISO_8859_1_EE	CIRCUMFLEX_BITS + KEY_I			// 238 î     i CIRCUMFLEX
#define CAML_ISO_8859_1_EF	CAML_DIAERESIS_BITS + KEY_I			// 239 ï     i DIAERESIS
#define CAML_ISO_8859_1_F0	KEY_D + RCTRL_MASK			// 240 ð     ETH
#define CAML_ISO_8859_1_F1	CAML_TILDE_BITS + KEY_N			// 241 ñ     n TILDE
#define CAML_ISO_8859_1_F2	CAML_GRAVE_ACCENT_BITS + KEY_O		// 242 ò     o GRAVE
#define CAML_ISO_8859_1_F3	CAML_ACUTE_ACCENT_BITS + KEY_O		// 243 ó     o ACUTE
#define CAML_ISO_8859_1_F4	CIRCUMFLEX_BITS + KEY_O			// 244 ô     o CIRCUMFLEX
#define CAML_ISO_8859_1_F5	CAML_TILDE_BITS + KEY_O			// 245 õ     o TILDE
#define CAML_ISO_8859_1_F6	CAML_DIAERESIS_BITS + KEY_O			// 246 ö     o DIAERESIS
#define CAML_ISO_8859_1_F7	KEY_PERIOD + SHIFT_MASK + RCTRL_MASK	// 247 ÷     DIVISION
#define CAML_ISO_8859_1_F8	KEY_O + RCTRL_MASK			// 248 ø     o STROKE
#define CAML_ISO_8859_1_F9	KEY_NON_US_100				// 249 ù     u GRAVE
#define CAML_ISO_8859_1_FA	CAML_ACUTE_ACCENT_BITS + KEY_U		// 250 ú     u ACUTE
#define CAML_ISO_8859_1_FB	CIRCUMFLEX_BITS + KEY_U			// 251 û     u CIRCUMFLEX
#define CAML_ISO_8859_1_FC	CAML_DIAERESIS_BITS + KEY_U			// 252 ü     u DIAERESIS
#define CAML_ISO_8859_1_FD	CAML_ACUTE_ACCENT_BITS + KEY_Y		// 253 ý     y ACUTE
#define CAML_ISO_8859_1_FE	KEY_P + RCTRL_MASK			// 254 þ     THORN
#define CAML_ISO_8859_1_FF	CAML_DIAERESIS_BITS + KEY_Y			// 255 ÿ     y DIAERESIS



#define UK_KEYCODE_TYPE		uint8_t
#define KEY_NON_US_100		63

#define UK_ASCII_20	KEY_SPACE				// 32  
#define UK_ASCII_21	KEY_1 + SHIFT_MASK			// 33 !
#define UK_ASCII_22	KEY_2 + SHIFT_MASK			// 34 "
#define UK_ASCII_23	KEY_BACKSPACE				// 35 #
#define UK_ASCII_24	KEY_4 + SHIFT_MASK			// 36 $
#define UK_ASCII_25	KEY_5 + SHIFT_MASK			// 37 %
#define UK_ASCII_26	KEY_7 + SHIFT_MASK			// 38 &
#define UK_ASCII_27	KEY_QUOTE				// 39 '
#define UK_ASCII_28	KEY_9 + SHIFT_MASK			// 40 (
#define UK_ASCII_29	KEY_0 + SHIFT_MASK			// 41 )
#define UK_ASCII_2A	KEY_8 + SHIFT_MASK			// 42 *
#define UK_ASCII_2B	KEY_EQUAL + SHIFT_MASK			// 43 +
#define UK_ASCII_2C	KEY_COMMA				// 44 ,
#define UK_ASCII_2D	KEY_MINUS				// 45 -
#define UK_ASCII_2E	KEY_PERIOD				// 46 .
#define UK_ASCII_2F	KEY_SLASH				// 47 /
#define UK_ASCII_30	KEY_0					// 48 0
#define UK_ASCII_31	KEY_1					// 49 1
#define UK_ASCII_32	KEY_2					// 50 2
#define UK_ASCII_33	KEY_3					// 51 3
#define UK_ASCII_34	KEY_4					// 52 4
#define UK_ASCII_35	KEY_5					// 53 5
#define UK_ASCII_36	KEY_6					// 54 6
#define UK_ASCII_37	KEY_7					// 55 7
#define UK_ASCII_38	KEY_8					// 55 8
#define UK_ASCII_39	KEY_9					// 57 9
#define UK_ASCII_3A	KEY_SEMICOLON + SHIFT_MASK		// 58 :
#define UK_ASCII_3B	KEY_SEMICOLON				// 59 ;
#define UK_ASCII_3C	KEY_COMMA + SHIFT_MASK			// 60 <
#define UK_ASCII_3D	KEY_EQUAL				// 61 =
#define UK_ASCII_3E	KEY_PERIOD + SHIFT_MASK			// 62 >
#define UK_ASCII_3F	KEY_SLASH + SHIFT_MASK			// 63 ?
#define UK_ASCII_40	KEY_QUOTE + SHIFT_MASK			// 64 @
#define UK_ASCII_41	KEY_A + SHIFT_MASK			// 65 A
#define UK_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define UK_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define UK_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define UK_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define UK_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define UK_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define UK_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define UK_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define UK_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define UK_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define UK_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define UK_ASCII_4D	KEY_M + SHIFT_MASK			// 77 M
#define UK_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define UK_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define UK_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define UK_ASCII_51	KEY_Q + SHIFT_MASK			// 81 Q
#define UK_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define UK_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define UK_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define UK_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define UK_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define UK_ASCII_57	KEY_W + SHIFT_MASK			// 87 W
#define UK_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define UK_ASCII_59	KEY_Y + SHIFT_MASK			// 89 Y
#define UK_ASCII_5A	KEY_Z + SHIFT_MASK			// 90 Z
#define UK_ASCII_5B	KEY_LEFT_BRACE				// 91 [
#define UK_ASCII_5C	KEY_NON_US_100				// 92
#define UK_ASCII_5D	KEY_RIGHT_BRACE				// 93 ]
#define UK_ASCII_5E	KEY_6 + SHIFT_MASK			// 94 ^
#define UK_ASCII_5F	KEY_MINUS + SHIFT_MASK			// 95 _
#define UK_ASCII_60	KEY_TILDE				// 96 `
#define UK_ASCII_61	KEY_A					// 97 a
#define UK_ASCII_62	KEY_B					// 98 b
#define UK_ASCII_63	KEY_C					// 99 c
#define UK_ASCII_64	KEY_D					// 100 d
#define UK_ASCII_65	KEY_E					// 101 e
#define UK_ASCII_66	KEY_F					// 102 f
#define UK_ASCII_67	KEY_G					// 103 g
#define UK_ASCII_68	KEY_H					// 104 h
#define UK_ASCII_69	KEY_I					// 105 i
#define UK_ASCII_6A	KEY_J					// 106 j
#define UK_ASCII_6B	KEY_K					// 107 k
#define UK_ASCII_6C	KEY_L					// 108 l
#define UK_ASCII_6D	KEY_M					// 109 m
#define UK_ASCII_6E	KEY_N					// 110 n
#define UK_ASCII_6F	KEY_O					// 111 o
#define UK_ASCII_70	KEY_P					// 112 p
#define UK_ASCII_71	KEY_Q					// 113 q
#define UK_ASCII_72	KEY_R					// 114 r
#define UK_ASCII_73	KEY_S					// 115 s
#define UK_ASCII_74	KEY_T					// 116 t
#define UK_ASCII_75	KEY_U					// 117 u
#define UK_ASCII_76	KEY_V					// 118 v
#define UK_ASCII_77	KEY_W					// 119 w
#define UK_ASCII_78	KEY_X					// 120 x
#define UK_ASCII_79	KEY_Y					// 121 y
#define UK_ASCII_7A	KEY_Z					// 122 z
#define UK_ASCII_7B	KEY_LEFT_BRACE + SHIFT_MASK		// 123 {
#define UK_ASCII_7C	KEY_NON_US_100 + SHIFT_MASK		// 124 |
#define UK_ASCII_7D	KEY_RIGHT_BRACE + SHIFT_MASK		// 125 }
#define UK_ASCII_7E	KEY_BACKSLASH + SHIFT_MASK		// 126 ~
#define UK_ASCII_7F	KEY_BACKSPACE				// 127

#define UK_ISO_8859_1_A0	KEY_SPACE				// 160       Nonbreakng Space
#define UK_ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define UK_ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define UK_ISO_8859_1_A3	KEY_3 + SHIFT_MASK			// 163 £     Pound Sign
#define UK_ISO_8859_1_A4	0					// 164 ¤     Currency or Euro Sign
#define UK_ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define UK_ISO_8859_1_A6	KEY_TILDE + ALTGR_MASK			// 166 ¦     BROKEN BAR
#define UK_ISO_8859_1_A7	0					// 167 §     SECTION SIGN
#define UK_ISO_8859_1_A8	0					// 168 ¨     DIAERESIS
#define UK_ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define UK_ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define UK_ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define UK_ISO_8859_1_AC	KEY_TILDE + SHIFT_MASK			// 172 ¬     NOT SIGN
#define UK_ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define UK_ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define UK_ISO_8859_1_AF	0					// 175 ¯     MACRON
#define UK_ISO_8859_1_B0	0					// 176 °     DEGREE SIGN
#define UK_ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define UK_ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define UK_ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define UK_ISO_8859_1_B4	0					// 180 ´     ACUTE ACCENT
#define UK_ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define UK_ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define UK_ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define UK_ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define UK_ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define UK_ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define UK_ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define UK_ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define UK_ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define UK_ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define UK_ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define UK_ISO_8859_1_C0	0					// 192 À     A GRAVE
#define UK_ISO_8859_1_C1	KEY_A + ALTGR_MASK + SHIFT_MASK		// 193 Á     A ACUTE
#define UK_ISO_8859_1_C2	0					// 194 Â     A CIRCUMFLEX
#define UK_ISO_8859_1_C3	0					// 195 Ã     A TILDE
#define UK_ISO_8859_1_C4	0					// 196 Ä     A DIAERESIS
#define UK_ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define UK_ISO_8859_1_C6	0					// 198 Æ     AE
#define UK_ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define UK_ISO_8859_1_C8	0					// 200 È     E GRAVE
#define UK_ISO_8859_1_C9	KEY_E + ALTGR_MASK + SHIFT_MASK		// 201 É     E ACUTE
#define UK_ISO_8859_1_CA	0					// 202 Ê     E CIRCUMFLEX
#define UK_ISO_8859_1_CB	0					// 203 Ë     E DIAERESIS
#define UK_ISO_8859_1_CC	0					// 204 Ì     I GRAVE
#define UK_ISO_8859_1_CD	KEY_I + ALTGR_MASK + SHIFT_MASK		// 205 Í     I ACUTE
#define UK_ISO_8859_1_CE	0					// 206 Î     I CIRCUMFLEX
#define UK_ISO_8859_1_CF	0					// 207 Ï     I DIAERESIS
#define UK_ISO_8859_1_D0	0					// 208 Ð     ETH
#define UK_ISO_8859_1_D1	0					// 209 Ñ     N TILDE
#define UK_ISO_8859_1_D2	0					// 210 Ò     O GRAVE
#define UK_ISO_8859_1_D3	KEY_O + ALTGR_MASK + SHIFT_MASK		// 211 Ó     O ACUTE
#define UK_ISO_8859_1_D4	0					// 212 Ô     O CIRCUMFLEX
#define UK_ISO_8859_1_D5	0					// 213 Õ     O TILDE
#define UK_ISO_8859_1_D6	0					// 214 Ö     O DIAERESIS
#define UK_ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define UK_ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define UK_ISO_8859_1_D9	0					// 217 Ù     U GRAVE
#define UK_ISO_8859_1_DA	KEY_U + ALTGR_MASK + SHIFT_MASK		// 218 Ú     U ACUTE
#define UK_ISO_8859_1_DB	0					// 219 Û     U CIRCUMFLEX
#define UK_ISO_8859_1_DC	0					// 220 Ü     U DIAERESIS
#define UK_ISO_8859_1_DD	0					// 221 Ý     Y ACUTE
#define UK_ISO_8859_1_DE	0					// 222 Þ     THORN
#define UK_ISO_8859_1_DF	0					// 223 ß     SHARP S
#define UK_ISO_8859_1_E0	0					// 224 à     a GRAVE
#define UK_ISO_8859_1_E1	KEY_A + ALTGR_MASK			// 225 á     a ACUTE
#define UK_ISO_8859_1_E2	0					// 226 â     a CIRCUMFLEX
#define UK_ISO_8859_1_E3	0					// 227 ã     a TILDE
#define UK_ISO_8859_1_E4	0					// 228 ä     a DIAERESIS
#define UK_ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define UK_ISO_8859_1_E6	0					// 230 æ     ae
#define UK_ISO_8859_1_E7	0					// 231 ç     c CEDILLA
#define UK_ISO_8859_1_E8	0					// 232 è     e GRAVE
#define UK_ISO_8859_1_E9	KEY_E + ALTGR_MASK			// 233 é     e ACUTE
#define UK_ISO_8859_1_EA	0					// 234 ê     e CIRCUMFLEX
#define UK_ISO_8859_1_EB	0					// 235 ë     e DIAERESIS
#define UK_ISO_8859_1_EC	0					// 236 ì     i GRAVE
#define UK_ISO_8859_1_ED	KEY_I + ALTGR_MASK			// 237 í     i ACUTE
#define UK_ISO_8859_1_EE	0					// 238 î     i CIRCUMFLEX
#define UK_ISO_8859_1_EF	0					// 239 ï     i DIAERESIS
#define UK_ISO_8859_1_F0	0					// 240 ð     ETH
#define UK_ISO_8859_1_F1	0					// 241 ñ     n TILDE
#define UK_ISO_8859_1_F2	0					// 242 ò     o GRAVE
#define UK_ISO_8859_1_F3	KEY_O + ALTGR_MASK			// 243 ó     o ACUTE
#define UK_ISO_8859_1_F4	0					// 244 ô     o CIRCUMFLEX
#define UK_ISO_8859_1_F5	0					// 245 õ     o TILDE
#define UK_ISO_8859_1_F6	0					// 246 ö     o DIAERESIS
#define UK_ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define UK_ISO_8859_1_F8	0					// 248 ø     o STROKE
#define UK_ISO_8859_1_F9	0					// 249 ù     u GRAVE
#define UK_ISO_8859_1_FA	KEY_U + ALTGR_MASK			// 250 ú     u ACUTE
#define UK_ISO_8859_1_FB	0					// 251 û     u CIRCUMFLEX
#define UK_ISO_8859_1_FC	0					// 252 ü     u DIAERESIS
#define UK_ISO_8859_1_FD	0					// 253 ý     y ACUTE
#define UK_ISO_8859_1_FE	0					// 254 þ     THORN
#define UK_ISO_8859_1_FF	0					// 255 ÿ     y DIAERESIS
#define UK_UNICODE_20AC	KEY_4 + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define UK_UNICODE_EXTRA00	0x20AC
#define UK_KEYCODE_EXTRA00	KEY_4 + ALTGR_MASK			// 20AC €    Euro Sign




#define FI_ACUTE_ACCENT_BITS	0x0200
#define FI_GRAVE_ACCENT_BITS	0x0300
#define FI_TILDE_BITS		0x0400
#define FI_DIAERESIS_BITS		0x0500
#define FI_KEYCODE_TYPE		uint16_t
#define FI_DEADKEY_CIRCUMFLEX	KEY_RIGHT_BRACE + SHIFT_MASK
#define FI_DEADKEY_ACUTE_ACCENT	KEY_EQUAL
#define FI_DEADKEY_GRAVE_ACCENT	KEY_EQUAL + SHIFT_MASK
#define FI_DEADKEY_TILDE		KEY_RIGHT_BRACE + ALTGR_MASK
#define FI_DEADKEY_DIAERESIS	KEY_RIGHT_BRACE
#define KEY_NON_US_100		63

#define FI_ASCII_20	KEY_SPACE				// 32  
#define FI_ASCII_21	KEY_1 + SHIFT_MASK			// 33 !
#define FI_ASCII_22	KEY_2 + SHIFT_MASK			// 34 "
#define FI_ASCII_23	KEY_3 + SHIFT_MASK			// 35 #
#define FI_ASCII_24	KEY_4 + ALTGR_MASK			// 36 $
#define FI_ASCII_25	KEY_5 + SHIFT_MASK			// 37 %
#define FI_ASCII_26	KEY_6 + SHIFT_MASK			// 38 &
#define FI_ASCII_27	KEY_BACKSLASH				// 39 '
#define FI_ASCII_28	KEY_8 + SHIFT_MASK			// 40 (
#define FI_ASCII_29	KEY_9 + SHIFT_MASK			// 41 )
#define FI_ASCII_2A	KEY_BACKSLASH + SHIFT_MASK		// 42 *
#define FI_ASCII_2B	KEY_MINUS				// 43 +
#define FI_ASCII_2C	KEY_COMMA				// 44 ,
#define FI_ASCII_2D	KEY_SLASH				// 45 -
#define FI_ASCII_2E	KEY_PERIOD				// 46 .
#define FI_ASCII_2F	KEY_7 + SHIFT_MASK			// 47 /
#define FI_ASCII_30	KEY_0					// 48 0
#define FI_ASCII_31	KEY_1					// 49 1
#define FI_ASCII_32	KEY_2					// 50 2
#define FI_ASCII_33	KEY_3					// 51 3
#define FI_ASCII_34	KEY_4					// 52 4
#define FI_ASCII_35	KEY_5					// 53 5
#define FI_ASCII_36	KEY_6					// 54 6
#define FI_ASCII_37	KEY_7					// 55 7
#define FI_ASCII_38	KEY_8					// 55 8
#define FI_ASCII_39	KEY_9					// 57 9
#define FI_ASCII_3A	KEY_PERIOD + SHIFT_MASK			// 58 :
#define FI_ASCII_3B	KEY_COMMA + SHIFT_MASK			// 59 ;
#define FI_ASCII_3C	KEY_NON_US_100				// 60 <
#define FI_ASCII_3D	KEY_0 + SHIFT_MASK			// 61 =
#define FI_ASCII_3E	KEY_NON_US_100 + SHIFT_MASK		// 62 >
#define FI_ASCII_3F	KEY_MINUS + SHIFT_MASK			// 63 ?
#define FI_ASCII_40	KEY_2 + ALTGR_MASK			// 64 @
#define FI_ASCII_41	KEY_A + SHIFT_MASK			// 65 A
#define FI_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define FI_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define FI_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define FI_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define FI_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define FI_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define FI_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define FI_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define FI_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define FI_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define FI_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define FI_ASCII_4D	KEY_M + SHIFT_MASK			// 77 M
#define FI_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define FI_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define FI_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define FI_ASCII_51	KEY_Q + SHIFT_MASK			// 81 Q
#define FI_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define FI_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define FI_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define FI_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define FI_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define FI_ASCII_57	KEY_W + SHIFT_MASK			// 87 W
#define FI_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define FI_ASCII_59	KEY_Y + SHIFT_MASK			// 89 Y
#define FI_ASCII_5A	KEY_Z + SHIFT_MASK			// 90 Z
#define FI_ASCII_5B	KEY_8 + ALTGR_MASK			// 91 [
#define FI_ASCII_5C	KEY_MINUS + ALTGR_MASK			// 92
#define FI_ASCII_5D	KEY_9 + ALTGR_MASK			// 93 ]
#define FI_ASCII_5E	CIRCUMFLEX_BITS + KEY_SPACE		// 94 ^
#define FI_ASCII_5F	KEY_SLASH + SHIFT_MASK			// 95 _
#define FI_ASCII_60	FI_GRAVE_ACCENT_BITS + KEY_SPACE		// 96 `
#define FI_ASCII_61	KEY_A					// 97 a
#define FI_ASCII_62	KEY_B					// 98 b
#define FI_ASCII_63	KEY_C					// 99 c
#define FI_ASCII_64	KEY_D					// 100 d
#define FI_ASCII_65	KEY_E					// 101 e
#define FI_ASCII_66	KEY_F					// 102 f
#define FI_ASCII_67	KEY_G					// 103 g
#define FI_ASCII_68	KEY_H					// 104 h
#define FI_ASCII_69	KEY_I					// 105 i
#define FI_ASCII_6A	KEY_J					// 106 j
#define FI_ASCII_6B	KEY_K					// 107 k
#define FI_ASCII_6C	KEY_L					// 108 l
#define FI_ASCII_6D	KEY_M					// 109 m
#define FI_ASCII_6E	KEY_N					// 110 n
#define FI_ASCII_6F	KEY_O					// 111 o
#define FI_ASCII_70	KEY_P					// 112 p
#define FI_ASCII_71	KEY_Q					// 113 q
#define FI_ASCII_72	KEY_R					// 114 r
#define FI_ASCII_73	KEY_S					// 115 s
#define FI_ASCII_74	KEY_T					// 116 t
#define FI_ASCII_75	KEY_U					// 117 u
#define FI_ASCII_76	KEY_V					// 118 v
#define FI_ASCII_77	KEY_W					// 119 w
#define FI_ASCII_78	KEY_X					// 120 x
#define FI_ASCII_79	KEY_Y					// 121 y
#define FI_ASCII_7A	KEY_Z					// 122 z
#define FI_ASCII_7B	KEY_7 + ALTGR_MASK			// 123 {
#define FI_ASCII_7C	KEY_NON_US_100 + ALTGR_MASK		// 124 |
#define FI_ASCII_7D	KEY_0 + ALTGR_MASK			// 125 }
#define FI_ASCII_7E	FI_TILDE_BITS + KEY_SPACE			// 126 ~
#define FI_ASCII_7F	KEY_BACKSPACE				// 127
#define FI_ISO_8859_1_A0	KEY_SPACE + ALTGR_MASK			// 160       Nonbreakng Space
#define FI_ISO_8859_1_A1	KEY_1 + SHIFT_MASK + ALTGR_MASK		// 161 ¡     Inverted Exclamation
#define FI_ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define FI_ISO_8859_1_A3	KEY_3 + ALTGR_MASK			// 163 £     Pound Sign
#define FI_ISO_8859_1_A4	KEY_4 + SHIFT_MASK			// 164 ¤     Currency or Euro Sign
#define FI_ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define FI_ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define FI_ISO_8859_1_A7	KEY_TILDE				// 167 §     SECTION SIGN
#define FI_ISO_8859_1_A8	FI_DIAERESIS_BITS + KEY_SPACE		// 168 ¨     DIAERESIS
#define FI_ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define FI_ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define FI_ISO_8859_1_AB	KEY_4 + ALTGR_MASK + SHIFT_MASK		// 171 «     LEFT DOUBLE ANGLE QUOTE
#define FI_ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define FI_ISO_8859_1_AD	KEY_SLASH + ALTGR_MASK			// 173       SOFT HYPHEN
#define FI_ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define FI_ISO_8859_1_AF	0					// 175 ¯     MACRON
#define FI_ISO_8859_1_B0	KEY_0 + ALTGR_MASK + SHIFT_MASK		// 176 °     DEGREE SIGN
#define FI_ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define FI_ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define FI_ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define FI_ISO_8859_1_B4	FI_ACUTE_ACCENT_BITS + KEY_SPACE		// 180 ´     ACUTE ACCENT
#define FI_ISO_8859_1_B5	KEY_M + ALTGR_MASK			// 181 µ     MICRO SIGN
#define FI_ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define FI_ISO_8859_1_B7	KEY_X + ALTGR_MASK + SHIFT_MASK		// 183 ·     MIDDLE DOT
#define FI_ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define FI_ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define FI_ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define FI_ISO_8859_1_BB	KEY_3 + ALTGR_MASK + SHIFT_MASK		// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define FI_ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define FI_ISO_8859_1_BD	KEY_TILDE + SHIFT_MASK			// 189 ½     FRACTION ONE HALF
#define FI_ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define FI_ISO_8859_1_BF	KEY_MINUS + ALTGR_MASK + SHIFT_MASK	// 191 ¿     INVERTED QUESTION MARK
#define FI_ISO_8859_1_C0	FI_GRAVE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define FI_ISO_8859_1_C1	FI_ACUTE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define FI_ISO_8859_1_C2	CIRCUMFLEX_BITS + KEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define FI_ISO_8859_1_C3	FI_TILDE_BITS + KEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define FI_ISO_8859_1_C4	KEY_QUOTE + SHIFT_MASK			// 196 Ä     A DIAERESIS
#define FI_ISO_8859_1_C5	KEY_LEFT_BRACE + SHIFT_MASK		// 197 Å     A RING ABOVE
#define FI_ISO_8859_1_C6	KEY_QUOTE + ALTGR_MASK + SHIFT_MASK	// 198 Æ     AE
#define FI_ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define FI_ISO_8859_1_C8	FI_GRAVE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define FI_ISO_8859_1_C9	FI_ACUTE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define FI_ISO_8859_1_CA	CIRCUMFLEX_BITS + KEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define FI_ISO_8859_1_CB	FI_DIAERESIS_BITS + KEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define FI_ISO_8859_1_CC	FI_GRAVE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define FI_ISO_8859_1_CD	FI_ACUTE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define FI_ISO_8859_1_CE	CIRCUMFLEX_BITS + KEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define FI_ISO_8859_1_CF	FI_DIAERESIS_BITS + KEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define FI_ISO_8859_1_D0	KEY_D + ALTGR_MASK + SHIFT_MASK		// 208 Ð     ETH
#define FI_ISO_8859_1_D1	FI_TILDE_BITS + KEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define FI_ISO_8859_1_D2	FI_GRAVE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define FI_ISO_8859_1_D3	FI_ACUTE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define FI_ISO_8859_1_D4	CIRCUMFLEX_BITS + KEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define FI_ISO_8859_1_D5	FI_TILDE_BITS + KEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define FI_ISO_8859_1_D6	KEY_SEMICOLON + SHIFT_MASK		// 214 Ö     O DIAERESIS
#define FI_ISO_8859_1_D7	KEY_X + ALTGR_MASK			// 215 ×     MULTIPLICATION
#define FI_ISO_8859_1_D8	KEY_SEMICOLON + ALTGR_MASK + SHIFT_MASK	// 216 Ø     O STROKE
#define FI_ISO_8859_1_D9	FI_GRAVE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define FI_ISO_8859_1_DA	FI_ACUTE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define FI_ISO_8859_1_DB	CIRCUMFLEX_BITS + KEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define FI_ISO_8859_1_DC	FI_DIAERESIS_BITS + KEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define FI_ISO_8859_1_DD	FI_ACUTE_ACCENT_BITS + KEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define FI_ISO_8859_1_DE	KEY_T + ALTGR_MASK + SHIFT_MASK		// 222 Þ     THORN
#define FI_ISO_8859_1_DF	KEY_S + ALTGR_MASK			// 223 ß     SHARP S
#define FI_ISO_8859_1_E0	FI_GRAVE_ACCENT_BITS + KEY_A		// 224 à     a GRAVE
#define FI_ISO_8859_1_E1	FI_ACUTE_ACCENT_BITS + KEY_A		// 225 á     a ACUTE
#define FI_ISO_8859_1_E2	CIRCUMFLEX_BITS + KEY_A			// 226 â     a CIRCUMFLEX
#define FI_ISO_8859_1_E3	FI_TILDE_BITS + KEY_A			// 227 ã     a TILDE
#define FI_ISO_8859_1_E4	KEY_QUOTE				// 228 ä     a DIAERESIS
#define FI_ISO_8859_1_E5	KEY_LEFT_BRACE				// 229 å     a RING ABOVE
#define FI_ISO_8859_1_E6	KEY_QUOTE + ALTGR_MASK			// 230 æ     ae
#define FI_ISO_8859_1_E7	0					// 231 ç     c CEDILLA
#define FI_ISO_8859_1_E8	FI_GRAVE_ACCENT_BITS + KEY_E		// 232 è     e GRAVE
#define FI_ISO_8859_1_E9	FI_ACUTE_ACCENT_BITS + KEY_E		// 233 é     e ACUTE
#define FI_ISO_8859_1_EA	CIRCUMFLEX_BITS + KEY_E			// 234 ê     e CIRCUMFLEX
#define FI_ISO_8859_1_EB	FI_DIAERESIS_BITS + KEY_E			// 235 ë     e DIAERESIS
#define FI_ISO_8859_1_EC	FI_GRAVE_ACCENT_BITS + KEY_I		// 236 ì     i GRAVE
#define FI_ISO_8859_1_ED	FI_ACUTE_ACCENT_BITS + KEY_I		// 237 í     i ACUTE
#define FI_ISO_8859_1_EE	CIRCUMFLEX_BITS + KEY_I			// 238 î     i CIRCUMFLEX
#define FI_ISO_8859_1_EF	FI_DIAERESIS_BITS + KEY_I			// 239 ï     i DIAERESIS
#define FI_ISO_8859_1_F0	KEY_D + ALTGR_MASK			// 240 ð     ETH
#define FI_ISO_8859_1_F1	FI_TILDE_BITS + KEY_N			// 241 ñ     n TILDE
#define FI_ISO_8859_1_F2	FI_GRAVE_ACCENT_BITS + KEY_O		// 242 ò     o GRAVE
#define FI_ISO_8859_1_F3	FI_ACUTE_ACCENT_BITS + KEY_O		// 243 ó     o ACUTE
#define FI_ISO_8859_1_F4	CIRCUMFLEX_BITS + KEY_O			// 244 ô     o CIRCUMFLEX
#define FI_ISO_8859_1_F5	FI_TILDE_BITS + KEY_O			// 245 õ     o TILDE
#define FI_ISO_8859_1_F6	KEY_SEMICOLON				// 246 ö     o DIAERESIS
#define FI_ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define FI_ISO_8859_1_F8	KEY_SEMICOLON + ALTGR_MASK		// 248 ø     o STROKE
#define FI_ISO_8859_1_F9	FI_GRAVE_ACCENT_BITS + KEY_U		// 249 ù     u GRAVE
#define FI_ISO_8859_1_FA	FI_ACUTE_ACCENT_BITS + KEY_U		// 250 ú     u ACUTE
#define FI_ISO_8859_1_FB	CIRCUMFLEX_BITS + KEY_U			// 251 û     u CIRCUMFLEX
#define FI_ISO_8859_1_FC	FI_DIAERESIS_BITS + KEY_U			// 252 ü     u DIAERESIS
#define FI_ISO_8859_1_FD	FI_ACUTE_ACCENT_BITS + KEY_Y		// 253 ý     y ACUTE
#define FI_ISO_8859_1_FE	KEY_T + ALTGR_MASK			// 254 þ     THORN
#define FI_ISO_8859_1_FF	FI_DIAERESIS_BITS + KEY_Y			// 255 ÿ     y DIAERESIS
#define FI_UNICODE_20AC	KEY_E + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define FI_UNICODE_EXTRA00	0x20AC
#define FI_KEYCODE_EXTRA00	KEY_E + ALTGR_MASK			// 20AC €    Euro Sign
// TODO: Finnish Multilingual layout can type many more glyphs
// but we currently don't have tables tables to store them...



#define FR_GRAVE_ACCENT_BITS	0x0200
#define FR_DIAERESIS_BITS		0x0300
#define FR_TILDE_BITS		0x0400
#define FR_KEYCODE_TYPE		uint16_t
#define FR_DEADKEY_CIRCUMFLEX	KEY_LEFT_BRACE
#define FR_DEADKEY_GRAVE_ACCENT	KEY_7 + ALTGR_MASK
#define FR_DEADKEY_DIAERESIS	KEY_LEFT_BRACE + SHIFT_MASK
#define FR_DEADKEY_TILDE		KEY_2 + ALTGR_MASK
#define KEY_NON_US_100		63

#define FR_ASCII_20	KEY_SPACE				// 32  
#define FR_ASCII_21	KEY_SLASH				// 33 !
#define FR_ASCII_22	KEY_3					// 34 "
#define FR_ASCII_23	KEY_3 + ALTGR_MASK			// 35 #
#define FR_ASCII_24	KEY_RIGHT_BRACE				// 36 $
#define FR_ASCII_25	KEY_QUOTE + SHIFT_MASK			// 37 %
#define FR_ASCII_26	KEY_1					// 38 &
#define FR_ASCII_27	KEY_4					// 39 '
#define FR_ASCII_28	KEY_5					// 40 (
#define FR_ASCII_29	KEY_MINUS				// 41 )
#define FR_ASCII_2A	KEY_BACKSLASH				// 42 *
#define FR_ASCII_2B	KEY_EQUAL + SHIFT_MASK			// 43 +
#define FR_ASCII_2C	KEY_M					// 44 ,
#define FR_ASCII_2D	KEY_6					// 45 -
#define FR_ASCII_2E	KEY_COMMA + SHIFT_MASK			// 46 .
#define FR_ASCII_2F	KEY_PERIOD + SHIFT_MASK			// 47 /
#define FR_ASCII_30	KEY_0 + SHIFT_MASK			// 48 0
#define FR_ASCII_31	KEY_1 + SHIFT_MASK			// 49 1
#define FR_ASCII_32	KEY_2 + SHIFT_MASK			// 50 2
#define FR_ASCII_33	KEY_3 + SHIFT_MASK			// 51 3
#define FR_ASCII_34	KEY_4 + SHIFT_MASK			// 52 4
#define FR_ASCII_35	KEY_5 + SHIFT_MASK			// 53 5
#define FR_ASCII_36	KEY_6 + SHIFT_MASK			// 54 6
#define FR_ASCII_37	KEY_7 + SHIFT_MASK			// 55 7
#define FR_ASCII_38	KEY_8 + SHIFT_MASK			// 55 8
#define FR_ASCII_39	KEY_9 + SHIFT_MASK			// 57 9
#define FR_ASCII_3A	KEY_PERIOD				// 58 :
#define FR_ASCII_3B	KEY_COMMA				// 59 ;
#define FR_ASCII_3C	KEY_NON_US_100				// 60 <
#define FR_ASCII_3D	KEY_EQUAL				// 61 =
#define FR_ASCII_3E	KEY_NON_US_100 + SHIFT_MASK		// 62 >
#define FR_ASCII_3F	KEY_M + SHIFT_MASK			// 63 ?
#define FR_ASCII_40	KEY_0 + ALTGR_MASK			// 64 @
#define FR_ASCII_41	KEY_Q + SHIFT_MASK			// 65 A
#define FR_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define FR_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define FR_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define FR_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define FR_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define FR_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define FR_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define FR_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define FR_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define FR_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define FR_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define FR_ASCII_4D	KEY_SEMICOLON + SHIFT_MASK		// 77 M
#define FR_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define FR_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define FR_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define FR_ASCII_51	KEY_A + SHIFT_MASK			// 81 Q
#define FR_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define FR_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define FR_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define FR_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define FR_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define FR_ASCII_57	KEY_Z + SHIFT_MASK			// 87 W
#define FR_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define FR_ASCII_59	KEY_Y + SHIFT_MASK			// 89 Y
#define FR_ASCII_5A	KEY_W + SHIFT_MASK			// 90 Z
#define FR_ASCII_5B	KEY_5 + ALTGR_MASK			// 91 [
#define FR_ASCII_5C	KEY_8 + ALTGR_MASK			// 92
#define FR_ASCII_5D	KEY_MINUS + ALTGR_MASK			// 93 ]
#define FR_ASCII_5E	KEY_9 + ALTGR_MASK			// 94 ^
#define FR_ASCII_5F	KEY_8					// 95 _
#define FR_ASCII_60	FR_GRAVE_ACCENT_BITS + KEY_SPACE		// 96 `
#define FR_ASCII_61	KEY_Q					// 97 a
#define FR_ASCII_62	KEY_B					// 98 b
#define FR_ASCII_63	KEY_C					// 99 c
#define FR_ASCII_64	KEY_D					// 100 d
#define FR_ASCII_65	KEY_E					// 101 e
#define FR_ASCII_66	KEY_F					// 102 f
#define FR_ASCII_67	KEY_G					// 103 g
#define FR_ASCII_68	KEY_H					// 104 h
#define FR_ASCII_69	KEY_I					// 105 i
#define FR_ASCII_6A	KEY_J					// 106 j
#define FR_ASCII_6B	KEY_K					// 107 k
#define FR_ASCII_6C	KEY_L					// 108 l
#define FR_ASCII_6D	KEY_SEMICOLON				// 109 m
#define FR_ASCII_6E	KEY_N					// 110 n
#define FR_ASCII_6F	KEY_O					// 111 o
#define FR_ASCII_70	KEY_P					// 112 p
#define FR_ASCII_71	KEY_A					// 113 q
#define FR_ASCII_72	KEY_R					// 114 r
#define FR_ASCII_73	KEY_S					// 115 s
#define FR_ASCII_74	KEY_T					// 116 t
#define FR_ASCII_75	KEY_U					// 117 u
#define FR_ASCII_76	KEY_V					// 118 v
#define FR_ASCII_77	KEY_Z					// 119 w
#define FR_ASCII_78	KEY_X					// 120 x
#define FR_ASCII_79	KEY_Y					// 121 y
#define FR_ASCII_7A	KEY_W					// 122 z
#define FR_ASCII_7B	KEY_4 + ALTGR_MASK			// 123 {
#define FR_ASCII_7C	KEY_6 + ALTGR_MASK			// 124 |
#define FR_ASCII_7D	KEY_EQUAL + ALTGR_MASK			// 125 }
#define FR_ASCII_7E	FR_TILDE_BITS + KEY_SPACE			// 126 ~
#define FR_ASCII_7F	KEY_BACKSPACE				// 127
#define FR_ISO_8859_1_A0	KEY_SPACE				// 160       Nonbreakng Space
#define FR_ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define FR_ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define FR_ISO_8859_1_A3	KEY_RIGHT_BRACE + SHIFT_MASK		// 163 £     Pound Sign
#define FR_ISO_8859_1_A4	KEY_RIGHT_BRACE + ALTGR_MASK		// 164 ¤     Currency or Euro Sign
#define FR_ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define FR_ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define FR_ISO_8859_1_A7	KEY_SLASH + SHIFT_MASK			// 167 §     SECTION SIGN
#define FR_ISO_8859_1_A8	FR_DIAERESIS_BITS + KEY_SPACE		// 168 ¨     DIAERESIS
#define FR_ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define FR_ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define FR_ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define FR_ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define FR_ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define FR_ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define FR_ISO_8859_1_AF	0					// 175 ¯     MACRON
#define FR_ISO_8859_1_B0	KEY_MINUS + SHIFT_MASK			// 176 °     DEGREE SIGN
#define FR_ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define FR_ISO_8859_1_B2	KEY_TILDE				// 178 ²     SUPERSCRIPT TWO
#define FR_ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define FR_ISO_8859_1_B4	0					// 180 ´     ACUTE ACCENT
#define FR_ISO_8859_1_B5	KEY_BACKSLASH + SHIFT_MASK		// 181 µ     MICRO SIGN
#define FR_ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define FR_ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define FR_ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define FR_ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define FR_ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define FR_ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define FR_ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define FR_ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define FR_ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define FR_ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define FR_ISO_8859_1_C0	FR_GRAVE_ACCENT_BITS + KEY_Q + SHIFT_MASK	// 192 À     A GRAVE
#define FR_ISO_8859_1_C1	0					// 193 Á     A ACUTE
#define FR_ISO_8859_1_C2	CIRCUMFLEX_BITS	+ KEY_Q + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define FR_ISO_8859_1_C3	FR_TILDE_BITS + KEY_Q + SHIFT_MASK		// 195 Ã     A TILDE
#define FR_ISO_8859_1_C4	FR_DIAERESIS_BITS + KEY_Q + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define FR_ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define FR_ISO_8859_1_C6	0					// 198 Æ     AE
#define FR_ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define FR_ISO_8859_1_C8	FR_GRAVE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define FR_ISO_8859_1_C9	0					// 201 É     E ACUTE
#define FR_ISO_8859_1_CA	CIRCUMFLEX_BITS + KEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define FR_ISO_8859_1_CB	FR_DIAERESIS_BITS + KEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define FR_ISO_8859_1_CC	FR_GRAVE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define FR_ISO_8859_1_CD	0					// 205 Í     I ACUTE
#define FR_ISO_8859_1_CE	CIRCUMFLEX_BITS + KEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define FR_ISO_8859_1_CF	FR_DIAERESIS_BITS + KEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define FR_ISO_8859_1_D0	0					// 208 Ð     ETH
#define FR_ISO_8859_1_D1	FR_TILDE_BITS + KEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define FR_ISO_8859_1_D2	FR_GRAVE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define FR_ISO_8859_1_D3	0					// 211 Ó     O ACUTE
#define FR_ISO_8859_1_D4	CIRCUMFLEX_BITS + KEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define FR_ISO_8859_1_D5	FR_TILDE_BITS + KEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define FR_ISO_8859_1_D6	FR_DIAERESIS_BITS + KEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define FR_ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define FR_ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define FR_ISO_8859_1_D9	FR_GRAVE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define FR_ISO_8859_1_DA	0					// 218 Ú     U ACUTE
#define FR_ISO_8859_1_DB	CIRCUMFLEX_BITS + KEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define FR_ISO_8859_1_DC	FR_DIAERESIS_BITS + KEY_U			// 220 Ü     U DIAERESIS
#define FR_ISO_8859_1_DD	0					// 221 Ý     Y ACUTE
#define FR_ISO_8859_1_DE	0					// 222 Þ     THORN
#define FR_ISO_8859_1_DF	0					// 223 ß     SHARP S
#define FR_ISO_8859_1_E0	KEY_0					// 224 à     a GRAVE
#define FR_ISO_8859_1_E1	0					// 225 á     a ACUTE
#define FR_ISO_8859_1_E2	CIRCUMFLEX_BITS + KEY_Q			// 226 â     a CIRCUMFLEX
#define FR_ISO_8859_1_E3	FR_TILDE_BITS + KEY_Q			// 227 ã     a TILDE
#define FR_ISO_8859_1_E4	FR_DIAERESIS_BITS + KEY_Q			// 228 ä     a DIAERESIS
#define FR_ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define FR_ISO_8859_1_E6	0					// 230 æ     ae
#define FR_ISO_8859_1_E7	KEY_9					// 231 ç     c CEDILLA
#define FR_ISO_8859_1_E8	KEY_7					// 232 è     e GRAVE
#define FR_ISO_8859_1_E9	KEY_2					// 233 é     e ACUTE
#define FR_ISO_8859_1_EA	CIRCUMFLEX_BITS + KEY_E			// 234 ê     e CIRCUMFLEX
#define FR_ISO_8859_1_EB	FR_DIAERESIS_BITS + KEY_E			// 235 ë     e DIAERESIS
#define FR_ISO_8859_1_EC	FR_GRAVE_ACCENT_BITS + KEY_I		// 236 ì     i GRAVE
#define FR_ISO_8859_1_ED	0					// 237 í     i ACUTE
#define FR_ISO_8859_1_EE	CIRCUMFLEX_BITS + KEY_I			// 238 î     i CIRCUMFLEX
#define FR_ISO_8859_1_EF	FR_DIAERESIS_BITS + KEY_I			// 239 ï     i DIAERESIS
#define FR_ISO_8859_1_F0	0					// 240 ð     ETH
#define FR_ISO_8859_1_F1	FR_TILDE_BITS + KEY_N			// 241 ñ     n TILDE
#define FR_ISO_8859_1_F2	FR_GRAVE_ACCENT_BITS + KEY_O		// 242 ò     o GRAVE
#define FR_ISO_8859_1_F3	0					// 243 ó     o ACUTE
#define FR_ISO_8859_1_F4	CIRCUMFLEX_BITS + KEY_O			// 244 ô     o CIRCUMFLEX
#define FR_ISO_8859_1_F5	FR_TILDE_BITS + KEY_O			// 245 õ     o TILDE
#define FR_ISO_8859_1_F6	FR_DIAERESIS_BITS + KEY_O			// 246 ö     o DIAERESIS
#define FR_ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define FR_ISO_8859_1_F8	0					// 248 ø     o STROKE
#define FR_ISO_8859_1_F9	KEY_SEMICOLON				// 249 ù     u GRAVE
#define FR_ISO_8859_1_FA	0					// 250 ú     u ACUTE
#define FR_ISO_8859_1_FB	CIRCUMFLEX_BITS + KEY_U			// 251 û     u CIRCUMFLEX
#define FR_ISO_8859_1_FC	FR_DIAERESIS_BITS + KEY_U			// 252 ü     u DIAERESIS
#define FR_ISO_8859_1_FD	0					// 253 ý     y ACUTE
#define FR_ISO_8859_1_FE	0					// 254 þ     THORN
#define FR_ISO_8859_1_FF	FR_DIAERESIS_BITS + KEY_Y			// 255 ÿ     y DIAERESIS
#define FR_UNICODE_20AC	KEY_E + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define FR_UNICODE_EXTRA00	0x20AC
#define FR_KEYCODE_EXTRA00	KEY_E + ALTGR_MASK			// 20AC €    Euro Sign



#define DK_ACUTE_ACCENT_BITS	0x0200
#define DK_GRAVE_ACCENT_BITS	0x0300
#define DK_TILDE_BITS		0x0400
#define DK_DIAERESIS_BITS		0x0500
#define DK_KEYCODE_TYPE		uint16_t
#define DK_DEADKEY_CIRCUMFLEX	KEY_RIGHT_BRACE + SHIFT_MASK
#define DK_DEADKEY_ACUTE_ACCENT	KEY_EQUAL
#define DK_DEADKEY_GRAVE_ACCENT	KEY_EQUAL + SHIFT_MASK
#define DK_DEADKEY_TILDE		KEY_RIGHT_BRACE + ALTGR_MASK
#define DK_DEADKEY_DIAERESIS	KEY_RIGHT_BRACE
#define KEY_NON_US_100		63

#define DK_ASCII_20	KEY_SPACE				// 32  
#define DK_ASCII_21	KEY_1 + SHIFT_MASK			// 33 !
#define DK_ASCII_22	KEY_2 + SHIFT_MASK			// 34 "
#define DK_ASCII_23	KEY_3 + SHIFT_MASK			// 35 #
#define DK_ASCII_24	KEY_4 + ALTGR_MASK			// 36 $
#define DK_ASCII_25	KEY_5 + SHIFT_MASK			// 37 %
#define DK_ASCII_26	KEY_6 + SHIFT_MASK			// 38 &
#define DK_ASCII_27	KEY_BACKSLASH				// 39 '
#define DK_ASCII_28	KEY_8 + SHIFT_MASK			// 40 (
#define DK_ASCII_29	KEY_9 + SHIFT_MASK			// 41 )
#define DK_ASCII_2A	KEY_BACKSLASH + SHIFT_MASK		// 42 *
#define DK_ASCII_2B	KEY_MINUS				// 43 +
#define DK_ASCII_2C	KEY_COMMA				// 44 ,
#define DK_ASCII_2D	KEY_SLASH				// 45 -
#define DK_ASCII_2E	KEY_PERIOD				// 46 .
#define DK_ASCII_2F	KEY_7 + SHIFT_MASK			// 47 /
#define DK_ASCII_30	KEY_0					// 48 0
#define DK_ASCII_31	KEY_1					// 49 1
#define DK_ASCII_32	KEY_2					// 50 2
#define DK_ASCII_33	KEY_3					// 51 3
#define DK_ASCII_34	KEY_4					// 52 4
#define DK_ASCII_35	KEY_5					// 53 5
#define DK_ASCII_36	KEY_6					// 54 6
#define DK_ASCII_37	KEY_7					// 55 7
#define DK_ASCII_38	KEY_8					// 55 8
#define DK_ASCII_39	KEY_9					// 57 9
#define DK_ASCII_3A	KEY_PERIOD + SHIFT_MASK			// 58 :
#define DK_ASCII_3B	KEY_COMMA + SHIFT_MASK			// 59 ;
#define DK_ASCII_3C	KEY_NON_US_100				// 60 <
#define DK_ASCII_3D	KEY_0 + SHIFT_MASK			// 61 =
#define DK_ASCII_3E	KEY_NON_US_100 + SHIFT_MASK		// 62 >
#define DK_ASCII_3F	KEY_MINUS + SHIFT_MASK			// 63 ?
#define DK_ASCII_40	KEY_2 + ALTGR_MASK			// 64 @
#define DK_ASCII_41	KEY_A + SHIFT_MASK			// 65 A
#define DK_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define DK_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define DK_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define DK_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define DK_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define DK_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define DK_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define DK_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define DK_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define DK_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define DK_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define DK_ASCII_4D	KEY_M + SHIFT_MASK			// 77 M
#define DK_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define DK_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define DK_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define DK_ASCII_51	KEY_Q + SHIFT_MASK			// 81 Q
#define DK_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define DK_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define DK_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define DK_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define DK_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define DK_ASCII_57	KEY_W + SHIFT_MASK			// 87 W
#define DK_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define DK_ASCII_59	KEY_Y + SHIFT_MASK			// 89 Y
#define DK_ASCII_5A	KEY_Z + SHIFT_MASK			// 90 Z
#define DK_ASCII_5B	KEY_8 + ALTGR_MASK			// 91 [
#define DK_ASCII_5C	KEY_NON_US_100 + ALTGR_MASK		// 92
#define DK_ASCII_5D	KEY_9 + ALTGR_MASK			// 93 ]
#define DK_ASCII_5E	CIRCUMFLEX_BITS + KEY_SPACE		// 94 ^
#define DK_ASCII_5F	KEY_SLASH + SHIFT_MASK			// 95 _
#define DK_ASCII_60	DK_GRAVE_ACCENT_BITS + KEY_SPACE	// 96 `
#define DK_ASCII_61	KEY_A					// 97 a
#define DK_ASCII_62	KEY_B					// 98 b
#define DK_ASCII_63	KEY_C					// 99 c
#define DK_ASCII_64	KEY_D					// 100 d
#define DK_ASCII_65	KEY_E					// 101 e
#define DK_ASCII_66	KEY_F					// 102 f
#define DK_ASCII_67	KEY_G					// 103 g
#define DK_ASCII_68	KEY_H					// 104 h
#define DK_ASCII_69	KEY_I					// 105 i
#define DK_ASCII_6A	KEY_J					// 106 j
#define DK_ASCII_6B	KEY_K					// 107 k
#define DK_ASCII_6C	KEY_L					// 108 l
#define DK_ASCII_6D	KEY_M					// 109 m
#define DK_ASCII_6E	KEY_N					// 110 n
#define DK_ASCII_6F	KEY_O					// 111 o
#define DK_ASCII_70	KEY_P					// 112 p
#define DK_ASCII_71	KEY_Q					// 113 q
#define DK_ASCII_72	KEY_R					// 114 r
#define DK_ASCII_73	KEY_S					// 115 s
#define DK_ASCII_74	KEY_T					// 116 t
#define DK_ASCII_75	KEY_U					// 117 u
#define DK_ASCII_76	KEY_V					// 118 v
#define DK_ASCII_77	KEY_W					// 119 w
#define DK_ASCII_78	KEY_X					// 120 x
#define DK_ASCII_79	KEY_Y					// 121 y
#define DK_ASCII_7A	KEY_Z					// 122 z
#define DK_ASCII_7B	KEY_7 + ALTGR_MASK			// 123 {
#define DK_ASCII_7C	KEY_EQUAL + ALTGR_MASK			// 124 |
#define DK_ASCII_7D	KEY_0 + ALTGR_MASK			// 125 }
#define DK_ASCII_7E	DK_TILDE_BITS + KEY_SPACE			// 126 ~
#define DK_ASCII_7F	KEY_BACKSPACE				// 127

#define DK_ISO_8859_1_A0	KEY_SPACE				// 160       Nonbreakng Space
#define DK_ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define DK_ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define DK_ISO_8859_1_A3	KEY_3 + ALTGR_MASK			// 163 £     Pound Sign
#define DK_ISO_8859_1_A4	KEY_4 + SHIFT_MASK			// 164 ¤     Currency Sign
#define DK_ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define DK_ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define DK_ISO_8859_1_A7	KEY_TILDE + SHIFT_MASK			// 167 §     SECTION SIGN
#define DK_ISO_8859_1_A8	DK_DIAERESIS_BITS + KEY_SPACE		// 168 ¨     DIAERESIS
#define DK_ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define DK_ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define DK_ISO_8859_1_AB	KEY_4					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define DK_ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define DK_ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define DK_ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define DK_ISO_8859_1_AF	0					// 175 ¯     MACRON
#define DK_ISO_8859_1_B0	0					// 176 °     DEGREE SIGN
#define DK_ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define DK_ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define DK_ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define DK_ISO_8859_1_B4	DK_ACUTE_ACCENT_BITS + KEY_SPACE		// 180 ´     ACUTE ACCENT
#define DK_ISO_8859_1_B5	KEY_M + ALTGR_MASK			// 181 µ     MICRO SIGN
#define DK_ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define DK_ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define DK_ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define DK_ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define DK_ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define DK_ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define DK_ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define DK_ISO_8859_1_BD	KEY_TILDE				// 189 ½     FRACTION ONE HALF
#define DK_ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define DK_ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define DK_ISO_8859_1_C0	DK_GRAVE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define DK_ISO_8859_1_C1	DK_ACUTE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define DK_ISO_8859_1_C2	CIRCUMFLEX_BITS + KEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define DK_ISO_8859_1_C3	DK_TILDE_BITS + KEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define DK_ISO_8859_1_C4	DK_DIAERESIS_BITS + KEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define DK_ISO_8859_1_C5	KEY_LEFT_BRACE + SHIFT_MASK		// 197 Å     A RING ABOVE
#define DK_ISO_8859_1_C6	KEY_SEMICOLON + SHIFT_MASK		// 198 Æ     AE
#define DK_ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define DK_ISO_8859_1_C8	DK_GRAVE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define DK_ISO_8859_1_C9	DK_ACUTE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define DK_ISO_8859_1_CA	CIRCUMFLEX_BITS + KEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define DK_ISO_8859_1_CB	DK_DIAERESIS_BITS + KEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define DK_ISO_8859_1_CC	DK_GRAVE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define DK_ISO_8859_1_CD	DK_ACUTE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define DK_ISO_8859_1_CE	CIRCUMFLEX_BITS + KEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define DK_ISO_8859_1_CF	DK_DIAERESIS_BITS + KEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define DK_ISO_8859_1_D0	KEY_D + ALTGR_MASK + SHIFT_MASK		// 208 Ð     ETH
#define DK_ISO_8859_1_D1	DK_TILDE_BITS + KEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define DK_ISO_8859_1_D2	DK_GRAVE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define DK_ISO_8859_1_D3	DK_ACUTE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define DK_ISO_8859_1_D4	CIRCUMFLEX_BITS + KEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define DK_ISO_8859_1_D5	DK_TILDE_BITS + KEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define DK_ISO_8859_1_D6	DK_DIAERESIS_BITS + KEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define DK_ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define DK_ISO_8859_1_D8	KEY_QUOTE + SHIFT_MASK			// 216 Ø     O STROKE
#define DK_ISO_8859_1_D9	DK_GRAVE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define DK_ISO_8859_1_DA	DK_ACUTE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define DK_ISO_8859_1_DB	CIRCUMFLEX_BITS + KEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define DK_ISO_8859_1_DC	DK_DIAERESIS_BITS + KEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define DK_ISO_8859_1_DD	DK_ACUTE_ACCENT_BITS + KEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define DK_ISO_8859_1_DE	KEY_T + ALTGR_MASK + SHIFT_MASK		// 222 Þ     THORN
#define DK_ISO_8859_1_DF	KEY_S + ALTGR_MASK			// 223 ß     SHARP S
#define DK_ISO_8859_1_E0	DK_GRAVE_ACCENT_BITS + KEY_A		// 224 à     a GRAVE
#define DK_ISO_8859_1_E1	DK_ACUTE_ACCENT_BITS + KEY_A		// 225 á     a ACUTE
#define DK_ISO_8859_1_E2	CIRCUMFLEX_BITS + KEY_A			// 226 â     a CIRCUMFLEX
#define DK_ISO_8859_1_E3	DK_TILDE_BITS + KEY_A			// 227 ã     a TILDE
#define DK_ISO_8859_1_E4	DK_DIAERESIS_BITS + KEY_A			// 228 ä     a DIAERESIS
#define DK_ISO_8859_1_E5	KEY_LEFT_BRACE				// 229 å     a RING ABOVE
#define DK_ISO_8859_1_E6	KEY_SEMICOLON				// 230 æ     ae
#define DK_ISO_8859_1_E7	0					// 231 ç     c CEDILLA
#define DK_ISO_8859_1_E8	DK_GRAVE_ACCENT_BITS + KEY_E		// 232 è     e GRAVE
#define DK_ISO_8859_1_E9	DK_ACUTE_ACCENT_BITS + KEY_E		// 233 é     e ACUTE
#define DK_ISO_8859_1_EA	CIRCUMFLEX_BITS + KEY_E			// 234 ê     e CIRCUMFLEX
#define DK_ISO_8859_1_EB	DK_DIAERESIS_BITS + KEY_E			// 235 ë     e DIAERESIS
#define DK_ISO_8859_1_EC	DK_GRAVE_ACCENT_BITS + KEY_I		// 236 ì     i GRAVE
#define DK_ISO_8859_1_ED	DK_ACUTE_ACCENT_BITS + KEY_I		// 237 í     i ACUTE
#define DK_ISO_8859_1_EE	CIRCUMFLEX_BITS + KEY_I			// 238 î     i CIRCUMFLEX
#define DK_ISO_8859_1_EF	DK_DIAERESIS_BITS + KEY_I			// 239 ï     i DIAERESIS
#define DK_ISO_8859_1_F0	KEY_D + ALTGR_MASK			// 240 ð     ETH
#define DK_ISO_8859_1_F1	DK_TILDE_BITS + KEY_N			// 241 ñ     n TILDE
#define DK_ISO_8859_1_F2	DK_GRAVE_ACCENT_BITS + KEY_O		// 242 ò     o GRAVE
#define DK_ISO_8859_1_F3	DK_ACUTE_ACCENT_BITS + KEY_O		// 243 ó     o ACUTE
#define DK_ISO_8859_1_F4	CIRCUMFLEX_BITS + KEY_O			// 244 ô     o CIRCUMFLEX
#define DK_ISO_8859_1_F5	DK_TILDE_BITS + KEY_O			// 245 õ     o TILDE
#define DK_ISO_8859_1_F6	DK_DIAERESIS_BITS + KEY_O			// 246 ö     o DIAERESIS
#define DK_ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define DK_ISO_8859_1_F8	KEY_QUOTE				// 248 ø     o STROKE
#define DK_ISO_8859_1_F9	DK_GRAVE_ACCENT_BITS + KEY_U		// 249 ù     u GRAVE
#define DK_ISO_8859_1_FA	DK_ACUTE_ACCENT_BITS + KEY_U		// 250 ú     u ACUTE
#define DK_ISO_8859_1_FB	CIRCUMFLEX_BITS + KEY_U			// 251 û     u CIRCUMFLEX
#define DK_ISO_8859_1_FC	DK_DIAERESIS_BITS + KEY_U			// 252 ü     u DIAERESIS
#define DK_ISO_8859_1_FD	DK_ACUTE_ACCENT_BITS + KEY_Y		// 253 ý     y ACUTE
#define DK_ISO_8859_1_FE	KEY_T + ALTGR_MASK			// 254 þ     THORN
#define DK_ISO_8859_1_FF	DK_DIAERESIS_BITS + KEY_Y			// 255 ÿ     y DIAERESIS
#define DK_UNICODE_20AC	KEY_E + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define DK_UNICODE_EXTRA00	0x20AC
#define DK_KEYCODE_EXTRA00	KEY_E + ALTGR_MASK			// 20AC €    Euro Sign



#define NW_ACUTE_ACCENT_BITS	0x0200
#define NW_GRAVE_ACCENT_BITS	0x0300
#define NW_TILDE_BITS		0x0400
#define NW_DIAERESIS_BITS		0x0500
#define NW_KEYCODE_TYPE		uint16_t
#define NW_DEADKEY_CIRCUMFLEX	KEY_RIGHT_BRACE + SHIFT_MASK
#define NW_DEADKEY_ACUTE_ACCENT	KEY_EQUAL + ALTGR_MASK
#define NW_DEADKEY_GRAVE_ACCENT	KEY_EQUAL + SHIFT_MASK
#define NW_DEADKEY_TILDE		KEY_RIGHT_BRACE + ALTGR_MASK
#define NW_DEADKEY_DIAERESIS	KEY_RIGHT_BRACE
#define KEY_NON_US_100		63

#define NW_ASCII_20	KEY_SPACE				// 32  
#define NW_ASCII_21	KEY_1 + SHIFT_MASK			// 33 !
#define NW_ASCII_22	KEY_2 + SHIFT_MASK			// 34 "
#define NW_ASCII_23	KEY_3 + SHIFT_MASK			// 35 #
#define NW_ASCII_24	KEY_4 + ALTGR_MASK			// 36 $
#define NW_ASCII_25	KEY_5 + SHIFT_MASK			// 37 %
#define NW_ASCII_26	KEY_6 + SHIFT_MASK			// 38 &
#define NW_ASCII_27	KEY_BACKSLASH				// 39 '
#define NW_ASCII_28	KEY_8 + SHIFT_MASK			// 40 (
#define NW_ASCII_29	KEY_9 + SHIFT_MASK			// 41 )
#define NW_ASCII_2A	KEY_BACKSLASH + SHIFT_MASK		// 42 *
#define NW_ASCII_2B	KEY_MINUS				// 43 +
#define NW_ASCII_2C	KEY_COMMA				// 44 ,
#define NW_ASCII_2D	KEY_SLASH				// 45 -
#define NW_ASCII_2E	KEY_PERIOD				// 46 .
#define NW_ASCII_2F	KEY_7 + SHIFT_MASK			// 47 /
#define NW_ASCII_30	KEY_0					// 48 0
#define NW_ASCII_31	KEY_1					// 49 1
#define NW_ASCII_32	KEY_2					// 50 2
#define NW_ASCII_33	KEY_3					// 51 3
#define NW_ASCII_34	KEY_4					// 52 4
#define NW_ASCII_35	KEY_5					// 53 5
#define NW_ASCII_36	KEY_6					// 54 6
#define NW_ASCII_37	KEY_7					// 55 7
#define NW_ASCII_38	KEY_8					// 55 8
#define NW_ASCII_39	KEY_9					// 57 9
#define NW_ASCII_3A	KEY_PERIOD + SHIFT_MASK			// 58 :
#define NW_ASCII_3B	KEY_COMMA + SHIFT_MASK			// 59 ;
#define NW_ASCII_3C	KEY_NON_US_100				// 60 <
#define NW_ASCII_3D	KEY_0 + SHIFT_MASK			// 61 =
#define NW_ASCII_3E	KEY_NON_US_100 + SHIFT_MASK		// 62 >
#define NW_ASCII_3F	KEY_MINUS + SHIFT_MASK			// 63 ?
#define NW_ASCII_40	KEY_2 + ALTGR_MASK			// 64 @
#define NW_ASCII_41	KEY_A + SHIFT_MASK			// 65 A
#define NW_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define NW_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define NW_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define NW_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define NW_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define NW_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define NW_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define NW_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define NW_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define NW_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define NW_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define NW_ASCII_4D	KEY_M + SHIFT_MASK			// 77 M
#define NW_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define NW_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define NW_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define NW_ASCII_51	KEY_Q + SHIFT_MASK			// 81 Q
#define NW_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define NW_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define NW_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define NW_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define NW_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define NW_ASCII_57	KEY_W + SHIFT_MASK			// 87 W
#define NW_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define NW_ASCII_59	KEY_Y + SHIFT_MASK			// 89 Y
#define NW_ASCII_5A	KEY_Z + SHIFT_MASK			// 90 Z
#define NW_ASCII_5B	KEY_8 + ALTGR_MASK			// 91 [
#define NW_ASCII_5C	KEY_EQUAL				// 92
#define NW_ASCII_5D	KEY_9 + ALTGR_MASK			// 93 ]
#define NW_ASCII_5E	CIRCUMFLEX_BITS + KEY_SPACE		// 94 ^
#define NW_ASCII_5F	KEY_SLASH + SHIFT_MASK			// 95 _
#define NW_ASCII_60	NW_GRAVE_ACCENT_BITS + KEY_SPACE		// 96 `
#define NW_ASCII_61	KEY_A					// 97 a
#define NW_ASCII_62	KEY_B					// 98 b
#define NW_ASCII_63	KEY_C					// 99 c
#define NW_ASCII_64	KEY_D					// 100 d
#define NW_ASCII_65	KEY_E					// 101 e
#define NW_ASCII_66	KEY_F					// 102 f
#define NW_ASCII_67	KEY_G					// 103 g
#define NW_ASCII_68	KEY_H					// 104 h
#define NW_ASCII_69	KEY_I					// 105 i
#define NW_ASCII_6A	KEY_J					// 106 j
#define NW_ASCII_6B	KEY_K					// 107 k
#define NW_ASCII_6C	KEY_L					// 108 l
#define NW_ASCII_6D	KEY_M					// 109 m
#define NW_ASCII_6E	KEY_N					// 110 n
#define NW_ASCII_6F	KEY_O					// 111 o
#define NW_ASCII_70	KEY_P					// 112 p
#define NW_ASCII_71	KEY_Q					// 113 q
#define NW_ASCII_72	KEY_R					// 114 r
#define NW_ASCII_73	KEY_S					// 115 s
#define NW_ASCII_74	KEY_T					// 116 t
#define NW_ASCII_75	KEY_U					// 117 u
#define NW_ASCII_76	KEY_V					// 118 v
#define NW_ASCII_77	KEY_W					// 119 w
#define NW_ASCII_78	KEY_X					// 120 x
#define NW_ASCII_79	KEY_Y					// 121 y
#define NW_ASCII_7A	KEY_Z					// 122 z
#define NW_ASCII_7B	KEY_7 + ALTGR_MASK			// 123 {
#define NW_ASCII_7C	KEY_TILDE				// 124 |
#define NW_ASCII_7D	KEY_0 + ALTGR_MASK			// 125 }
#define NW_ASCII_7E	NW_TILDE_BITS + KEY_SPACE			// 126 ~
#define NW_ASCII_7F	KEY_BACKSPACE				// 127

#define NW_ISO_8859_1_A0	KEY_SPACE				// 160       Nonbreakng Space
#define NW_ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define NW_ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define NW_ISO_8859_1_A3	KEY_3 + ALTGR_MASK			// 163 £     Pound Sign
#define NW_ISO_8859_1_A4	KEY_4 + SHIFT_MASK			// 164 ¤     Currency Sign
#define NW_ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define NW_ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define NW_ISO_8859_1_A7	KEY_TILDE + SHIFT_MASK			// 167 §     SECTION SIGN
#define NW_ISO_8859_1_A8	NW_DIAERESIS_BITS + KEY_SPACE		// 168 ¨     DIAERESIS
#define NW_ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define NW_ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define NW_ISO_8859_1_AB	KEY_4					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define NW_ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define NW_ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define NW_ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define NW_ISO_8859_1_AF	0					// 175 ¯     MACRON
#define NW_ISO_8859_1_B0	0					// 176 °     DEGREE SIGN
#define NW_ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define NW_ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define NW_ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define NW_ISO_8859_1_B4	NW_ACUTE_ACCENT_BITS + KEY_SPACE		// 180 ´     ACUTE ACCENT
#define NW_ISO_8859_1_B5	KEY_M + ALTGR_MASK			// 181 µ     MICRO SIGN
#define NW_ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define NW_ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define NW_ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define NW_ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define NW_ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define NW_ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define NW_ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define NW_ISO_8859_1_BD	KEY_TILDE				// 189 ½     FRACTION ONE HALF
#define NW_ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define NW_ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define NW_ISO_8859_1_C0	NW_GRAVE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define NW_ISO_8859_1_C1	NW_ACUTE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define NW_ISO_8859_1_C2	CIRCUMFLEX_BITS + KEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define NW_ISO_8859_1_C3	NW_TILDE_BITS + KEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define NW_ISO_8859_1_C4	NW_DIAERESIS_BITS + KEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define NW_ISO_8859_1_C5	KEY_LEFT_BRACE + SHIFT_MASK		// 197 Å     A RING ABOVE
#define NW_ISO_8859_1_C6	KEY_QUOTE + SHIFT_MASK			// 198 Æ     AE
#define NW_ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define NW_ISO_8859_1_C8	NW_GRAVE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define NW_ISO_8859_1_C9	NW_ACUTE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define NW_ISO_8859_1_CA	CIRCUMFLEX_BITS + KEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define NW_ISO_8859_1_CB	NW_DIAERESIS_BITS + KEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define NW_ISO_8859_1_CC	NW_GRAVE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define NW_ISO_8859_1_CD	NW_ACUTE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define NW_ISO_8859_1_CE	CIRCUMFLEX_BITS + KEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define NW_ISO_8859_1_CF	NW_DIAERESIS_BITS + KEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define NW_ISO_8859_1_D0	KEY_D + ALTGR_MASK + SHIFT_MASK		// 208 Ð     ETH
#define NW_ISO_8859_1_D1	NW_TILDE_BITS + KEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define NW_ISO_8859_1_D2	NW_GRAVE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define NW_ISO_8859_1_D3	NW_ACUTE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define NW_ISO_8859_1_D4	CIRCUMFLEX_BITS + KEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define NW_ISO_8859_1_D5	NW_TILDE_BITS + KEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define NW_ISO_8859_1_D6	NW_DIAERESIS_BITS + KEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define NW_ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define NW_ISO_8859_1_D8	KEY_SEMICOLON + SHIFT_MASK		// 216 Ø     O STROKE
#define NW_ISO_8859_1_D9	NW_GRAVE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define NW_ISO_8859_1_DA	NW_ACUTE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define NW_ISO_8859_1_DB	CIRCUMFLEX_BITS + KEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define NW_ISO_8859_1_DC	NW_DIAERESIS_BITS + KEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define NW_ISO_8859_1_DD	NW_ACUTE_ACCENT_BITS + KEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define NW_ISO_8859_1_DE	KEY_T + ALTGR_MASK + SHIFT_MASK		// 222 Þ     THORN
#define NW_ISO_8859_1_DF	KEY_S + ALTGR_MASK			// 223 ß     SHARP S
#define NW_ISO_8859_1_E0	NW_GRAVE_ACCENT_BITS + KEY_A		// 224 à     a GRAVE
#define NW_ISO_8859_1_E1	NW_ACUTE_ACCENT_BITS + KEY_A		// 225 á     a ACUTE
#define NW_ISO_8859_1_E2	CIRCUMFLEX_BITS + KEY_A			// 226 â     a CIRCUMFLEX
#define NW_ISO_8859_1_E3	NW_TILDE_BITS + KEY_A			// 227 ã     a TILDE
#define NW_ISO_8859_1_E4	NW_DIAERESIS_BITS + KEY_A			// 228 ä     a DIAERESIS
#define NW_ISO_8859_1_E5	KEY_LEFT_BRACE				// 229 å     a RING ABOVE
#define NW_ISO_8859_1_E6	KEY_QUOTE				// 230 æ     ae
#define NW_ISO_8859_1_E7	0					// 231 ç     c CEDILLA
#define NW_ISO_8859_1_E8	NW_GRAVE_ACCENT_BITS + KEY_E		// 232 è     e GRAVE
#define NW_ISO_8859_1_E9	NW_ACUTE_ACCENT_BITS + KEY_E		// 233 é     e ACUTE
#define NW_ISO_8859_1_EA	CIRCUMFLEX_BITS + KEY_E			// 234 ê     e CIRCUMFLEX
#define NW_ISO_8859_1_EB	NW_DIAERESIS_BITS + KEY_E			// 235 ë     e DIAERESIS
#define NW_ISO_8859_1_EC	NW_GRAVE_ACCENT_BITS + KEY_I		// 236 ì     i GRAVE
#define NW_ISO_8859_1_ED	NW_ACUTE_ACCENT_BITS + KEY_I		// 237 í     i ACUTE
#define NW_ISO_8859_1_EE	CIRCUMFLEX_BITS + KEY_I			// 238 î     i CIRCUMFLEX
#define NW_ISO_8859_1_EF	NW_DIAERESIS_BITS + KEY_I			// 239 ï     i DIAERESIS
#define NW_ISO_8859_1_F0	KEY_D + ALTGR_MASK			// 240 ð     ETH
#define NW_ISO_8859_1_F1	NW_TILDE_BITS + KEY_N			// 241 ñ     n TILDE
#define NW_ISO_8859_1_F2	NW_GRAVE_ACCENT_BITS + KEY_O		// 242 ò     o GRAVE
#define NW_ISO_8859_1_F3	NW_ACUTE_ACCENT_BITS + KEY_O		// 243 ó     o ACUTE
#define NW_ISO_8859_1_F4	CIRCUMFLEX_BITS + KEY_O			// 244 ô     o CIRCUMFLEX
#define NW_ISO_8859_1_F5	NW_TILDE_BITS + KEY_O			// 245 õ     o TILDE
#define NW_ISO_8859_1_F6	NW_DIAERESIS_BITS + KEY_O			// 246 ö     o DIAERESIS
#define NW_ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define NW_ISO_8859_1_F8	KEY_SEMICOLON				// 248 ø     o STROKE
#define NW_ISO_8859_1_F9	NW_GRAVE_ACCENT_BITS + KEY_U		// 249 ù     u GRAVE
#define NW_ISO_8859_1_FA	NW_ACUTE_ACCENT_BITS + KEY_U		// 250 ú     u ACUTE
#define NW_ISO_8859_1_FB	CIRCUMFLEX_BITS + KEY_U			// 251 û     u CIRCUMFLEX
#define NW_ISO_8859_1_FC	NW_DIAERESIS_BITS + KEY_U			// 252 ü     u DIAERESIS
#define NW_ISO_8859_1_FD	NW_ACUTE_ACCENT_BITS + KEY_Y		// 253 ý     y ACUTE
#define NW_ISO_8859_1_FE	KEY_T + ALTGR_MASK			// 254 þ     THORN
#define NW_ISO_8859_1_FF	NW_DIAERESIS_BITS + KEY_Y			// 255 ÿ     y DIAERESIS
#define NW_UNICODE_20AC	KEY_E + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define NW_UNICODE_EXTRA00	0x20AC
#define NW_KEYCODE_EXTRA00	KEY_E + ALTGR_MASK			// 20AC €    Euro Sign



#define SW_ACUTE_ACCENT_BITS	0x0200
#define SW_GRAVE_ACCENT_BITS	0x0300
#define SW_TILDE_BITS		0x0400
#define SW_DIAERESIS_BITS		0x0500
#define SW_KEYCODE_TYPE		uint16_t
#define SW_DEADKEY_CIRCUMFLEX	KEY_RIGHT_BRACE + SHIFT_MASK
#define SW_DEADKEY_ACUTE_ACCENT	KEY_EQUAL
#define SW_DEADKEY_GRAVE_ACCENT	KEY_EQUAL + SHIFT_MASK
#define SW_DEADKEY_TILDE		KEY_RIGHT_BRACE + ALTGR_MASK
#define SW_DEADKEY_DIAERESIS	KEY_RIGHT_BRACE
#define KEY_NON_US_100		63

#define SW_ASCII_20	KEY_SPACE				// 32  
#define SW_ASCII_21	KEY_1 + SHIFT_MASK			// 33 !
#define SW_ASCII_22	KEY_2 + SHIFT_MASK			// 34 "
#define SW_ASCII_23	KEY_3 + SHIFT_MASK			// 35 #
#define SW_ASCII_24	KEY_4 + ALTGR_MASK			// 36 $
#define SW_ASCII_25	KEY_5 + SHIFT_MASK			// 37 %
#define SW_ASCII_26	KEY_6 + SHIFT_MASK			// 38 &
#define SW_ASCII_27	KEY_BACKSLASH				// 39 '
#define SW_ASCII_28	KEY_8 + SHIFT_MASK			// 40 (
#define SW_ASCII_29	KEY_9 + SHIFT_MASK			// 41 )
#define SW_ASCII_2A	KEY_BACKSLASH + SHIFT_MASK		// 42 *
#define SW_ASCII_2B	KEY_MINUS				// 43 +
#define SW_ASCII_2C	KEY_COMMA				// 44 ,
#define SW_ASCII_2D	KEY_SLASH				// 45 -
#define SW_ASCII_2E	KEY_PERIOD				// 46 .
#define SW_ASCII_2F	KEY_7 + SHIFT_MASK			// 47 /
#define SW_ASCII_30	KEY_0					// 48 0
#define SW_ASCII_31	KEY_1					// 49 1
#define SW_ASCII_32	KEY_2					// 50 2
#define SW_ASCII_33	KEY_3					// 51 3
#define SW_ASCII_34	KEY_4					// 52 4
#define SW_ASCII_35	KEY_5					// 53 5
#define SW_ASCII_36	KEY_6					// 54 6
#define SW_ASCII_37	KEY_7					// 55 7
#define SW_ASCII_38	KEY_8					// 55 8
#define SW_ASCII_39	KEY_9					// 57 9
#define SW_ASCII_3A	KEY_PERIOD + SHIFT_MASK			// 58 :
#define SW_ASCII_3B	KEY_COMMA + SHIFT_MASK			// 59 ;
#define SW_ASCII_3C	KEY_NON_US_100				// 60 <
#define SW_ASCII_3D	KEY_0 + SHIFT_MASK			// 61 =
#define SW_ASCII_3E	KEY_NON_US_100 + SHIFT_MASK		// 62 >
#define SW_ASCII_3F	KEY_MINUS + SHIFT_MASK			// 63 ?
#define SW_ASCII_40	KEY_2 + ALTGR_MASK			// 64 @
#define SW_ASCII_41	KEY_A + SHIFT_MASK			// 65 A
#define SW_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define SW_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define SW_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define SW_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define SW_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define SW_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define SW_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define SW_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define SW_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define SW_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define SW_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define SW_ASCII_4D	KEY_M + SHIFT_MASK			// 77 M
#define SW_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define SW_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define SW_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define SW_ASCII_51	KEY_Q + SHIFT_MASK			// 81 Q
#define SW_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define SW_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define SW_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define SW_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define SW_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define SW_ASCII_57	KEY_W + SHIFT_MASK			// 87 W
#define SW_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define SW_ASCII_59	KEY_Y + SHIFT_MASK			// 89 Y
#define SW_ASCII_5A	KEY_Z + SHIFT_MASK			// 90 Z
#define SW_ASCII_5B	KEY_8 + ALTGR_MASK			// 91 [
#define SW_ASCII_5C	KEY_MINUS + ALTGR_MASK			// 92
#define SW_ASCII_5D	KEY_9 + ALTGR_MASK			// 93 ]
#define SW_ASCII_5E	CIRCUMFLEX_BITS + KEY_SPACE		// 94 ^
#define SW_ASCII_5F	KEY_SLASH + SHIFT_MASK			// 95 _
#define SW_ASCII_60	SW_GRAVE_ACCENT_BITS + KEY_SPACE		// 96 `
#define SW_ASCII_61	KEY_A					// 97 a
#define SW_ASCII_62	KEY_B					// 98 b
#define SW_ASCII_63	KEY_C					// 99 c
#define SW_ASCII_64	KEY_D					// 100 d
#define SW_ASCII_65	KEY_E					// 101 e
#define SW_ASCII_66	KEY_F					// 102 f
#define SW_ASCII_67	KEY_G					// 103 g
#define SW_ASCII_68	KEY_H					// 104 h
#define SW_ASCII_69	KEY_I					// 105 i
#define SW_ASCII_6A	KEY_J					// 106 j
#define SW_ASCII_6B	KEY_K					// 107 k
#define SW_ASCII_6C	KEY_L					// 108 l
#define SW_ASCII_6D	KEY_M					// 109 m
#define SW_ASCII_6E	KEY_N					// 110 n
#define SW_ASCII_6F	KEY_O					// 111 o
#define SW_ASCII_70	KEY_P					// 112 p
#define SW_ASCII_71	KEY_Q					// 113 q
#define SW_ASCII_72	KEY_R					// 114 r
#define SW_ASCII_73	KEY_S					// 115 s
#define SW_ASCII_74	KEY_T					// 116 t
#define SW_ASCII_75	KEY_U					// 117 u
#define SW_ASCII_76	KEY_V					// 118 v
#define SW_ASCII_77	KEY_W					// 119 w
#define SW_ASCII_78	KEY_X					// 120 x
#define SW_ASCII_79	KEY_Y					// 121 y
#define SW_ASCII_7A	KEY_Z					// 122 z
#define SW_ASCII_7B	KEY_7 + ALTGR_MASK			// 123 {
#define SW_ASCII_7C	KEY_NON_US_100 + ALTGR_MASK		// 124 |
#define SW_ASCII_7D	KEY_0 + ALTGR_MASK			// 125 }
#define SW_ASCII_7E	SW_TILDE_BITS + KEY_SPACE			// 126 ~
#define SW_ASCII_7F	KEY_BACKSPACE				// 127

#define SW_ISO_8859_1_A0	KEY_SPACE				// 160       Nonbreakng Space
#define SW_ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define SW_ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define SW_ISO_8859_1_A3	KEY_3 + ALTGR_MASK			// 163 £     Pound Sign
#define SW_ISO_8859_1_A4	KEY_4 + SHIFT_MASK			// 164 ¤     Currency Sign
#define SW_ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define SW_ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define SW_ISO_8859_1_A7	KEY_TILDE				// 167 §     SECTION SIGN
#define SW_ISO_8859_1_A8	SW_DIAERESIS_BITS + KEY_SPACE		// 168 ¨     DIAERESIS
#define SW_ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define SW_ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define SW_ISO_8859_1_AB	KEY_4					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define SW_ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define SW_ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define SW_ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define SW_ISO_8859_1_AF	0					// 175 ¯     MACRON
#define SW_ISO_8859_1_B0	0					// 176 °     DEGREE SIGN
#define SW_ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define SW_ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define SW_ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define SW_ISO_8859_1_B4	SW_ACUTE_ACCENT_BITS + KEY_SPACE		// 180 ´     ACUTE ACCENT
#define SW_ISO_8859_1_B5	KEY_M + ALTGR_MASK			// 181 µ     MICRO SIGN
#define SW_ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define SW_ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define SW_ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define SW_ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define SW_ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define SW_ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define SW_ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define SW_ISO_8859_1_BD	KEY_TILDE + SHIFT_MASK			// 189 ½     FRACTION ONE HALF
#define SW_ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define SW_ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define SW_ISO_8859_1_C0	SW_GRAVE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define SW_ISO_8859_1_C1	SW_ACUTE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define SW_ISO_8859_1_C2	CIRCUMFLEX_BITS + KEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define SW_ISO_8859_1_C3	SW_TILDE_BITS + KEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define SW_ISO_8859_1_C4	KEY_QUOTE + SHIFT_MASK			// 196 Ä     A DIAERESIS
#define SW_ISO_8859_1_C5	KEY_LEFT_BRACE + SHIFT_MASK		// 197 Å     A RING ABOVE
#define SW_ISO_8859_1_C6	0					// 198 Æ     AE
#define SW_ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define SW_ISO_8859_1_C8	SW_GRAVE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define SW_ISO_8859_1_C9	SW_ACUTE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define SW_ISO_8859_1_CA	CIRCUMFLEX_BITS + KEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define SW_ISO_8859_1_CB	SW_DIAERESIS_BITS + KEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define SW_ISO_8859_1_CC	SW_GRAVE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define SW_ISO_8859_1_CD	SW_ACUTE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define SW_ISO_8859_1_CE	CIRCUMFLEX_BITS + KEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define SW_ISO_8859_1_CF	SW_DIAERESIS_BITS + KEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define SW_ISO_8859_1_D0	KEY_D + ALTGR_MASK + SHIFT_MASK		// 208 Ð     ETH
#define SW_ISO_8859_1_D1	SW_TILDE_BITS + KEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define SW_ISO_8859_1_D2	SW_GRAVE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define SW_ISO_8859_1_D3	SW_ACUTE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define SW_ISO_8859_1_D4	CIRCUMFLEX_BITS + KEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define SW_ISO_8859_1_D5	SW_TILDE_BITS + KEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define SW_ISO_8859_1_D6	KEY_SEMICOLON + SHIFT_MASK		// 214 Ö     O DIAERESIS
#define SW_ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define SW_ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define SW_ISO_8859_1_D9	SW_GRAVE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define SW_ISO_8859_1_DA	SW_ACUTE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define SW_ISO_8859_1_DB	CIRCUMFLEX_BITS + KEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define SW_ISO_8859_1_DC	SW_DIAERESIS_BITS + KEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define SW_ISO_8859_1_DD	SW_ACUTE_ACCENT_BITS + KEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define SW_ISO_8859_1_DE	KEY_T + ALTGR_MASK + SHIFT_MASK		// 222 Þ     THORN
#define SW_ISO_8859_1_DF	KEY_S + ALTGR_MASK			// 223 ß     SHARP S
#define SW_ISO_8859_1_E0	SW_GRAVE_ACCENT_BITS + KEY_A		// 224 à     a GRAVE
#define SW_ISO_8859_1_E1	SW_ACUTE_ACCENT_BITS + KEY_A		// 225 á     a ACUTE
#define SW_ISO_8859_1_E2	CIRCUMFLEX_BITS + KEY_A			// 226 â     a CIRCUMFLEX
#define SW_ISO_8859_1_E3	SW_TILDE_BITS + KEY_A			// 227 ã     a TILDE
#define SW_ISO_8859_1_E4	KEY_QUOTE				// 228 ä     a DIAERESIS
#define SW_ISO_8859_1_E5	KEY_LEFT_BRACE				// 229 å     a RING ABOVE
#define SW_ISO_8859_1_E6	0					// 230 æ     ae
#define SW_ISO_8859_1_E7	0					// 231 ç     c CEDILLA
#define SW_ISO_8859_1_E8	SW_GRAVE_ACCENT_BITS + KEY_E		// 232 è     e GRAVE
#define SW_ISO_8859_1_E9	SW_ACUTE_ACCENT_BITS + KEY_E		// 233 é     e ACUTE
#define SW_ISO_8859_1_EA	CIRCUMFLEX_BITS + KEY_E			// 234 ê     e CIRCUMFLEX
#define SW_ISO_8859_1_EB	SW_DIAERESIS_BITS + KEY_E			// 235 ë     e DIAERESIS
#define SW_ISO_8859_1_EC	SW_GRAVE_ACCENT_BITS + KEY_I		// 236 ì     i GRAVE
#define SW_ISO_8859_1_ED	SW_ACUTE_ACCENT_BITS + KEY_I		// 237 í     i ACUTE
#define SW_ISO_8859_1_EE	CIRCUMFLEX_BITS + KEY_I			// 238 î     i CIRCUMFLEX
#define SW_ISO_8859_1_EF	SW_DIAERESIS_BITS + KEY_I			// 239 ï     i DIAERESIS
#define SW_ISO_8859_1_F0	KEY_D + ALTGR_MASK			// 240 ð     ETH
#define SW_ISO_8859_1_F1	SW_TILDE_BITS + KEY_N			// 241 ñ     n TILDE
#define SW_ISO_8859_1_F2	SW_GRAVE_ACCENT_BITS + KEY_O		// 242 ò     o GRAVE
#define SW_ISO_8859_1_F3	SW_ACUTE_ACCENT_BITS + KEY_O		// 243 ó     o ACUTE
#define SW_ISO_8859_1_F4	CIRCUMFLEX_BITS + KEY_O			// 244 ô     o CIRCUMFLEX
#define SW_ISO_8859_1_F5	SW_TILDE_BITS + KEY_O			// 245 õ     o TILDE
#define SW_ISO_8859_1_F6	KEY_SEMICOLON				// 246 ö     o DIAERESIS
#define SW_ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define SW_ISO_8859_1_F8	0					// 248 ø     o STROKE
#define SW_ISO_8859_1_F9	SW_GRAVE_ACCENT_BITS + KEY_U		// 249 ù     u GRAVE
#define SW_ISO_8859_1_FA	SW_ACUTE_ACCENT_BITS + KEY_U		// 250 ú     u ACUTE
#define SW_ISO_8859_1_FB	CIRCUMFLEX_BITS + KEY_U			// 251 û     u CIRCUMFLEX
#define SW_ISO_8859_1_FC	SW_DIAERESIS_BITS + KEY_U			// 252 ü     u DIAERESIS
#define SW_ISO_8859_1_FD	SW_ACUTE_ACCENT_BITS + KEY_Y		// 253 ý     y ACUTE
#define SW_ISO_8859_1_FE	KEY_T + ALTGR_MASK			// 254 þ     THORN
#define SW_ISO_8859_1_FF	SW_DIAERESIS_BITS + KEY_Y			// 255 ÿ     y DIAERESIS
#define SW_UNICODE_20AC	KEY_E + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define SW_UNICODE_EXTRA00	0x20AC
#define SW_KEYCODE_EXTRA00	KEY_E + ALTGR_MASK			// 20AC €    Euro Sign




#define ES_ACUTE_ACCENT_BITS	0x0200
#define ES_GRAVE_ACCENT_BITS	0x0300
#define ES_TILDE_BITS		0x0400
#define ES_DIAERESIS_BITS		0x0500
#define ES_KEYCODE_TYPE		uint16_t
#define ES_DEADKEY_CIRCUMFLEX	KEY_LEFT_BRACE + SHIFT_MASK
#define ES_DEADKEY_ACUTE_ACCENT	KEY_QUOTE
#define ES_DEADKEY_GRAVE_ACCENT	KEY_LEFT_BRACE
#define ES_DEADKEY_TILDE		KEY_4 + ALTGR_MASK
#define ES_DEADKEY_DIAERESIS	KEY_QUOTE + SHIFT_MASK
#define KEY_NON_US_100		63

#define ES_ASCII_20	KEY_SPACE				// 32  
#define ES_ASCII_21	KEY_1 + SHIFT_MASK			// 33 !
#define ES_ASCII_22	KEY_2 + SHIFT_MASK			// 34 "
#define ES_ASCII_23	KEY_3 + ALTGR_MASK			// 35 #
#define ES_ASCII_24	KEY_4 + SHIFT_MASK			// 36 $
#define ES_ASCII_25	KEY_5 + SHIFT_MASK			// 37 %
#define ES_ASCII_26	KEY_6 + SHIFT_MASK			// 38 &
#define ES_ASCII_27	KEY_MINUS				// 39 '
#define ES_ASCII_28	KEY_8 + SHIFT_MASK			// 40 (
#define ES_ASCII_29	KEY_9 + SHIFT_MASK			// 41 )
#define ES_ASCII_2A	KEY_RIGHT_BRACE + SHIFT_MASK		// 42 *
#define ES_ASCII_2B	KEY_RIGHT_BRACE				// 43 +
#define ES_ASCII_2C	KEY_COMMA				// 44 ,
#define ES_ASCII_2D	KEY_SLASH				// 45 -
#define ES_ASCII_2E	KEY_PERIOD				// 46 .
#define ES_ASCII_2F	KEY_7 + SHIFT_MASK			// 47 /
#define ES_ASCII_30	KEY_0					// 48 0
#define ES_ASCII_31	KEY_1					// 49 1
#define ES_ASCII_32	KEY_2					// 50 2
#define ES_ASCII_33	KEY_3					// 51 3
#define ES_ASCII_34	KEY_4					// 52 4
#define ES_ASCII_35	KEY_5					// 53 5
#define ES_ASCII_36	KEY_6					// 54 6
#define ES_ASCII_37	KEY_7					// 55 7
#define ES_ASCII_38	KEY_8					// 55 8
#define ES_ASCII_39	KEY_9					// 57 9
#define ES_ASCII_3A	KEY_PERIOD + SHIFT_MASK			// 58 :
#define ES_ASCII_3B	KEY_COMMA + SHIFT_MASK			// 59 ;
#define ES_ASCII_3C	KEY_NON_US_100				// 60 <
#define ES_ASCII_3D	KEY_0 + SHIFT_MASK			// 61 =
#define ES_ASCII_3E	KEY_NON_US_100 + SHIFT_MASK		// 62 >
#define ES_ASCII_3F	KEY_MINUS + SHIFT_MASK			// 63 ?
#define ES_ASCII_40	KEY_2 + ALTGR_MASK			// 64 @
#define ES_ASCII_41	KEY_A + SHIFT_MASK			// 65 A
#define ES_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define ES_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define ES_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define ES_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define ES_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define ES_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define ES_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define ES_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define ES_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define ES_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define ES_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define ES_ASCII_4D	KEY_M + SHIFT_MASK			// 77 M
#define ES_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define ES_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define ES_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define ES_ASCII_51	KEY_Q + SHIFT_MASK			// 81 Q
#define ES_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define ES_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define ES_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define ES_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define ES_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define ES_ASCII_57	KEY_W + SHIFT_MASK			// 87 W
#define ES_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define ES_ASCII_59	KEY_Y + SHIFT_MASK			// 89 Y
#define ES_ASCII_5A	KEY_Z + SHIFT_MASK			// 90 Z
#define ES_ASCII_5B	KEY_LEFT_BRACE + ALTGR_MASK		// 91 [
#define ES_ASCII_5C	KEY_TILDE + ALTGR_MASK			// 92
#define ES_ASCII_5D	KEY_RIGHT_BRACE + ALTGR_MASK		// 93 ]
#define ES_ASCII_5E	CIRCUMFLEX_BITS + KEY_SPACE		// 94 ^
#define ES_ASCII_5F	KEY_SLASH + SHIFT_MASK			// 95 _
#define ES_ASCII_60	ES_GRAVE_ACCENT_BITS + KEY_SPACE	// 96 `
#define ES_ASCII_61	KEY_A					// 97 a
#define ES_ASCII_62	KEY_B					// 98 b
#define ES_ASCII_63	KEY_C					// 99 c
#define ES_ASCII_64	KEY_D					// 100 d
#define ES_ASCII_65	KEY_E					// 101 e
#define ES_ASCII_66	KEY_F					// 102 f
#define ES_ASCII_67	KEY_G					// 103 g
#define ES_ASCII_68	KEY_H					// 104 h
#define ES_ASCII_69	KEY_I					// 105 i
#define ES_ASCII_6A	KEY_J					// 106 j
#define ES_ASCII_6B	KEY_K					// 107 k
#define ES_ASCII_6C	KEY_L					// 108 l
#define ES_ASCII_6D	KEY_M					// 109 m
#define ES_ASCII_6E	KEY_N					// 110 n
#define ES_ASCII_6F	KEY_O					// 111 o
#define ES_ASCII_70	KEY_P					// 112 p
#define ES_ASCII_71	KEY_Q					// 113 q
#define ES_ASCII_72	KEY_R					// 114 r
#define ES_ASCII_73	KEY_S					// 115 s
#define ES_ASCII_74	KEY_T					// 116 t
#define ES_ASCII_75	KEY_U					// 117 u
#define ES_ASCII_76	KEY_V					// 118 v
#define ES_ASCII_77	KEY_W					// 119 w
#define ES_ASCII_78	KEY_X					// 120 x
#define ES_ASCII_79	KEY_Y					// 121 y
#define ES_ASCII_7A	KEY_Z					// 122 z
#define ES_ASCII_7B	KEY_QUOTE + ALTGR_MASK			// 123 {
#define ES_ASCII_7C	KEY_1 + ALTGR_MASK			// 124 |
#define ES_ASCII_7D	KEY_BACKSLASH + ALTGR_MASK		// 125 }
#define ES_ASCII_7E	ES_TILDE_BITS + KEY_SPACE		// 126 ~
#define ES_ASCII_7F	KEY_BACKSPACE				// 127

#define ES_ISO_8859_1_A0	KEY_SPACE				// 160       Nonbreakng Space
#define ES_ISO_8859_1_A1	KEY_EQUAL				// 161 ¡     Inverted Exclamation
#define ES_ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define ES_ISO_8859_1_A3	0					// 163 £     Pound Sign
#define ES_ISO_8859_1_A4	0					// 164 ¤     Currency Sign
#define ES_ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define ES_ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define ES_ISO_8859_1_A7	0					// 167 §     SECTION SIGN
#define ES_ISO_8859_1_A8	ES_DIAERESIS_BITS + KEY_SPACE		// 168 ¨     DIAERESIS
#define ES_ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define ES_ISO_8859_1_AA	KEY_TILDE + SHIFT_MASK			// 170 ª     FEMININE ORDINAL
#define ES_ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ES_ISO_8859_1_AC	KEY_6 + ALTGR_MASK			// 172 ¬     NOT SIGN
#define ES_ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define ES_ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define ES_ISO_8859_1_AF	0					// 175 ¯     MACRON
#define ES_ISO_8859_1_B0	0					// 176 °     DEGREE SIGN
#define ES_ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define ES_ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define ES_ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define ES_ISO_8859_1_B4	ES_ACUTE_ACCENT_BITS + KEY_SPACE		// 180 ´     ACUTE ACCENT
#define ES_ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define ES_ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define ES_ISO_8859_1_B7	KEY_3 + SHIFT_MASK			// 183 ·     MIDDLE DOT
#define ES_ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define ES_ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define ES_ISO_8859_1_BA	KEY_TILDE				// 186 º     MASCULINE ORDINAL
#define ES_ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ES_ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define ES_ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define ES_ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define ES_ISO_8859_1_BF	KEY_EQUAL				// 191 ¿     INVERTED QUESTION MARK
#define ES_ISO_8859_1_C0	ES_GRAVE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define ES_ISO_8859_1_C1	ES_ACUTE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define ES_ISO_8859_1_C2	CIRCUMFLEX_BITS + KEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define ES_ISO_8859_1_C3	ES_TILDE_BITS + KEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define ES_ISO_8859_1_C4	ES_DIAERESIS_BITS + KEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define ES_ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define ES_ISO_8859_1_C6	0					// 198 Æ     AE
#define ES_ISO_8859_1_C7	KEY_BACKSLASH + SHIFT_MASK		// 199 Ç     C CEDILLA
#define ES_ISO_8859_1_C8	ES_GRAVE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define ES_ISO_8859_1_C9	ES_ACUTE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define ES_ISO_8859_1_CA	CIRCUMFLEX_BITS + KEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define ES_ISO_8859_1_CB	ES_DIAERESIS_BITS + KEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define ES_ISO_8859_1_CC	ES_GRAVE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define ES_ISO_8859_1_CD	ES_ACUTE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define ES_ISO_8859_1_CE	CIRCUMFLEX_BITS + KEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define ES_ISO_8859_1_CF	ES_DIAERESIS_BITS + KEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define ES_ISO_8859_1_D0	0					// 208 Ð     ETH
#define ES_ISO_8859_1_D1	KEY_SEMICOLON + SHIFT_MASK		// 209 Ñ     N TILDE
#define ES_ISO_8859_1_D2	ES_GRAVE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define ES_ISO_8859_1_D3	ES_ACUTE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define ES_ISO_8859_1_D4	CIRCUMFLEX_BITS + KEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define ES_ISO_8859_1_D5	ES_TILDE_BITS + KEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define ES_ISO_8859_1_D6	ES_DIAERESIS_BITS + KEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define ES_ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define ES_ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define ES_ISO_8859_1_D9	ES_GRAVE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define ES_ISO_8859_1_DA	ES_ACUTE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define ES_ISO_8859_1_DB	CIRCUMFLEX_BITS + KEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define ES_ISO_8859_1_DC	ES_DIAERESIS_BITS + KEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define ES_ISO_8859_1_DD	ES_ACUTE_ACCENT_BITS + KEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define ES_ISO_8859_1_DE	0					// 222 Þ     THORN
#define ES_ISO_8859_1_DF	0					// 223 ß     SHARP S
#define ES_ISO_8859_1_E0	ES_GRAVE_ACCENT_BITS + KEY_A		// 224 à     a GRAVE
#define ES_ISO_8859_1_E1	ES_ACUTE_ACCENT_BITS + KEY_A		// 225 á     a ACUTE
#define ES_ISO_8859_1_E2	CIRCUMFLEX_BITS + KEY_A			// 226 â     a CIRCUMFLEX
#define ES_ISO_8859_1_E3	ES_TILDE_BITS + KEY_A			// 227 ã     a TILDE
#define ES_ISO_8859_1_E4	ES_DIAERESIS_BITS + KEY_A			// 228 ä     a DIAERESIS
#define ES_ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define ES_ISO_8859_1_E6	0					// 230 æ     ae
#define ES_ISO_8859_1_E7	KEY_BACKSLASH				// 231 ç     c CEDILLA
#define ES_ISO_8859_1_E8	ES_GRAVE_ACCENT_BITS + KEY_E		// 232 è     e GRAVE
#define ES_ISO_8859_1_E9	ES_ACUTE_ACCENT_BITS + KEY_E		// 233 é     e ACUTE
#define ES_ISO_8859_1_EA	CIRCUMFLEX_BITS + KEY_E			// 234 ê     e CIRCUMFLEX
#define ES_ISO_8859_1_EB	ES_DIAERESIS_BITS + KEY_E			// 235 ë     e DIAERESIS
#define ES_ISO_8859_1_EC	ES_GRAVE_ACCENT_BITS + KEY_I		// 236 ì     i GRAVE
#define ES_ISO_8859_1_ED	ES_ACUTE_ACCENT_BITS + KEY_I		// 237 í     i ACUTE
#define ES_ISO_8859_1_EE	CIRCUMFLEX_BITS + KEY_I			// 238 î     i CIRCUMFLEX
#define ES_ISO_8859_1_EF	ES_DIAERESIS_BITS + KEY_I			// 239 ï     i DIAERESIS
#define ES_ISO_8859_1_F0	0					// 240 ð     ETH
#define ES_ISO_8859_1_F1	KEY_SEMICOLON				// 241 ñ     n TILDE
#define ES_ISO_8859_1_F2	ES_GRAVE_ACCENT_BITS + KEY_O		// 242 ò     o GRAVE
#define ES_ISO_8859_1_F3	ES_ACUTE_ACCENT_BITS + KEY_O		// 243 ó     o ACUTE
#define ES_ISO_8859_1_F4	CIRCUMFLEX_BITS + KEY_O			// 244 ô     o CIRCUMFLEX
#define ES_ISO_8859_1_F5	ES_TILDE_BITS + KEY_O			// 245 õ     o TILDE
#define ES_ISO_8859_1_F6	ES_DIAERESIS_BITS + KEY_O			// 246 ö     o DIAERESIS
#define ES_ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define ES_ISO_8859_1_F8	0					// 248 ø     o STROKE
#define ES_ISO_8859_1_F9	ES_GRAVE_ACCENT_BITS + KEY_U		// 249 ù     u GRAVE
#define ES_ISO_8859_1_FA	ES_ACUTE_ACCENT_BITS + KEY_U		// 250 ú     u ACUTE
#define ES_ISO_8859_1_FB	CIRCUMFLEX_BITS + KEY_U			// 251 û     u CIRCUMFLEX
#define ES_ISO_8859_1_FC	ES_DIAERESIS_BITS + KEY_U			// 252 ü     u DIAERESIS
#define ES_ISO_8859_1_FD	ES_ACUTE_ACCENT_BITS + KEY_Y		// 253 ý     y ACUTE
#define ES_ISO_8859_1_FE	0					// 254 þ     THORN
#define ES_ISO_8859_1_FF	ES_DIAERESIS_BITS + KEY_Y			// 255 ÿ     y DIAERESIS
#define ES_UNICODE_20AC	KEY_5 + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define ES_UNICODE_EXTRA00	0x20AC
#define ES_KEYCODE_EXTRA00	KEY_5 + ALTGR_MASK			// 20AC €    Euro Sign




#define PT_ACUTE_ACCENT_BITS	0x0200
#define PT_GRAVE_ACCENT_BITS	0x0300
#define PT_TILDE_BITS		0x0400
#define PT_DIAERESIS_BITS		0x0500
#define PT_KEYCODE_TYPE		uint16_t
#define PT_DEADKEY_CIRCUMFLEX	KEY_BACKSLASH
#define PT_DEADKEY_ACUTE_ACCENT	KEY_RIGHT_BRACE + SHIFT_MASK
#define PT_DEADKEY_GRAVE_ACCENT	KEY_RIGHT_BRACE + SHIFT_MASK
#define PT_DEADKEY_TILDE		KEY_BACKSLASH
#define PT_DEADKEY_DIAERESIS	KEY_LEFT_BRACE + SHIFT_MASK
#define KEY_NON_US_100		63

#define PT_ASCII_20	KEY_SPACE				// 32  
#define PT_ASCII_21	KEY_1 + SHIFT_MASK			// 33 !
#define PT_ASCII_22	KEY_2 + SHIFT_MASK			// 34 "
#define PT_ASCII_23	KEY_3 + ALTGR_MASK			// 35 #
#define PT_ASCII_24	KEY_4 + SHIFT_MASK			// 36 $
#define PT_ASCII_25	KEY_5 + SHIFT_MASK			// 37 %
#define PT_ASCII_26	KEY_6 + SHIFT_MASK			// 38 &
#define PT_ASCII_27	KEY_MINUS				// 39 '
#define PT_ASCII_28	KEY_8 + SHIFT_MASK			// 40 (
#define PT_ASCII_29	KEY_9 + SHIFT_MASK			// 41 )
#define PT_ASCII_2A	KEY_LEFT_BRACE + SHIFT_MASK		// 42 *
#define PT_ASCII_2B	KEY_LEFT_BRACE				// 43 +
#define PT_ASCII_2C	KEY_COMMA				// 44 ,
#define PT_ASCII_2D	KEY_SLASH				// 45 -
#define PT_ASCII_2E	KEY_PERIOD				// 46 .
#define PT_ASCII_2F	KEY_7 + SHIFT_MASK			// 47 /
#define PT_ASCII_30	KEY_0					// 48 0
#define PT_ASCII_31	KEY_1					// 49 1
#define PT_ASCII_32	KEY_2					// 50 2
#define PT_ASCII_33	KEY_3					// 51 3
#define PT_ASCII_34	KEY_4					// 52 4
#define PT_ASCII_35	KEY_5					// 53 5
#define PT_ASCII_36	KEY_6					// 54 6
#define PT_ASCII_37	KEY_7					// 55 7
#define PT_ASCII_38	KEY_8					// 55 8
#define PT_ASCII_39	KEY_9					// 57 9
#define PT_ASCII_3A	KEY_PERIOD + SHIFT_MASK			// 58 :
#define PT_ASCII_3B	KEY_COMMA + SHIFT_MASK			// 59 ;
#define PT_ASCII_3C	KEY_NON_US_100				// 60 <
#define PT_ASCII_3D	KEY_0 + SHIFT_MASK			// 61 =
#define PT_ASCII_3E	KEY_NON_US_100 + SHIFT_MASK		// 62 >
#define PT_ASCII_3F	KEY_MINUS + SHIFT_MASK			// 63 ?
#define PT_ASCII_40	KEY_2 + ALTGR_MASK			// 64 @
#define PT_ASCII_41	KEY_A + SHIFT_MASK			// 65 A
#define PT_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define PT_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define PT_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define PT_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define PT_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define PT_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define PT_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define PT_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define PT_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define PT_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define PT_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define PT_ASCII_4D	KEY_M + SHIFT_MASK			// 77 M
#define PT_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define PT_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define PT_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define PT_ASCII_51	KEY_Q + SHIFT_MASK			// 81 Q
#define PT_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define PT_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define PT_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define PT_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define PT_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define PT_ASCII_57	KEY_W + SHIFT_MASK			// 87 W
#define PT_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define PT_ASCII_59	KEY_Y + SHIFT_MASK			// 89 Y
#define PT_ASCII_5A	KEY_Z + SHIFT_MASK			// 90 Z
#define PT_ASCII_5B	KEY_8 + ALTGR_MASK			// 91 [
#define PT_ASCII_5C	KEY_TILDE + ALTGR_MASK			// 92
#define PT_ASCII_5D	KEY_9 + ALTGR_MASK			// 93 ]
#define PT_ASCII_5E	CIRCUMFLEX_BITS + KEY_SPACE		// 94 ^
#define PT_ASCII_5F	KEY_SLASH + SHIFT_MASK			// 95 _
#define PT_ASCII_60	PT_GRAVE_ACCENT_BITS + KEY_SPACE		// 96 `
#define PT_ASCII_61	KEY_A					// 97 a
#define PT_ASCII_62	KEY_B					// 98 b
#define PT_ASCII_63	KEY_C					// 99 c
#define PT_ASCII_64	KEY_D					// 100 d
#define PT_ASCII_65	KEY_E					// 101 e
#define PT_ASCII_66	KEY_F					// 102 f
#define PT_ASCII_67	KEY_G					// 103 g
#define PT_ASCII_68	KEY_H					// 104 h
#define PT_ASCII_69	KEY_I					// 105 i
#define PT_ASCII_6A	KEY_J					// 106 j
#define PT_ASCII_6B	KEY_K					// 107 k
#define PT_ASCII_6C	KEY_L					// 108 l
#define PT_ASCII_6D	KEY_M					// 109 m
#define PT_ASCII_6E	KEY_N					// 110 n
#define PT_ASCII_6F	KEY_O					// 111 o
#define PT_ASCII_70	KEY_P					// 112 p
#define PT_ASCII_71	KEY_Q					// 113 q
#define PT_ASCII_72	KEY_R					// 114 r
#define PT_ASCII_73	KEY_S					// 115 s
#define PT_ASCII_74	KEY_T					// 116 t
#define PT_ASCII_75	KEY_U					// 117 u
#define PT_ASCII_76	KEY_V					// 118 v
#define PT_ASCII_77	KEY_W					// 119 w
#define PT_ASCII_78	KEY_X					// 120 x
#define PT_ASCII_79	KEY_Y					// 121 y
#define PT_ASCII_7A	KEY_Z					// 122 z
#define PT_ASCII_7B	KEY_7 + ALTGR_MASK			// 123 {
#define PT_ASCII_7C	KEY_TILDE + SHIFT_MASK			// 124 |
#define PT_ASCII_7D	KEY_0 + ALTGR_MASK			// 125 }
#define PT_ASCII_7E	PT_TILDE_BITS + KEY_SPACE			// 126 ~
#define PT_ASCII_7F	KEY_BACKSPACE				// 127

#define PT_ISO_8859_1_A0	KEY_SPACE				// 160       Nonbreakng Space
#define PT_ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define PT_ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define PT_ISO_8859_1_A3	KEY_3 + ALTGR_MASK			// 163 £     Pound Sign
#define PT_ISO_8859_1_A4	0					// 164 ¤     Currency Sign
#define PT_ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define PT_ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define PT_ISO_8859_1_A7	KEY_4 + ALTGR_MASK			// 167 §     SECTION SIGN
#define PT_ISO_8859_1_A8	PT_DIAERESIS_BITS + KEY_SPACE		// 168 ¨     DIAERESIS
#define PT_ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define PT_ISO_8859_1_AA	KEY_QUOTE + SHIFT_MASK			// 170 ª     FEMININE ORDINAL
#define PT_ISO_8859_1_AB	KEY_EQUAL				// 171 «     LEFT DOUBLE ANGLE QUOTE
#define PT_ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define PT_ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define PT_ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define PT_ISO_8859_1_AF	0					// 175 ¯     MACRON
#define PT_ISO_8859_1_B0	0					// 176 °     DEGREE SIGN
#define PT_ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define PT_ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define PT_ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define PT_ISO_8859_1_B4	PT_ACUTE_ACCENT_BITS + KEY_SPACE		// 180 ´     ACUTE ACCENT
#define PT_ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define PT_ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define PT_ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define PT_ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define PT_ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define PT_ISO_8859_1_BA	KEY_QUOTE				// 186 º     MASCULINE ORDINAL
#define PT_ISO_8859_1_BB	KEY_EQUAL + SHIFT_MASK			// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define PT_ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define PT_ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define PT_ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define PT_ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define PT_ISO_8859_1_C0	PT_GRAVE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define PT_ISO_8859_1_C1	PT_ACUTE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define PT_ISO_8859_1_C2	CIRCUMFLEX_BITS + KEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define PT_ISO_8859_1_C3	PT_TILDE_BITS + KEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define PT_ISO_8859_1_C4	PT_DIAERESIS_BITS + KEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define PT_ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define PT_ISO_8859_1_C6	0					// 198 Æ     AE
#define PT_ISO_8859_1_C7	KEY_SEMICOLON + SHIFT_MASK		// 199 Ç     C CEDILLA
#define PT_ISO_8859_1_C8	PT_GRAVE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define PT_ISO_8859_1_C9	PT_ACUTE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define PT_ISO_8859_1_CA	CIRCUMFLEX_BITS + KEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define PT_ISO_8859_1_CB	PT_DIAERESIS_BITS + KEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define PT_ISO_8859_1_CC	PT_GRAVE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define PT_ISO_8859_1_CD	PT_ACUTE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define PT_ISO_8859_1_CE	CIRCUMFLEX_BITS + KEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define PT_ISO_8859_1_CF	PT_DIAERESIS_BITS + KEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define PT_ISO_8859_1_D0	0					// 208 Ð     ETH
#define PT_ISO_8859_1_D1	PT_TILDE_BITS + KEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define PT_ISO_8859_1_D2	PT_GRAVE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define PT_ISO_8859_1_D3	PT_ACUTE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define PT_ISO_8859_1_D4	CIRCUMFLEX_BITS + KEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define PT_ISO_8859_1_D5	PT_TILDE_BITS + KEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define PT_ISO_8859_1_D6	PT_DIAERESIS_BITS + KEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define PT_ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define PT_ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define PT_ISO_8859_1_D9	PT_GRAVE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define PT_ISO_8859_1_DA	PT_ACUTE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define PT_ISO_8859_1_DB	CIRCUMFLEX_BITS + KEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define PT_ISO_8859_1_DC	PT_DIAERESIS_BITS + KEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define PT_ISO_8859_1_DD	PT_ACUTE_ACCENT_BITS + KEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define PT_ISO_8859_1_DE	0					// 222 Þ     THORN
#define PT_ISO_8859_1_DF	0					// 223 ß     SHARP S
#define PT_ISO_8859_1_E0	PT_GRAVE_ACCENT_BITS + KEY_A		// 224 à     a GRAVE
#define PT_ISO_8859_1_E1	PT_ACUTE_ACCENT_BITS + KEY_A		// 225 á     a ACUTE
#define PT_ISO_8859_1_E2	CIRCUMFLEX_BITS + KEY_A			// 226 â     a CIRCUMFLEX
#define PT_ISO_8859_1_E3	PT_TILDE_BITS + KEY_A			// 227 ã     a TILDE
#define PT_ISO_8859_1_E4	PT_DIAERESIS_BITS + KEY_A			// 228 ä     a DIAERESIS
#define PT_ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define PT_ISO_8859_1_E6	0					// 230 æ     ae
#define PT_ISO_8859_1_E7	KEY_SEMICOLON				// 231 ç     c CEDILLA
#define PT_ISO_8859_1_E8	PT_GRAVE_ACCENT_BITS + KEY_E		// 232 è     e GRAVE
#define PT_ISO_8859_1_E9	PT_ACUTE_ACCENT_BITS + KEY_E		// 233 é     e ACUTE
#define PT_ISO_8859_1_EA	CIRCUMFLEX_BITS + KEY_E			// 234 ê     e CIRCUMFLEX
#define PT_ISO_8859_1_EB	PT_DIAERESIS_BITS + KEY_E			// 235 ë     e DIAERESIS
#define PT_ISO_8859_1_EC	PT_GRAVE_ACCENT_BITS + KEY_I		// 236 ì     i GRAVE
#define PT_ISO_8859_1_ED	PT_ACUTE_ACCENT_BITS + KEY_I		// 237 í     i ACUTE
#define PT_ISO_8859_1_EE	CIRCUMFLEX_BITS + KEY_I			// 238 î     i CIRCUMFLEX
#define PT_ISO_8859_1_EF	PT_DIAERESIS_BITS + KEY_I			// 239 ï     i DIAERESIS
#define PT_ISO_8859_1_F0	0					// 240 ð     ETH
#define PT_ISO_8859_1_F1	PT_TILDE_BITS + KEY_N			// 241 ñ     n TILDE
#define PT_ISO_8859_1_F2	PT_GRAVE_ACCENT_BITS + KEY_O		// 242 ò     o GRAVE
#define PT_ISO_8859_1_F3	PT_ACUTE_ACCENT_BITS + KEY_O		// 243 ó     o ACUTE
#define PT_ISO_8859_1_F4	CIRCUMFLEX_BITS + KEY_O			// 244 ô     o CIRCUMFLEX
#define PT_ISO_8859_1_F5	PT_TILDE_BITS + KEY_O			// 245 õ     o TILDE
#define PT_ISO_8859_1_F6	PT_DIAERESIS_BITS + KEY_O			// 246 ö     o DIAERESIS
#define PT_ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define PT_ISO_8859_1_F8	0					// 248 ø     o STROKE
#define PT_ISO_8859_1_F9	PT_GRAVE_ACCENT_BITS + KEY_U		// 249 ù     u GRAVE
#define PT_ISO_8859_1_FA	PT_ACUTE_ACCENT_BITS + KEY_U		// 250 ú     u ACUTE
#define PT_ISO_8859_1_FB	CIRCUMFLEX_BITS + KEY_U			// 251 û     u CIRCUMFLEX
#define PT_ISO_8859_1_FC	PT_DIAERESIS_BITS + KEY_U			// 252 ü     u DIAERESIS
#define PT_ISO_8859_1_FD	PT_ACUTE_ACCENT_BITS + KEY_Y		// 253 ý     y ACUTE
#define PT_ISO_8859_1_FE	0					// 254 þ     THORN
#define PT_ISO_8859_1_FF	PT_DIAERESIS_BITS + KEY_Y			// 255 ÿ     y DIAERESIS
#define PT_UNICODE_20AC	KEY_E + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define PT_UNICODE_EXTRA00	0x20AC
#define PT_KEYCODE_EXTRA00	KEY_E + ALTGR_MASK			// 20AC €    Euro Sign



#define IT_KEYCODE_TYPE		uint8_t
#define KEY_NON_US_100		63

#define IT_ASCII_20	KEY_SPACE				// 32  
#define IT_ASCII_21	KEY_1 + SHIFT_MASK			// 33 !
#define IT_ASCII_22	KEY_2 + SHIFT_MASK			// 34 "
#define IT_ASCII_23	KEY_QUOTE + ALTGR_MASK			// 35 #
#define IT_ASCII_24	KEY_4 + SHIFT_MASK			// 36 $
#define IT_ASCII_25	KEY_5 + SHIFT_MASK			// 37 %
#define IT_ASCII_26	KEY_6 + SHIFT_MASK			// 38 &
#define IT_ASCII_27	KEY_MINUS				// 39 '
#define IT_ASCII_28	KEY_8 + SHIFT_MASK			// 40 (
#define IT_ASCII_29	KEY_9 + SHIFT_MASK			// 41 )
#define IT_ASCII_2A	KEY_RIGHT_BRACE + SHIFT_MASK		// 42 *
#define IT_ASCII_2B	KEY_RIGHT_BRACE				// 43 +
#define IT_ASCII_2C	KEY_COMMA				// 44 ,
#define IT_ASCII_2D	KEY_SLASH				// 45 -
#define IT_ASCII_2E	KEY_PERIOD				// 46 .
#define IT_ASCII_2F	KEY_7 + SHIFT_MASK			// 47 /
#define IT_ASCII_30	KEY_0					// 48 0
#define IT_ASCII_31	KEY_1					// 49 1
#define IT_ASCII_32	KEY_2					// 50 2
#define IT_ASCII_33	KEY_3					// 51 3
#define IT_ASCII_34	KEY_4					// 52 4
#define IT_ASCII_35	KEY_5					// 53 5
#define IT_ASCII_36	KEY_6					// 54 6
#define IT_ASCII_37	KEY_7					// 55 7
#define IT_ASCII_38	KEY_8					// 55 8
#define IT_ASCII_39	KEY_9					// 57 9
#define IT_ASCII_3A	KEY_PERIOD + SHIFT_MASK			// 58 :
#define IT_ASCII_3B	KEY_COMMA + SHIFT_MASK			// 59 ;
#define IT_ASCII_3C	KEY_NON_US_100				// 60 <
#define IT_ASCII_3D	KEY_0 + SHIFT_MASK			// 61 =
#define IT_ASCII_3E	KEY_NON_US_100 + SHIFT_MASK		// 62 >
#define IT_ASCII_3F	KEY_MINUS + SHIFT_MASK			// 63 ?
#define IT_ASCII_40	KEY_SEMICOLON + ALTGR_MASK		// 64 @
#define IT_ASCII_41	KEY_A + SHIFT_MASK			// 65 A
#define IT_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define IT_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define IT_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define IT_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define IT_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define IT_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define IT_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define IT_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define IT_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define IT_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define IT_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define IT_ASCII_4D	KEY_M + SHIFT_MASK			// 77 M
#define IT_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define IT_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define IT_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define IT_ASCII_51	KEY_Q + SHIFT_MASK			// 81 Q
#define IT_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define IT_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define IT_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define IT_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define IT_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define IT_ASCII_57	KEY_W + SHIFT_MASK			// 87 W
#define IT_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define IT_ASCII_59	KEY_Y + SHIFT_MASK			// 89 Y
#define IT_ASCII_5A	KEY_Z + SHIFT_MASK			// 90 Z
#define IT_ASCII_5B	KEY_LEFT_BRACE + ALTGR_MASK		// 91 [
#define IT_ASCII_5C	KEY_TILDE				// 92
#define IT_ASCII_5D	KEY_RIGHT_BRACE + ALTGR_MASK		// 93 ]
#define IT_ASCII_5E	KEY_EQUAL + SHIFT_MASK			// 94 ^
#define IT_ASCII_5F	KEY_SLASH + SHIFT_MASK			// 95 _
#define IT_ASCII_60	0					// 96 `  (how to type this on Italian?)
#define IT_ASCII_61	KEY_A					// 97 a
#define IT_ASCII_62	KEY_B					// 98 b
#define IT_ASCII_63	KEY_C					// 99 c
#define IT_ASCII_64	KEY_D					// 100 d
#define IT_ASCII_65	KEY_E					// 101 e
#define IT_ASCII_66	KEY_F					// 102 f
#define IT_ASCII_67	KEY_G					// 103 g
#define IT_ASCII_68	KEY_H					// 104 h
#define IT_ASCII_69	KEY_I					// 105 i
#define IT_ASCII_6A	KEY_J					// 106 j
#define IT_ASCII_6B	KEY_K					// 107 k
#define IT_ASCII_6C	KEY_L					// 108 l
#define IT_ASCII_6D	KEY_M					// 109 m
#define IT_ASCII_6E	KEY_N					// 110 n
#define IT_ASCII_6F	KEY_O					// 111 o
#define IT_ASCII_70	KEY_P					// 112 p
#define IT_ASCII_71	KEY_Q					// 113 q
#define IT_ASCII_72	KEY_R					// 114 r
#define IT_ASCII_73	KEY_S					// 115 s
#define IT_ASCII_74	KEY_T					// 116 t
#define IT_ASCII_75	KEY_U					// 117 u
#define IT_ASCII_76	KEY_V					// 118 v
#define IT_ASCII_77	KEY_W					// 119 w
#define IT_ASCII_78	KEY_X					// 120 x
#define IT_ASCII_79	KEY_Y					// 121 y
#define IT_ASCII_7A	KEY_Z					// 122 z
#define IT_ASCII_7B	KEY_LEFT_BRACE + SHIFT_MASK + ALTGR_MASK // 123 {
#define IT_ASCII_7C	KEY_TILDE + SHIFT_MASK			// 124 |
#define IT_ASCII_7D	KEY_RIGHT_BRACE + SHIFT_MASK + ALTGR_MASK // 125 }
#define IT_ASCII_7E	0					// 126 ~   (how to type this on Italian?)
#define IT_ASCII_7F	KEY_BACKSPACE				// 127

#define IT_ISO_8859_1_A0	KEY_SPACE				// 160       Nonbreakng Space
#define IT_ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define IT_ISO_8859_1_A2	0					// 162 ¢     Cent Sign
#define IT_ISO_8859_1_A3	KEY_3 + SHIFT_MASK			// 163 £     Pound Sign
#define IT_ISO_8859_1_A4	0					// 164 ¤     Currency Sign
#define IT_ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define IT_ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define IT_ISO_8859_1_A7	KEY_BACKSLASH + SHIFT_MASK		// 167 §     SECTION SIGN
#define IT_ISO_8859_1_A8	0					// 168 ¨     DIAERESIS
#define IT_ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define IT_ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define IT_ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define IT_ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define IT_ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define IT_ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define IT_ISO_8859_1_AF	0					// 175 ¯     MACRON
#define IT_ISO_8859_1_B0	KEY_QUOTE + SHIFT_MASK			// 176 °     DEGREE SIGN
#define IT_ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define IT_ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define IT_ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define IT_ISO_8859_1_B4	0					// 180 ´     ACUTE ACCENT
#define IT_ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define IT_ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define IT_ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define IT_ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define IT_ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define IT_ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define IT_ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define IT_ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define IT_ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define IT_ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define IT_ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define IT_ISO_8859_1_C0	0					// 192 À     A GRAVE
#define IT_ISO_8859_1_C1	0					// 193 Á     A ACUTE
#define IT_ISO_8859_1_C2	0					// 194 Â     A CIRCUMFLEX
#define IT_ISO_8859_1_C3	0					// 195 Ã     A TILDE
#define IT_ISO_8859_1_C4	0					// 196 Ä     A DIAERESIS
#define IT_ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define IT_ISO_8859_1_C6	0					// 198 Æ     AE
#define IT_ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define IT_ISO_8859_1_C8	0					// 200 È     E GRAVE
#define IT_ISO_8859_1_C9	0					// 201 É     E ACUTE
#define IT_ISO_8859_1_CA	0					// 202 Ê     E CIRCUMFLEX
#define IT_ISO_8859_1_CB	0					// 203 Ë     E DIAERESIS
#define IT_ISO_8859_1_CC	0					// 204 Ì     I GRAVE
#define IT_ISO_8859_1_CD	0					// 205 Í     I ACUTE
#define IT_ISO_8859_1_CE	0					// 206 Î     I CIRCUMFLEX
#define IT_ISO_8859_1_CF	0					// 207 Ï     I DIAERESIS
#define IT_ISO_8859_1_D0	0					// 208 Ð     ETH
#define IT_ISO_8859_1_D1	0					// 209 Ñ     N TILDE
#define IT_ISO_8859_1_D2	0					// 210 Ò     O GRAVE
#define IT_ISO_8859_1_D3	0					// 211 Ó     O ACUTE
#define IT_ISO_8859_1_D4	0					// 212 Ô     O CIRCUMFLEX
#define IT_ISO_8859_1_D5	0					// 213 Õ     O TILDE
#define IT_ISO_8859_1_D6	0					// 214 Ö     O DIAERESIS
#define IT_ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define IT_ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define IT_ISO_8859_1_D9	0					// 217 Ù     U GRAVE
#define IT_ISO_8859_1_DA	0					// 218 Ú     U ACUTE
#define IT_ISO_8859_1_DB	0					// 219 Û     U CIRCUMFLEX
#define IT_ISO_8859_1_DC	0					// 220 Ü     U DIAERESIS
#define IT_ISO_8859_1_DD	0					// 221 Ý     Y ACUTE
#define IT_ISO_8859_1_DE	0					// 222 Þ     THORN
#define IT_ISO_8859_1_DF	0					// 223 ß     SHARP S
#define IT_ISO_8859_1_E0	KEY_QUOTE				// 224 à     a GRAVE
#define IT_ISO_8859_1_E1	0					// 225 á     a ACUTE
#define IT_ISO_8859_1_E2	0					// 226 â     a CIRCUMFLEX
#define IT_ISO_8859_1_E3	0					// 227 ã     a TILDE
#define IT_ISO_8859_1_E4	0					// 228 ä     a DIAERESIS
#define IT_ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define IT_ISO_8859_1_E6	0					// 230 æ     ae
#define IT_ISO_8859_1_E7	KEY_SEMICOLON + SHIFT_MASK		// 231 ç     c CEDILLA
#define IT_ISO_8859_1_E8	KEY_LEFT_BRACE				// 232 è     e GRAVE
#define IT_ISO_8859_1_E9	KEY_LEFT_BRACE + SHIFT_MASK		// 233 é     e ACUTE
#define IT_ISO_8859_1_EA	0					// 234 ê     e CIRCUMFLEX
#define IT_ISO_8859_1_EB	0					// 235 ë     e DIAERESIS
#define IT_ISO_8859_1_EC	KEY_EQUAL				// 236 ì     i GRAVE
#define IT_ISO_8859_1_ED	0					// 237 í     i ACUTE
#define IT_ISO_8859_1_EE	0					// 238 î     i CIRCUMFLEX
#define IT_ISO_8859_1_EF	0					// 239 ï     i DIAERESIS
#define IT_ISO_8859_1_F0	0					// 240 ð     ETH
#define IT_ISO_8859_1_F1	0					// 241 ñ     n TILDE
#define IT_ISO_8859_1_F2	KEY_SEMICOLON				// 242 ò     o GRAVE
#define IT_ISO_8859_1_F3	0					// 243 ó     o ACUTE
#define IT_ISO_8859_1_F4	0					// 244 ô     o CIRCUMFLEX
#define IT_ISO_8859_1_F5	0					// 245 õ     o TILDE
#define IT_ISO_8859_1_F6	0					// 246 ö     o DIAERESIS
#define IT_ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define IT_ISO_8859_1_F8	0					// 248 ø     o STROKE
#define IT_ISO_8859_1_F9	KEY_BACKSLASH				// 249 ù     u GRAVE
#define IT_ISO_8859_1_FA	0					// 250 ú     u ACUTE
#define IT_ISO_8859_1_FB	0					// 251 û     u CIRCUMFLEX
#define IT_ISO_8859_1_FC	0					// 252 ü     u DIAERESIS
#define IT_ISO_8859_1_FD	0					// 253 ý     y ACUTE
#define IT_ISO_8859_1_FE	0					// 254 þ     THORN
#define IT_ISO_8859_1_FF	0					// 255 ÿ     y DIAERESIS



#define PTBR_ACUTE_ACCENT_BITS	0x0200
#define PTBR_GRAVE_ACCENT_BITS	0x0300
#define PTBR_TILDE_BITS		0x0400
#define PTBR_DIAERESIS_BITS		0x0500
#define PTBR_KEYCODE_TYPE		uint16_t
#define PTBR_DEADKEY_CIRCUMFLEX	KEY_QUOTE + SHIFT_MASK
#define PTBR_DEADKEY_ACUTE_ACCENT	KEY_LEFT_BRACE
#define PTBR_DEADKEY_GRAVE_ACCENT	KEY_LEFT_BRACE + SHIFT_MASK
#define PTBR_DEADKEY_TILDE		KEY_QUOTE
#define PTBR_DEADKEY_DIAERESIS	KEY_6 + SHIFT_MASK
#define KEY_NON_US_100		63

#define PTBR_ASCII_20	KEY_SPACE				// 32  
#define PTBR_ASCII_21	KEY_1 + SHIFT_MASK			// 33 !
#define PTBR_ASCII_22	KEY_TILDE + SHIFT_MASK			// 34 "
#define PTBR_ASCII_23	KEY_3 + ALTGR_MASK			// 35 #
#define PTBR_ASCII_24	KEY_4 + SHIFT_MASK			// 36 $
#define PTBR_ASCII_25	KEY_5 + SHIFT_MASK			// 37 %
#define PTBR_ASCII_26	KEY_7 + SHIFT_MASK			// 38 &
#define PTBR_ASCII_27	KEY_TILDE				// 39 '
#define PTBR_ASCII_28	KEY_9 + SHIFT_MASK			// 40 (
#define PTBR_ASCII_29	KEY_0 + SHIFT_MASK			// 41 )
#define PTBR_ASCII_2A	KEY_7 + SHIFT_MASK			// 42 *
#define PTBR_ASCII_2B	KEY_EQUAL + SHIFT_MASK			// 43 +
#define PTBR_ASCII_2C	KEY_COMMA				// 44 ,
#define PTBR_ASCII_2D	KEY_MINUS				// 45 -
#define PTBR_ASCII_2E	KEY_PERIOD				// 46 .
#define PTBR_ASCII_2F	KEY_Q + ALTGR_MASK			// 47 /
#define PTBR_ASCII_30	KEY_0					// 48 0
#define PTBR_ASCII_31	KEY_1					// 49 1
#define PTBR_ASCII_32	KEY_2					// 50 2
#define PTBR_ASCII_33	KEY_3					// 51 3
#define PTBR_ASCII_34	KEY_4					// 52 4
#define PTBR_ASCII_35	KEY_5					// 53 5
#define PTBR_ASCII_36	KEY_6					// 54 6
#define PTBR_ASCII_37	KEY_7					// 55 7
#define PTBR_ASCII_38	KEY_8					// 55 8
#define PTBR_ASCII_39	KEY_9					// 57 9
#define PTBR_ASCII_3A	KEY_SLASH + SHIFT_MASK			// 58 :
#define PTBR_ASCII_3B	KEY_SLASH				// 59 ;
#define PTBR_ASCII_3C	KEY_COMMA + SHIFT_MASK			// 60 <
#define PTBR_ASCII_3D	KEY_EQUAL				// 61 =
#define PTBR_ASCII_3E	KEY_PERIOD + SHIFT_MASK			// 62 >
#define PTBR_ASCII_3F	KEY_W + ALTGR_MASK			// 63 ?
#define PTBR_ASCII_40	KEY_2 + SHIFT_MASK			// 64 @
#define PTBR_ASCII_41	KEY_A + SHIFT_MASK			// 65 A
#define PTBR_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define PTBR_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define PTBR_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define PTBR_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define PTBR_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define PTBR_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define PTBR_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define PTBR_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define PTBR_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define PTBR_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define PTBR_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define PTBR_ASCII_4D	KEY_M + SHIFT_MASK			// 77 M
#define PTBR_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define PTBR_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define PTBR_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define PTBR_ASCII_51	KEY_Q + SHIFT_MASK			// 81 Q
#define PTBR_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define PTBR_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define PTBR_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define PTBR_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define PTBR_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define PTBR_ASCII_57	KEY_W + SHIFT_MASK			// 87 W
#define PTBR_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define PTBR_ASCII_59	KEY_Y + SHIFT_MASK			// 89 Y
#define PTBR_ASCII_5A	KEY_Z + SHIFT_MASK			// 90 Z
#define PTBR_ASCII_5B	KEY_RIGHT_BRACE				// 91 [
#define PTBR_ASCII_5C	KEY_NON_US_100				// 92
#define PTBR_ASCII_5D	KEY_BACKSLASH				// 93 ]
#define PTBR_ASCII_5E	CIRCUMFLEX_BITS + KEY_SPACE		// 94 ^
#define PTBR_ASCII_5F	KEY_MINUS + SHIFT_MASK			// 95 _
#define PTBR_ASCII_60	PTBR_GRAVE_ACCENT_BITS + KEY_SPACE		// 96 `
#define PTBR_ASCII_61	KEY_A					// 97 a
#define PTBR_ASCII_62	KEY_B					// 98 b
#define PTBR_ASCII_63	KEY_C					// 99 c
#define PTBR_ASCII_64	KEY_D					// 100 d
#define PTBR_ASCII_65	KEY_E					// 101 e
#define PTBR_ASCII_66	KEY_F					// 102 f
#define PTBR_ASCII_67	KEY_G					// 103 g
#define PTBR_ASCII_68	KEY_H					// 104 h
#define PTBR_ASCII_69	KEY_I					// 105 i
#define PTBR_ASCII_6A	KEY_J					// 106 j
#define PTBR_ASCII_6B	KEY_K					// 107 k
#define PTBR_ASCII_6C	KEY_L					// 108 l
#define PTBR_ASCII_6D	KEY_M					// 109 m
#define PTBR_ASCII_6E	KEY_N					// 110 n
#define PTBR_ASCII_6F	KEY_O					// 111 o
#define PTBR_ASCII_70	KEY_P					// 112 p
#define PTBR_ASCII_71	KEY_Q					// 113 q
#define PTBR_ASCII_72	KEY_R					// 114 r
#define PTBR_ASCII_73	KEY_S					// 115 s
#define PTBR_ASCII_74	KEY_T					// 116 t
#define PTBR_ASCII_75	KEY_U					// 117 u
#define PTBR_ASCII_76	KEY_V					// 118 v
#define PTBR_ASCII_77	KEY_W					// 119 w
#define PTBR_ASCII_78	KEY_X					// 120 x
#define PTBR_ASCII_79	KEY_Y					// 121 y
#define PTBR_ASCII_7A	KEY_Z					// 122 z
#define PTBR_ASCII_7B	KEY_RIGHT_BRACE + SHIFT_MASK		// 123 {
#define PTBR_ASCII_7C	KEY_NON_US_100 + SHIFT_MASK		// 124 |
#define PTBR_ASCII_7D	KEY_BACKSLASH + SHIFT_MASK		// 125 }
#define PTBR_ASCII_7E	PTBR_TILDE_BITS + KEY_SPACE			// 126 ~
#define PTBR_ASCII_7F	KEY_BACKSPACE				// 127

#define PTBR_ISO_8859_1_A0	KEY_SPACE				// 160       Nonbreakng Space
#define PTBR_ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define PTBR_ISO_8859_1_A2	KEY_5 + ALTGR_MASK			// 162 ¢     Cent SIGN
#define PTBR_ISO_8859_1_A3	KEY_4 + ALTGR_MASK			// 163 £     Pound Sign
#define PTBR_ISO_8859_1_A4	0					// 164 ¤     Currency Sign
#define PTBR_ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define PTBR_ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define PTBR_ISO_8859_1_A7	KEY_EQUAL + ALTGR_MASK			// 167 §     SECTION SIGN
#define PTBR_ISO_8859_1_A8	PTBR_DIAERESIS_BITS + KEY_SPACE		// 168 ¨     DIAERESIS
#define PTBR_ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define PTBR_ISO_8859_1_AA	KEY_RIGHT_BRACE + ALTGR_MASK		// 170 ª     FEMININE ORDINAL
#define PTBR_ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define PTBR_ISO_8859_1_AC	KEY_6 + ALTGR_MASK			// 172 ¬     NOT SIGN
#define PTBR_ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define PTBR_ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define PTBR_ISO_8859_1_AF	0					// 175 ¯     MACRON
#define PTBR_ISO_8859_1_B0	KEY_E + ALTGR_MASK			// 176 °     DEGREE SIGN
#define PTBR_ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define PTBR_ISO_8859_1_B2	KEY_2 + ALTGR_MASK			// 178 ²     SUPERSCRIPT TWO
#define PTBR_ISO_8859_1_B3	KEY_2 + ALTGR_MASK			// 179 ³     SUPERSCRIPT THREE
#define PTBR_ISO_8859_1_B4	PTBR_ACUTE_ACCENT_BITS + KEY_SPACE		// 180 ´     ACUTE ACCENT
#define PTBR_ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define PTBR_ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define PTBR_ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define PTBR_ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define PTBR_ISO_8859_1_B9	KEY_1 + ALTGR_MASK			// 185 ¹     SUPERSCRIPT ONE
#define PTBR_ISO_8859_1_BA	KEY_BACKSLASH + ALTGR_MASK		// 186 º     MASCULINE ORDINAL
#define PTBR_ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define PTBR_ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define PTBR_ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define PTBR_ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define PTBR_ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define PTBR_ISO_8859_1_C0	PTBR_GRAVE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define PTBR_ISO_8859_1_C1	PTBR_ACUTE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define PTBR_ISO_8859_1_C2	CIRCUMFLEX_BITS + KEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define PTBR_ISO_8859_1_C3	PTBR_TILDE_BITS + KEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define PTBR_ISO_8859_1_C4  PTBR_DIAERESIS_BITS + KEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define PTBR_ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define PTBR_ISO_8859_1_C6	0					// 198 Æ     AE
#define PTBR_ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define PTBR_ISO_8859_1_C8	PTBR_GRAVE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define PTBR_ISO_8859_1_C9	PTBR_ACUTE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define PTBR_ISO_8859_1_CA	CIRCUMFLEX_BITS + KEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define PTBR_ISO_8859_1_CB	PTBR_DIAERESIS_BITS + KEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define PTBR_ISO_8859_1_CC	PTBR_GRAVE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define PTBR_ISO_8859_1_CD	PTBR_ACUTE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define PTBR_ISO_8859_1_CE	CIRCUMFLEX_BITS + KEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define PTBR_ISO_8859_1_CF	PTBR_DIAERESIS_BITS + KEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define PTBR_ISO_8859_1_D0	0					// 208 Ð     ETH
#define PTBR_ISO_8859_1_D1	PTBR_TILDE_BITS + KEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define PTBR_ISO_8859_1_D2	PTBR_GRAVE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define PTBR_ISO_8859_1_D3	PTBR_ACUTE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define PTBR_ISO_8859_1_D4	CIRCUMFLEX_BITS + KEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define PTBR_ISO_8859_1_D5	PTBR_TILDE_BITS + KEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define PTBR_ISO_8859_1_D6	PTBR_DIAERESIS_BITS + KEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define PTBR_ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define PTBR_ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define PTBR_ISO_8859_1_D9	PTBR_GRAVE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define PTBR_ISO_8859_1_DA	PTBR_ACUTE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define PTBR_ISO_8859_1_DB	CIRCUMFLEX_BITS + KEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define PTBR_ISO_8859_1_DC	PTBR_DIAERESIS_BITS + KEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define PTBR_ISO_8859_1_DD	PTBR_ACUTE_ACCENT_BITS + KEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define PTBR_ISO_8859_1_DE	0					// 222 Þ     THORN
#define PTBR_ISO_8859_1_DF	0					// 223 ß     SHARP S
#define PTBR_ISO_8859_1_E0	PTBR_GRAVE_ACCENT_BITS + KEY_A		// 224 à     a GRAVE
#define PTBR_ISO_8859_1_E1	PTBR_ACUTE_ACCENT_BITS + KEY_A		// 225 á     a ACUTE
#define PTBR_ISO_8859_1_E2	CIRCUMFLEX_BITS + KEY_A			// 226 â     a CIRCUMFLEX
#define PTBR_ISO_8859_1_E3	PTBR_TILDE_BITS + KEY_A			// 227 ã     a TILDE
#define PTBR_ISO_8859_1_E4	PTBR_DIAERESIS_BITS + KEY_A			// 228 ä     a DIAERESIS
#define PTBR_ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define PTBR_ISO_8859_1_E6	0					// 230 æ     ae
#define PTBR_ISO_8859_1_E7	0					// 231 ç     c CEDILLA
#define PTBR_ISO_8859_1_E8	PTBR_GRAVE_ACCENT_BITS + KEY_E		// 232 è     e GRAVE
#define PTBR_ISO_8859_1_E9	PTBR_ACUTE_ACCENT_BITS + KEY_E		// 233 é     e ACUTE
#define PTBR_ISO_8859_1_EA	CIRCUMFLEX_BITS + KEY_E			// 234 ê     e CIRCUMFLEX
#define PTBR_ISO_8859_1_EB	PTBR_DIAERESIS_BITS + KEY_E			// 235 ë     e DIAERESIS
#define PTBR_ISO_8859_1_EC	PTBR_GRAVE_ACCENT_BITS + KEY_I		// 236 ì     i GRAVE
#define PTBR_ISO_8859_1_ED	PTBR_ACUTE_ACCENT_BITS + KEY_I		// 237 í     i ACUTE
#define PTBR_ISO_8859_1_EE	CIRCUMFLEX_BITS + KEY_I			// 238 î     i CIRCUMFLEX
#define PTBR_ISO_8859_1_EF	PTBR_DIAERESIS_BITS + KEY_I			// 239 ï     i DIAERESIS
#define PTBR_ISO_8859_1_F0	0					// 240 ð     ETH
#define PTBR_ISO_8859_1_F1	PTBR_TILDE_BITS + KEY_N			// 241 ñ     n TILDE
#define PTBR_ISO_8859_1_F2	PTBR_GRAVE_ACCENT_BITS + KEY_O		// 242 ò     o GRAVE
#define PTBR_ISO_8859_1_F3	PTBR_ACUTE_ACCENT_BITS + KEY_O		// 243 ó     o ACUTE
#define PTBR_ISO_8859_1_F4	CIRCUMFLEX_BITS + KEY_O			// 244 ô     o CIRCUMFLEX
#define PTBR_ISO_8859_1_F5	PTBR_TILDE_BITS + KEY_O			// 245 õ     o TILDE
#define PTBR_ISO_8859_1_F6	PTBR_DIAERESIS_BITS + KEY_O			// 246 ö     o DIAERESIS
#define PTBR_ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define PTBR_ISO_8859_1_F8	0					// 248 ø     o STROKE
#define PTBR_ISO_8859_1_F9	PTBR_GRAVE_ACCENT_BITS + KEY_U		// 249 ù     u GRAVE
#define PTBR_ISO_8859_1_FA	PTBR_ACUTE_ACCENT_BITS + KEY_U		// 250 ú     u ACUTE
#define PTBR_ISO_8859_1_FB	CIRCUMFLEX_BITS + KEY_U			// 251 û     u CIRCUMFLEX
#define PTBR_ISO_8859_1_FC	PTBR_DIAERESIS_BITS + KEY_U			// 252 ü     u DIAERESIS
#define PTBR_ISO_8859_1_FD	PTBR_ACUTE_ACCENT_BITS + KEY_Y		// 253 ý     y ACUTE
#define PTBR_ISO_8859_1_FE	0					// 254 þ     THORN
#define PTBR_ISO_8859_1_FF	PTBR_DIAERESIS_BITS + KEY_Y			// 255 ÿ     y DIAERESIS


#define FRBG_GRAVE_ACCENT_BITS	0x0200
#define FRBG_DIAERESIS_BITS		0x0300
#define FRBG_TILDE_BITS		0x0400
#define FRBG_ACUTE_ACCENT_BITS	0x0500
#define FRBG_KEYCODE_TYPE		uint16_t
#define FRBG_DEADKEY_CIRCUMFLEX	KEY_LEFT_BRACE
#define FRBG_DEADKEY_ACUTE_ACCENT	KEY_QUOTE + ALTGR_MASK
#define FRBG_DEADKEY_GRAVE_ACCENT	KEY_BACKSLASH + ALTGR_MASK
#define FRBG_DEADKEY_DIAERESIS	KEY_LEFT_BRACE + SHIFT_MASK
#define FRBG_DEADKEY_TILDE		KEY_SLASH + ALTGR_MASK
#define KEY_NON_US_100		63

#define FRBG_ASCII_20	KEY_SPACE				// 32  
#define FRBG_ASCII_21	KEY_8					// 33 !
#define FRBG_ASCII_22	KEY_3					// 34 "
#define FRBG_ASCII_23	KEY_3 + ALTGR_MASK			// 35 #
#define FRBG_ASCII_24	KEY_RIGHT_BRACE				// 36 $
#define FRBG_ASCII_25	KEY_QUOTE + SHIFT_MASK			// 37 %
#define FRBG_ASCII_26	KEY_1					// 38 &
#define FRBG_ASCII_27	KEY_4					// 39 '
#define FRBG_ASCII_28	KEY_5					// 40 (
#define FRBG_ASCII_29	KEY_MINUS				// 41 )
#define FRBG_ASCII_2A	KEY_RIGHT_BRACE + SHIFT_MASK		// 42 *
#define FRBG_ASCII_2B	KEY_SLASH + SHIFT_MASK			// 43 +
#define FRBG_ASCII_2C	KEY_M					// 44 ,
#define FRBG_ASCII_2D	KEY_EQUAL				// 45 -
#define FRBG_ASCII_2E	KEY_COMMA + SHIFT_MASK			// 46 .
#define FRBG_ASCII_2F	KEY_PERIOD + SHIFT_MASK			// 47 /
#define FRBG_ASCII_30	KEY_0 + SHIFT_MASK			// 48 0
#define FRBG_ASCII_31	KEY_1 + SHIFT_MASK			// 49 1
#define FRBG_ASCII_32	KEY_2 + SHIFT_MASK			// 50 2
#define FRBG_ASCII_33	KEY_3 + SHIFT_MASK			// 51 3
#define FRBG_ASCII_34	KEY_4 + SHIFT_MASK			// 52 4
#define FRBG_ASCII_35	KEY_5 + SHIFT_MASK			// 53 5
#define FRBG_ASCII_36	KEY_6 + SHIFT_MASK			// 54 6
#define FRBG_ASCII_37	KEY_7 + SHIFT_MASK			// 55 7
#define FRBG_ASCII_38	KEY_8 + SHIFT_MASK			// 55 8
#define FRBG_ASCII_39	KEY_9 + SHIFT_MASK			// 57 9
#define FRBG_ASCII_3A	KEY_PERIOD				// 58 :
#define FRBG_ASCII_3B	KEY_COMMA				// 59 ;
#define FRBG_ASCII_3C	KEY_NON_US_100				// 60 <
#define FRBG_ASCII_3D	KEY_SLASH				// 61 =
#define FRBG_ASCII_3E	KEY_NON_US_100 + SHIFT_MASK		// 62 >
#define FRBG_ASCII_3F	KEY_M + SHIFT_MASK			// 63 ?
#define FRBG_ASCII_40	KEY_2 + ALTGR_MASK			// 64 @
#define FRBG_ASCII_41	KEY_Q + SHIFT_MASK			// 65 A
#define FRBG_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define FRBG_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define FRBG_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define FRBG_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define FRBG_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define FRBG_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define FRBG_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define FRBG_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define FRBG_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define FRBG_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define FRBG_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define FRBG_ASCII_4D	KEY_SEMICOLON + SHIFT_MASK		// 77 M
#define FRBG_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define FRBG_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define FRBG_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define FRBG_ASCII_51	KEY_A + SHIFT_MASK			// 81 Q
#define FRBG_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define FRBG_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define FRBG_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define FRBG_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define FRBG_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define FRBG_ASCII_57	KEY_Z + SHIFT_MASK			// 87 W
#define FRBG_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define FRBG_ASCII_59	KEY_Y + SHIFT_MASK			// 89 Y
#define FRBG_ASCII_5A	KEY_W + SHIFT_MASK			// 90 Z
#define FRBG_ASCII_5B	KEY_RIGHT_BRACE + ALTGR_MASK		// 91 [
#define FRBG_ASCII_5C	KEY_NON_US_100 + ALTGR_MASK		// 92
#define FRBG_ASCII_5D	KEY_LEFT_BRACE + ALTGR_MASK		// 93 ]
#define FRBG_ASCII_5E	KEY_6 + ALTGR_MASK			// 94 ^
#define FRBG_ASCII_5F	KEY_EQUAL + SHIFT_MASK			// 95 _
#define FRBG_ASCII_60	FRBG_GRAVE_ACCENT_BITS + KEY_SPACE		// 96 `
#define FRBG_ASCII_61	KEY_Q					// 97 a
#define FRBG_ASCII_62	KEY_B					// 98 b
#define FRBG_ASCII_63	KEY_C					// 99 c
#define FRBG_ASCII_64	KEY_D					// 100 d
#define FRBG_ASCII_65	KEY_E					// 101 e
#define FRBG_ASCII_66	KEY_F					// 102 f
#define FRBG_ASCII_67	KEY_G					// 103 g
#define FRBG_ASCII_68	KEY_H					// 104 h
#define FRBG_ASCII_69	KEY_I					// 105 i
#define FRBG_ASCII_6A	KEY_J					// 106 j
#define FRBG_ASCII_6B	KEY_K					// 107 k
#define FRBG_ASCII_6C	KEY_L					// 108 l
#define FRBG_ASCII_6D	KEY_SEMICOLON				// 109 m
#define FRBG_ASCII_6E	KEY_N					// 110 n
#define FRBG_ASCII_6F	KEY_O					// 111 o
#define FRBG_ASCII_70	KEY_P					// 112 p
#define FRBG_ASCII_71	KEY_A					// 113 q
#define FRBG_ASCII_72	KEY_R					// 114 r
#define FRBG_ASCII_73	KEY_S					// 115 s
#define FRBG_ASCII_74	KEY_T					// 116 t
#define FRBG_ASCII_75	KEY_U					// 117 u
#define FRBG_ASCII_76	KEY_V					// 118 v
#define FRBG_ASCII_77	KEY_Z					// 119 w
#define FRBG_ASCII_78	KEY_X					// 120 x
#define FRBG_ASCII_79	KEY_Y					// 121 y
#define FRBG_ASCII_7A	KEY_W					// 122 z
#define FRBG_ASCII_7B	KEY_9 + ALTGR_MASK			// 123 {
#define FRBG_ASCII_7C	KEY_1 + ALTGR_MASK			// 124 |
#define FRBG_ASCII_7D	KEY_0 + ALTGR_MASK			// 125 }
#define FRBG_ASCII_7E	FRBG_TILDE_BITS + KEY_SPACE			// 126 ~
#define FRBG_ASCII_7F	KEY_BACKSPACE				// 127
#define FRBG_ISO_8859_1_A0	KEY_SPACE				// 160       Nonbreakng Space
#define FRBG_ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define FRBG_ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define FRBG_ISO_8859_1_A3	KEY_BACKSLASH + SHIFT_MASK		// 163 £     Pound Sign
#define FRBG_ISO_8859_1_A4	0					// 164 ¤     Currency or Euro Sign
#define FRBG_ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define FRBG_ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define FRBG_ISO_8859_1_A7	KEY_6					// 167 §     SECTION SIGN
#define FRBG_ISO_8859_1_A8	FRBG_DIAERESIS_BITS + KEY_SPACE		// 168 ¨     DIAERESIS
#define FRBG_ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define FRBG_ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define FRBG_ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define FRBG_ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define FRBG_ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define FRBG_ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define FRBG_ISO_8859_1_AF	0					// 175 ¯     MACRON
#define FRBG_ISO_8859_1_B0	KEY_MINUS + SHIFT_MASK			// 176 °     DEGREE SIGN
#define FRBG_ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define FRBG_ISO_8859_1_B2	KEY_TILDE				// 178 ²     SUPERSCRIPT TWO
#define FRBG_ISO_8859_1_B3	KEY_TILDE + SHIFT_MASK			// 179 ³     SUPERSCRIPT THREE
#define FRBG_ISO_8859_1_B4	FRBG_ACUTE_ACCENT_BITS + KEY_SPACE		// 180 ´     ACUTE ACCENT
#define FRBG_ISO_8859_1_B5	KEY_BACKSLASH				// 181 µ     MICRO SIGN
#define FRBG_ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define FRBG_ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define FRBG_ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define FRBG_ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define FRBG_ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define FRBG_ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define FRBG_ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define FRBG_ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define FRBG_ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define FRBG_ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define FRBG_ISO_8859_1_C0	FRBG_GRAVE_ACCENT_BITS + KEY_Q + SHIFT_MASK	// 192 À     A GRAVE
#define FRBG_ISO_8859_1_C1	FRBG_ACUTE_ACCENT_BITS + KEY_Q + SHIFT_MASK	// 193 Á     A ACUTE
#define FRBG_ISO_8859_1_C2	CIRCUMFLEX_BITS	+ KEY_Q + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define FRBG_ISO_8859_1_C3	FRBG_TILDE_BITS + KEY_Q + SHIFT_MASK		// 195 Ã     A TILDE
#define FRBG_ISO_8859_1_C4	FRBG_DIAERESIS_BITS + KEY_Q + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define FRBG_ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define FRBG_ISO_8859_1_C6	0					// 198 Æ     AE
#define FRBG_ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define FRBG_ISO_8859_1_C8	FRBG_GRAVE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define FRBG_ISO_8859_1_C9	FRBG_ACUTE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define FRBG_ISO_8859_1_CA	CIRCUMFLEX_BITS + KEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define FRBG_ISO_8859_1_CB	FRBG_DIAERESIS_BITS + KEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define FRBG_ISO_8859_1_CC	FRBG_GRAVE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define FRBG_ISO_8859_1_CD	FRBG_ACUTE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define FRBG_ISO_8859_1_CE	CIRCUMFLEX_BITS + KEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define FRBG_ISO_8859_1_CF	FRBG_DIAERESIS_BITS + KEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define FRBG_ISO_8859_1_D0	0					// 208 Ð     ETH
#define FRBG_ISO_8859_1_D1	FRBG_TILDE_BITS + KEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define FRBG_ISO_8859_1_D2	FRBG_GRAVE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define FRBG_ISO_8859_1_D3	FRBG_ACUTE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define FRBG_ISO_8859_1_D4	CIRCUMFLEX_BITS + KEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define FRBG_ISO_8859_1_D5	FRBG_TILDE_BITS + KEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define FRBG_ISO_8859_1_D6	FRBG_DIAERESIS_BITS + KEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define FRBG_ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define FRBG_ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define FRBG_ISO_8859_1_D9	FRBG_GRAVE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define FRBG_ISO_8859_1_DA	FRBG_ACUTE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define FRBG_ISO_8859_1_DB	CIRCUMFLEX_BITS + KEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define FRBG_ISO_8859_1_DC	FRBG_DIAERESIS_BITS + KEY_U			// 220 Ü     U DIAERESIS
#define FRBG_ISO_8859_1_DD	FRBG_ACUTE_ACCENT_BITS + KEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define FRBG_ISO_8859_1_DE	0					// 222 Þ     THORN
#define FRBG_ISO_8859_1_DF	0					// 223 ß     SHARP S
#define FRBG_ISO_8859_1_E0	KEY_0					// 224 à     a GRAVE
#define FRBG_ISO_8859_1_E1	FRBG_ACUTE_ACCENT_BITS + KEY_Q		// 225 á     a ACUTE
#define FRBG_ISO_8859_1_E2	CIRCUMFLEX_BITS + KEY_Q			// 226 â     a CIRCUMFLEX
#define FRBG_ISO_8859_1_E3	FRBG_TILDE_BITS + KEY_Q			// 227 ã     a TILDE
#define FRBG_ISO_8859_1_E4	FRBG_DIAERESIS_BITS + KEY_Q			// 228 ä     a DIAERESIS
#define FRBG_ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define FRBG_ISO_8859_1_E6	0					// 230 æ     ae
#define FRBG_ISO_8859_1_E7	KEY_9					// 231 ç     c CEDILLA
#define FRBG_ISO_8859_1_E8	KEY_7					// 232 è     e GRAVE
#define FRBG_ISO_8859_1_E9	KEY_2					// 233 é     e ACUTE
#define FRBG_ISO_8859_1_EA	CIRCUMFLEX_BITS + KEY_E			// 234 ê     e CIRCUMFLEX
#define FRBG_ISO_8859_1_EB	FRBG_DIAERESIS_BITS + KEY_E			// 235 ë     e DIAERESIS
#define FRBG_ISO_8859_1_EC	FRBG_GRAVE_ACCENT_BITS + KEY_I		// 236 ì     i GRAVE
#define FRBG_ISO_8859_1_ED	FRBG_ACUTE_ACCENT_BITS + KEY_I		// 237 í     i ACUTE
#define FRBG_ISO_8859_1_EE	CIRCUMFLEX_BITS + KEY_I			// 238 î     i CIRCUMFLEX
#define FRBG_ISO_8859_1_EF	FRBG_DIAERESIS_BITS + KEY_I			// 239 ï     i DIAERESIS
#define FRBG_ISO_8859_1_F0	0					// 240 ð     ETH
#define FRBG_ISO_8859_1_F1	FRBG_TILDE_BITS + KEY_N			// 241 ñ     n TILDE
#define FRBG_ISO_8859_1_F2	FRBG_GRAVE_ACCENT_BITS + KEY_O		// 242 ò     o GRAVE
#define FRBG_ISO_8859_1_F3	FRBG_ACUTE_ACCENT_BITS + KEY_O		// 243 ó     o ACUTE
#define FRBG_ISO_8859_1_F4	CIRCUMFLEX_BITS + KEY_O			// 244 ô     o CIRCUMFLEX
#define FRBG_ISO_8859_1_F5	FRBG_TILDE_BITS + KEY_O			// 245 õ     o TILDE
#define FRBG_ISO_8859_1_F6	FRBG_DIAERESIS_BITS + KEY_O			// 246 ö     o DIAERESIS
#define FRBG_ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define FRBG_ISO_8859_1_F8	0					// 248 ø     o STROKE
#define FRBG_ISO_8859_1_F9	KEY_QUOTE				// 249 ù     u GRAVE - TODO; check FRENCH
#define FRBG_ISO_8859_1_FA	FRBG_ACUTE_ACCENT_BITS + KEY_U		// 250 ú     u ACUTE
#define FRBG_ISO_8859_1_FB	CIRCUMFLEX_BITS + KEY_U			// 251 û     u CIRCUMFLEX
#define FRBG_ISO_8859_1_FC	FRBG_DIAERESIS_BITS + KEY_U			// 252 ü     u DIAERESIS
#define FRBG_ISO_8859_1_FD	FRBG_ACUTE_ACCENT_BITS + KEY_Y		// 253 ý     y ACUTE
#define FRBG_ISO_8859_1_FE	0					// 254 þ     THORN
#define FRBG_ISO_8859_1_FF	FRBG_DIAERESIS_BITS + KEY_Y			// 255 ÿ     y DIAERESIS
#define FRBG_UNICODE_20AC	KEY_E + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define FRBG_UNICODE_EXTRA00	0x20AC
#define FRBG_KEYCODE_EXTRA00	KEY_E + ALTGR_MASK			// 20AC €    Euro Sign


#define DESW_GRAVE_ACCENT_BITS	0x0200
#define DESW_DIAERESIS_BITS		0x0300
#define DESW_TILDE_BITS		0x0400
#define DESW_ACUTE_ACCENT_BITS	0x0500
#define DESW_KEYCODE_TYPE		uint16_t
#define DESW_DEADKEY_CIRCUMFLEX	KEY_EQUAL
#define DESW_DEADKEY_ACUTE_ACCENT	KEY_MINUS + ALTGR_MASK
#define DESW_DEADKEY_GRAVE_ACCENT	KEY_EQUAL + SHIFT_MASK
#define DESW_DEADKEY_DIAERESIS	KEY_RIGHT_BRACE
#define DESW_DEADKEY_TILDE		KEY_EQUAL + ALTGR_MASK
#define KEY_NON_US_100		63

#define DESW_ASCII_20	KEY_SPACE				// 32  
#define DESW_ASCII_21	KEY_RIGHT_BRACE + SHIFT_MASK		// 33 !
#define DESW_ASCII_22	KEY_2 + SHIFT_MASK			// 34 "
#define DESW_ASCII_23	KEY_3 + ALTGR_MASK			// 35 #
#define DESW_ASCII_24	KEY_BACKSLASH				// 36 $
#define DESW_ASCII_25	KEY_5 + SHIFT_MASK			// 37 %
#define DESW_ASCII_26	KEY_6 + SHIFT_MASK			// 38 &
#define DESW_ASCII_27	KEY_MINUS				// 39 '
#define DESW_ASCII_28	KEY_8 + SHIFT_MASK			// 40 (
#define DESW_ASCII_29	KEY_9 + SHIFT_MASK			// 41 )
#define DESW_ASCII_2A	KEY_3 + SHIFT_MASK			// 42 *
#define DESW_ASCII_2B	KEY_1 + SHIFT_MASK			// 43 +
#define DESW_ASCII_2C	KEY_COMMA				// 44 ,
#define DESW_ASCII_2D	KEY_SLASH				// 45 -
#define DESW_ASCII_2E	KEY_PERIOD				// 46 .
#define DESW_ASCII_2F	KEY_7 + SHIFT_MASK			// 47 /
#define DESW_ASCII_30	KEY_0					// 48 0
#define DESW_ASCII_31	KEY_1					// 49 1
#define DESW_ASCII_32	KEY_2					// 50 2
#define DESW_ASCII_33	KEY_3					// 51 3
#define DESW_ASCII_34	KEY_4					// 52 4
#define DESW_ASCII_35	KEY_5					// 53 5
#define DESW_ASCII_36	KEY_6					// 54 6
#define DESW_ASCII_37	KEY_7					// 55 7
#define DESW_ASCII_38	KEY_8					// 55 8
#define DESW_ASCII_39	KEY_9					// 57 9
#define DESW_ASCII_3A	KEY_PERIOD + SHIFT_MASK			// 58 :
#define DESW_ASCII_3B	KEY_COMMA + SHIFT_MASK			// 59 ;
#define DESW_ASCII_3C	KEY_NON_US_100				// 60 <
#define DESW_ASCII_3D	KEY_0 + SHIFT_MASK			// 61 =
#define DESW_ASCII_3E	KEY_NON_US_100 + SHIFT_MASK		// 62 >
#define DESW_ASCII_3F	KEY_MINUS + SHIFT_MASK			// 63 ?
#define DESW_ASCII_40	KEY_2 + ALTGR_MASK			// 64 @
#define DESW_ASCII_41	KEY_A + SHIFT_MASK			// 65 A
#define DESW_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define DESW_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define DESW_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define DESW_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define DESW_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define DESW_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define DESW_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define DESW_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define DESW_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define DESW_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define DESW_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define DESW_ASCII_4D	KEY_M + SHIFT_MASK			// 77 M
#define DESW_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define DESW_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define DESW_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define DESW_ASCII_51	KEY_Q + SHIFT_MASK			// 81 Q
#define DESW_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define DESW_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define DESW_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define DESW_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define DESW_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define DESW_ASCII_57	KEY_W + SHIFT_MASK			// 87 W
#define DESW_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define DESW_ASCII_59	KEY_Z + SHIFT_MASK			// 89 Y
#define DESW_ASCII_5A	KEY_Y + SHIFT_MASK			// 90 Z
#define DESW_ASCII_5B	KEY_LEFT_BRACE + ALTGR_MASK		// 91 [
#define DESW_ASCII_5C	KEY_NON_US_100 + ALTGR_MASK		// 92
#define DESW_ASCII_5D	KEY_RIGHT_BRACE + ALTGR_MASK		// 93 ]
#define DESW_ASCII_5E	CIRCUMFLEX_BITS + KEY_SPACE		// 94 ^
#define DESW_ASCII_5F	KEY_SLASH + SHIFT_MASK			// 95 _
#define DESW_ASCII_60	DESW_GRAVE_ACCENT_BITS + KEY_SPACE		// 96 `
#define DESW_ASCII_61	KEY_A					// 97 a
#define DESW_ASCII_62	KEY_B					// 98 b
#define DESW_ASCII_63	KEY_C					// 99 c
#define DESW_ASCII_64	KEY_D					// 100 d
#define DESW_ASCII_65	KEY_E					// 101 e
#define DESW_ASCII_66	KEY_F					// 102 f
#define DESW_ASCII_67	KEY_G					// 103 g
#define DESW_ASCII_68	KEY_H					// 104 h
#define DESW_ASCII_69	KEY_I					// 105 i
#define DESW_ASCII_6A	KEY_J					// 106 j
#define DESW_ASCII_6B	KEY_K					// 107 k
#define DESW_ASCII_6C	KEY_L					// 108 l
#define DESW_ASCII_6D	KEY_M					// 109 m
#define DESW_ASCII_6E	KEY_N					// 110 n
#define DESW_ASCII_6F	KEY_O					// 111 o
#define DESW_ASCII_70	KEY_P					// 112 p
#define DESW_ASCII_71	KEY_Q					// 113 q
#define DESW_ASCII_72	KEY_R					// 114 r
#define DESW_ASCII_73	KEY_S					// 115 s
#define DESW_ASCII_74	KEY_T					// 116 t
#define DESW_ASCII_75	KEY_U					// 117 u
#define DESW_ASCII_76	KEY_V					// 118 v
#define DESW_ASCII_77	KEY_W					// 119 w
#define DESW_ASCII_78	KEY_X					// 120 x
#define DESW_ASCII_79	KEY_Z					// 121 y
#define DESW_ASCII_7A	KEY_Y					// 122 z
#define DESW_ASCII_7B	KEY_QUOTE + ALTGR_MASK			// 123 {
#define DESW_ASCII_7C	KEY_7 + ALTGR_MASK			// 124 |
#define DESW_ASCII_7D	KEY_BACKSLASH + ALTGR_MASK		// 125 }
#define DESW_ASCII_7E	DESW_TILDE_BITS + KEY_SPACE			// 126 ~
#define DESW_ASCII_7F	KEY_BACKSPACE				// 127
#define DESW_ISO_8859_1_A0	KEY_SPACE				// 160       Nonbreakng Space
#define DESW_ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define DESW_ISO_8859_1_A2	KEY_8 + ALTGR_MASK			// 162 ¢     Cent Sign
#define DESW_ISO_8859_1_A3	KEY_BACKSLASH + SHIFT_MASK		// 163 £     Pound Sign
#define DESW_ISO_8859_1_A4	0					// 164 ¤     Currency Sign
#define DESW_ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define DESW_ISO_8859_1_A6	KEY_1 + ALTGR_MASK			// 166 ¦     BROKEN BAR
#define DESW_ISO_8859_1_A7	KEY_5 + ALTGR_MASK			// 167 §     SECTION SIGN
#define DESW_ISO_8859_1_A8	DESW_DIAERESIS_BITS + KEY_SPACE		// 168 ¨     DIAERESIS
#define DESW_ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define DESW_ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define DESW_ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define DESW_ISO_8859_1_AC	KEY_6 + ALTGR_MASK			// 172 ¬     NOT SIGN
#define DESW_ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define DESW_ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define DESW_ISO_8859_1_AF	0					// 175 ¯     MACRON
#define DESW_ISO_8859_1_B0	KEY_4 + ALTGR_MASK			// 176 °     DEGREE SIGN
#define DESW_ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define DESW_ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define DESW_ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define DESW_ISO_8859_1_B4	DESW_ACUTE_ACCENT_BITS + KEY_SPACE		// 180 ´     ACUTE ACCENT
#define DESW_ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define DESW_ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define DESW_ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define DESW_ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define DESW_ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define DESW_ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define DESW_ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define DESW_ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define DESW_ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define DESW_ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define DESW_ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define DESW_ISO_8859_1_C0	DESW_GRAVE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define DESW_ISO_8859_1_C1	DESW_ACUTE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define DESW_ISO_8859_1_C2	CIRCUMFLEX_BITS	+ KEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define DESW_ISO_8859_1_C3	DESW_TILDE_BITS + KEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define DESW_ISO_8859_1_C4	DESW_DIAERESIS_BITS + KEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define DESW_ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define DESW_ISO_8859_1_C6	0					// 198 Æ     AE
#define DESW_ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define DESW_ISO_8859_1_C8	DESW_GRAVE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define DESW_ISO_8859_1_C9	DESW_ACUTE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define DESW_ISO_8859_1_CA	CIRCUMFLEX_BITS + KEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define DESW_ISO_8859_1_CB	DESW_DIAERESIS_BITS + KEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define DESW_ISO_8859_1_CC	DESW_GRAVE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define DESW_ISO_8859_1_CD	DESW_ACUTE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define DESW_ISO_8859_1_CE	CIRCUMFLEX_BITS + KEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define DESW_ISO_8859_1_CF	DESW_DIAERESIS_BITS + KEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define DESW_ISO_8859_1_D0	0					// 208 Ð     ETH
#define DESW_ISO_8859_1_D1	DESW_TILDE_BITS + KEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define DESW_ISO_8859_1_D2	DESW_GRAVE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define DESW_ISO_8859_1_D3	DESW_ACUTE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define DESW_ISO_8859_1_D4	CIRCUMFLEX_BITS + KEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define DESW_ISO_8859_1_D5	DESW_TILDE_BITS + KEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define DESW_ISO_8859_1_D6	DESW_DIAERESIS_BITS + KEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define DESW_ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define DESW_ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define DESW_ISO_8859_1_D9	DESW_GRAVE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define DESW_ISO_8859_1_DA	DESW_ACUTE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define DESW_ISO_8859_1_DB	CIRCUMFLEX_BITS + KEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define DESW_ISO_8859_1_DC	DESW_DIAERESIS_BITS + KEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define DESW_ISO_8859_1_DD	DESW_ACUTE_ACCENT_BITS + KEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define DESW_ISO_8859_1_DE	0					// 222 Þ     THORN
#define DESW_ISO_8859_1_DF	0					// 223 ß     SHARP S
#define DESW_ISO_8859_1_E0	KEY_QUOTE + SHIFT_MASK			// 224 à     a GRAVE
#define DESW_ISO_8859_1_E1	DESW_ACUTE_ACCENT_BITS + KEY_A		// 225 á     a ACUTE
#define DESW_ISO_8859_1_E2	CIRCUMFLEX_BITS + KEY_A			// 226 â     a CIRCUMFLEX
#define DESW_ISO_8859_1_E3	DESW_TILDE_BITS + KEY_A			// 227 ã     a TILDE
#define DESW_ISO_8859_1_E4	KEY_QUOTE				// 228 ä     a DIAERESIS
#define DESW_ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define DESW_ISO_8859_1_E6	0					// 230 æ     ae
#define DESW_ISO_8859_1_E7	KEY_4 + SHIFT_MASK			// 231 ç     c CEDILLA
#define DESW_ISO_8859_1_E8	KEY_LEFT_BRACE + SHIFT_MASK		// 232 è     e GRAVE
#define DESW_ISO_8859_1_E9	KEY_SEMICOLON + SHIFT_MASK		// 233 é     e ACUTE
#define DESW_ISO_8859_1_EA	CIRCUMFLEX_BITS + KEY_E			// 234 ê     e CIRCUMFLEX
#define DESW_ISO_8859_1_EB	DESW_DIAERESIS_BITS + KEY_E			// 235 ë     e DIAERESIS  TODO: check this
#define DESW_ISO_8859_1_EC	DESW_GRAVE_ACCENT_BITS + KEY_I		// 236 ì     i GRAVE
#define DESW_ISO_8859_1_ED	DESW_ACUTE_ACCENT_BITS + KEY_I		// 237 í     i ACUTE
#define DESW_ISO_8859_1_EE	CIRCUMFLEX_BITS + KEY_I			// 238 î     i CIRCUMFLEX
#define DESW_ISO_8859_1_EF	DESW_DIAERESIS_BITS + KEY_I			// 239 ï     i DIAERESIS
#define DESW_ISO_8859_1_F0	0					// 240 ð     ETH
#define DESW_ISO_8859_1_F1	DESW_TILDE_BITS + KEY_N			// 241 ñ     n TILDE
#define DESW_ISO_8859_1_F2	DESW_GRAVE_ACCENT_BITS + KEY_O		// 242 ò     o GRAVE
#define DESW_ISO_8859_1_F3	DESW_ACUTE_ACCENT_BITS + KEY_O		// 243 ó     o ACUTE
#define DESW_ISO_8859_1_F4	CIRCUMFLEX_BITS + KEY_O			// 244 ô     o CIRCUMFLEX
#define DESW_ISO_8859_1_F5	DESW_TILDE_BITS + KEY_O			// 245 õ     o TILDE
#define DESW_ISO_8859_1_F6	KEY_SEMICOLON				// 246 ö     o DIAERESIS
#define DESW_ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define DESW_ISO_8859_1_F8	0					// 248 ø     o STROKE
#define DESW_ISO_8859_1_F9	DESW_GRAVE_ACCENT_BITS + KEY_U		// 249 ù     u GRAVE
#define DESW_ISO_8859_1_FA	DESW_ACUTE_ACCENT_BITS + KEY_U		// 250 ú     u ACUTE
#define DESW_ISO_8859_1_FB	CIRCUMFLEX_BITS + KEY_U			// 251 û     u CIRCUMFLEX
#define DESW_ISO_8859_1_FC	KEY_LEFT_BRACE				// 252 ü     u DIAERESIS
#define DESW_ISO_8859_1_FD	DESW_ACUTE_ACCENT_BITS + KEY_Y		// 253 ý     y ACUTE
#define DESW_ISO_8859_1_FE	0					// 254 þ     THORN
#define DESW_ISO_8859_1_FF	DESW_DIAERESIS_BITS + KEY_Y			// 255 ÿ     y DIAERESIS
#define DESW_UNICODE_20AC	KEY_E + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define DESW_UNICODE_EXTRA00	0x20AC
#define DESW_KEYCODE_EXTRA00	KEY_E + ALTGR_MASK			// 20AC €    Euro Sign



#define FRSW_GRAVE_ACCENT_BITS	0x0200
#define FRSW_DIAERESIS_BITS		0x0300
#define FRSW_TILDE_BITS		0x0400
#define FRSW_ACUTE_ACCENT_BITS	0x0500
#define FRSW_KEYCODE_TYPE		uint16_t
#define FRSW_DEADKEY_CIRCUMFLEX	KEY_EQUAL
#define FRSW_DEADKEY_ACUTE_ACCENT	KEY_MINUS + ALTGR_MASK
#define FRSW_DEADKEY_GRAVE_ACCENT	KEY_EQUAL + SHIFT_MASK
#define FRSW_DEADKEY_DIAERESIS	KEY_RIGHT_BRACE
#define FRSW_DEADKEY_TILDE		KEY_EQUAL + ALTGR_MASK
#define KEY_NON_US_100		63

#define FRSW_ASCII_20	KEY_SPACE				// 32  
#define FRSW_ASCII_21	KEY_RIGHT_BRACE + SHIFT_MASK		// 33 !
#define FRSW_ASCII_22	KEY_2 + SHIFT_MASK			// 34 "
#define FRSW_ASCII_23	KEY_3 + ALTGR_MASK			// 35 #
#define FRSW_ASCII_24	KEY_BACKSLASH				// 36 $
#define FRSW_ASCII_25	KEY_5 + SHIFT_MASK			// 37 %
#define FRSW_ASCII_26	KEY_6 + SHIFT_MASK			// 38 &
#define FRSW_ASCII_27	KEY_MINUS				// 39 '
#define FRSW_ASCII_28	KEY_8 + SHIFT_MASK			// 40 (
#define FRSW_ASCII_29	KEY_9 + SHIFT_MASK			// 41 )
#define FRSW_ASCII_2A	KEY_3 + SHIFT_MASK			// 42 *
#define FRSW_ASCII_2B	KEY_1 + SHIFT_MASK			// 43 +
#define FRSW_ASCII_2C	KEY_COMMA				// 44 ,
#define FRSW_ASCII_2D	KEY_SLASH				// 45 -
#define FRSW_ASCII_2E	KEY_PERIOD				// 46 .
#define FRSW_ASCII_2F	KEY_7 + SHIFT_MASK			// 47 /
#define FRSW_ASCII_30	KEY_0					// 48 0
#define FRSW_ASCII_31	KEY_1					// 49 1
#define FRSW_ASCII_32	KEY_2					// 50 2
#define FRSW_ASCII_33	KEY_3					// 51 3
#define FRSW_ASCII_34	KEY_4					// 52 4
#define FRSW_ASCII_35	KEY_5					// 53 5
#define FRSW_ASCII_36	KEY_6					// 54 6
#define FRSW_ASCII_37	KEY_7					// 55 7
#define FRSW_ASCII_38	KEY_8					// 55 8
#define FRSW_ASCII_39	KEY_9					// 57 9
#define FRSW_ASCII_3A	KEY_PERIOD + SHIFT_MASK			// 58 :
#define FRSW_ASCII_3B	KEY_COMMA + SHIFT_MASK			// 59 ;
#define FRSW_ASCII_3C	KEY_NON_US_100				// 60 <
#define FRSW_ASCII_3D	KEY_0 + SHIFT_MASK			// 61 =
#define FRSW_ASCII_3E	KEY_NON_US_100 + SHIFT_MASK		// 62 >
#define FRSW_ASCII_3F	KEY_MINUS + SHIFT_MASK			// 63 ?
#define FRSW_ASCII_40	KEY_2 + ALTGR_MASK			// 64 @
#define FRSW_ASCII_41	KEY_A + SHIFT_MASK			// 65 A
#define FRSW_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define FRSW_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define FRSW_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define FRSW_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define FRSW_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define FRSW_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define FRSW_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define FRSW_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define FRSW_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define FRSW_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define FRSW_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define FRSW_ASCII_4D	KEY_M + SHIFT_MASK			// 77 M
#define FRSW_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define FRSW_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define FRSW_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define FRSW_ASCII_51	KEY_Q + SHIFT_MASK			// 81 Q
#define FRSW_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define FRSW_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define FRSW_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define FRSW_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define FRSW_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define FRSW_ASCII_57	KEY_W + SHIFT_MASK			// 87 W
#define FRSW_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define FRSW_ASCII_59	KEY_Z + SHIFT_MASK			// 89 Y
#define FRSW_ASCII_5A	KEY_Y + SHIFT_MASK			// 90 Z
#define FRSW_ASCII_5B	KEY_LEFT_BRACE + ALTGR_MASK		// 91 [
#define FRSW_ASCII_5C	KEY_NON_US_100 + ALTGR_MASK		// 92
#define FRSW_ASCII_5D	KEY_RIGHT_BRACE + ALTGR_MASK		// 93 ]
#define FRSW_ASCII_5E	CIRCUMFLEX_BITS + KEY_SPACE		// 94 ^
#define FRSW_ASCII_5F	KEY_SLASH + SHIFT_MASK			// 95 _
#define FRSW_ASCII_60	FRSW_GRAVE_ACCENT_BITS + KEY_SPACE		// 96 `
#define FRSW_ASCII_61	KEY_A					// 97 a
#define FRSW_ASCII_62	KEY_B					// 98 b
#define FRSW_ASCII_63	KEY_C					// 99 c
#define FRSW_ASCII_64	KEY_D					// 100 d
#define FRSW_ASCII_65	KEY_E					// 101 e
#define FRSW_ASCII_66	KEY_F					// 102 f
#define FRSW_ASCII_67	KEY_G					// 103 g
#define FRSW_ASCII_68	KEY_H					// 104 h
#define FRSW_ASCII_69	KEY_I					// 105 i
#define FRSW_ASCII_6A	KEY_J					// 106 j
#define FRSW_ASCII_6B	KEY_K					// 107 k
#define FRSW_ASCII_6C	KEY_L					// 108 l
#define FRSW_ASCII_6D	KEY_M					// 109 m
#define FRSW_ASCII_6E	KEY_N					// 110 n
#define FRSW_ASCII_6F	KEY_O					// 111 o
#define FRSW_ASCII_70	KEY_P					// 112 p
#define FRSW_ASCII_71	KEY_Q					// 113 q
#define FRSW_ASCII_72	KEY_R					// 114 r
#define FRSW_ASCII_73	KEY_S					// 115 s
#define FRSW_ASCII_74	KEY_T					// 116 t
#define FRSW_ASCII_75	KEY_U					// 117 u
#define FRSW_ASCII_76	KEY_V					// 118 v
#define FRSW_ASCII_77	KEY_W					// 119 w
#define FRSW_ASCII_78	KEY_X					// 120 x
#define FRSW_ASCII_79	KEY_Z					// 121 y
#define FRSW_ASCII_7A	KEY_Y					// 122 z
#define FRSW_ASCII_7B	KEY_QUOTE + ALTGR_MASK			// 123 {
#define FRSW_ASCII_7C	KEY_7 + ALTGR_MASK			// 124 |
#define FRSW_ASCII_7D	KEY_BACKSLASH + ALTGR_MASK		// 125 }
#define FRSW_ASCII_7E	FRSW_TILDE_BITS + KEY_SPACE			// 126 ~
#define FRSW_ASCII_7F	KEY_BACKSPACE				// 127
#define FRSW_ISO_8859_1_A0	KEY_SPACE				// 160       Nonbreakng Space
#define FRSW_ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define FRSW_ISO_8859_1_A2	KEY_8 + ALTGR_MASK			// 162 ¢     Cent Sign
#define FRSW_ISO_8859_1_A3	KEY_BACKSLASH + SHIFT_MASK		// 163 £     Pound Sign
#define FRSW_ISO_8859_1_A4	0					// 164 ¤     Currency Sign
#define FRSW_ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define FRSW_ISO_8859_1_A6	KEY_1 + ALTGR_MASK			// 166 ¦     BROKEN BAR
#define FRSW_ISO_8859_1_A7	KEY_5 + ALTGR_MASK			// 167 §     SECTION SIGN
#define FRSW_ISO_8859_1_A8	FRSW_DIAERESIS_BITS + KEY_SPACE		// 168 ¨     DIAERESIS
#define FRSW_ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define FRSW_ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define FRSW_ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define FRSW_ISO_8859_1_AC	KEY_6 + ALTGR_MASK			// 172 ¬     NOT SIGN
#define FRSW_ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define FRSW_ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define FRSW_ISO_8859_1_AF	0					// 175 ¯     MACRON
#define FRSW_ISO_8859_1_B0	KEY_4 + ALTGR_MASK			// 176 °     DEGREE SIGN
#define FRSW_ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define FRSW_ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define FRSW_ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define FRSW_ISO_8859_1_B4	FRSW_ACUTE_ACCENT_BITS + KEY_SPACE		// 180 ´     ACUTE ACCENT
#define FRSW_ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define FRSW_ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define FRSW_ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define FRSW_ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define FRSW_ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define FRSW_ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define FRSW_ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define FRSW_ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define FRSW_ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define FRSW_ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define FRSW_ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define FRSW_ISO_8859_1_C0	FRSW_GRAVE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define FRSW_ISO_8859_1_C1	FRSW_ACUTE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define FRSW_ISO_8859_1_C2	CIRCUMFLEX_BITS	+ KEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define FRSW_ISO_8859_1_C3	FRSW_TILDE_BITS + KEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define FRSW_ISO_8859_1_C4	FRSW_DIAERESIS_BITS + KEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define FRSW_ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define FRSW_ISO_8859_1_C6	0					// 198 Æ     AE
#define FRSW_ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define FRSW_ISO_8859_1_C8	FRSW_GRAVE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define FRSW_ISO_8859_1_C9	FRSW_ACUTE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define FRSW_ISO_8859_1_CA	CIRCUMFLEX_BITS + KEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define FRSW_ISO_8859_1_CB	FRSW_DIAERESIS_BITS + KEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define FRSW_ISO_8859_1_CC	FRSW_GRAVE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define FRSW_ISO_8859_1_CD	FRSW_ACUTE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define FRSW_ISO_8859_1_CE	CIRCUMFLEX_BITS + KEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define FRSW_ISO_8859_1_CF	FRSW_DIAERESIS_BITS + KEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define FRSW_ISO_8859_1_D0	0					// 208 Ð     ETH
#define FRSW_ISO_8859_1_D1	FRSW_TILDE_BITS + KEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define FRSW_ISO_8859_1_D2	FRSW_GRAVE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define FRSW_ISO_8859_1_D3	FRSW_ACUTE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define FRSW_ISO_8859_1_D4	CIRCUMFLEX_BITS + KEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define FRSW_ISO_8859_1_D5	FRSW_TILDE_BITS + KEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define FRSW_ISO_8859_1_D6	FRSW_DIAERESIS_BITS + KEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define FRSW_ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define FRSW_ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define FRSW_ISO_8859_1_D9	FRSW_GRAVE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define FRSW_ISO_8859_1_DA	FRSW_ACUTE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define FRSW_ISO_8859_1_DB	CIRCUMFLEX_BITS + KEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define FRSW_ISO_8859_1_DC	FRSW_DIAERESIS_BITS + KEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define FRSW_ISO_8859_1_DD	FRSW_ACUTE_ACCENT_BITS + KEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define FRSW_ISO_8859_1_DE	0					// 222 Þ     THORN
#define FRSW_ISO_8859_1_DF	0					// 223 ß     SHARP S
#define FRSW_ISO_8859_1_E0	KEY_QUOTE				// 224 à     a GRAVE
#define FRSW_ISO_8859_1_E1	FRSW_ACUTE_ACCENT_BITS + KEY_A		// 225 á     a ACUTE
#define FRSW_ISO_8859_1_E2	CIRCUMFLEX_BITS + KEY_A			// 226 â     a CIRCUMFLEX
#define FRSW_ISO_8859_1_E3	FRSW_TILDE_BITS + KEY_A			// 227 ã     a TILDE
#define FRSW_ISO_8859_1_E4	KEY_QUOTE + SHIFT_MASK			// 228 ä     a DIAERESIS
#define FRSW_ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define FRSW_ISO_8859_1_E6	0					// 230 æ     ae
#define FRSW_ISO_8859_1_E7	KEY_4 + SHIFT_MASK			// 231 ç     c CEDILLA
#define FRSW_ISO_8859_1_E8	KEY_LEFT_BRACE				// 232 è     e GRAVE
#define FRSW_ISO_8859_1_E9	KEY_SEMICOLON				// 233 é     e ACUTE
#define FRSW_ISO_8859_1_EA	CIRCUMFLEX_BITS + KEY_E			// 234 ê     e CIRCUMFLEX
#define FRSW_ISO_8859_1_EB	FRSW_DIAERESIS_BITS + KEY_E			// 235 ë     e DIAERESIS
#define FRSW_ISO_8859_1_EC	FRSW_GRAVE_ACCENT_BITS + KEY_I		// 236 ì     i GRAVE
#define FRSW_ISO_8859_1_ED	FRSW_ACUTE_ACCENT_BITS + KEY_I		// 237 í     i ACUTE
#define FRSW_ISO_8859_1_EE	CIRCUMFLEX_BITS + KEY_I			// 238 î     i CIRCUMFLEX
#define FRSW_ISO_8859_1_EF	FRSW_DIAERESIS_BITS + KEY_I			// 239 ï     i DIAERESIS
#define FRSW_ISO_8859_1_F0	0					// 240 ð     ETH
#define FRSW_ISO_8859_1_F1	FRSW_TILDE_BITS + KEY_N			// 241 ñ     n TILDE
#define FRSW_ISO_8859_1_F2	FRSW_GRAVE_ACCENT_BITS + KEY_O		// 242 ò     o GRAVE
#define FRSW_ISO_8859_1_F3	FRSW_ACUTE_ACCENT_BITS + KEY_O		// 243 ó     o ACUTE
#define FRSW_ISO_8859_1_F4	CIRCUMFLEX_BITS + KEY_O			// 244 ô     o CIRCUMFLEX
#define FRSW_ISO_8859_1_F5	FRSW_TILDE_BITS + KEY_O			// 245 õ     o TILDE
#define FRSW_ISO_8859_1_F6	KEY_SEMICOLON + SHIFT_MASK		// 246 ö     o DIAERESIS
#define FRSW_ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define FRSW_ISO_8859_1_F8	0					// 248 ø     o STROKE
#define FRSW_ISO_8859_1_F9	FRSW_GRAVE_ACCENT_BITS + KEY_U		// 249 ù     u GRAVE
#define FRSW_ISO_8859_1_FA	FRSW_ACUTE_ACCENT_BITS + KEY_U		// 250 ú     u ACUTE
#define FRSW_ISO_8859_1_FB	CIRCUMFLEX_BITS + KEY_U			// 251 û     u CIRCUMFLEX
#define FRSW_ISO_8859_1_FC	KEY_LEFT_BRACE + SHIFT_MASK		// 252 ü     u DIAERESIS
#define FRSW_ISO_8859_1_FD	FRSW_ACUTE_ACCENT_BITS + KEY_Y		// 253 ý     y ACUTE
#define FRSW_ISO_8859_1_FE	0					// 254 þ     THORN
#define FRSW_ISO_8859_1_FF	FRSW_DIAERESIS_BITS + KEY_Y			// 255 ÿ     y DIAERESIS
#define FRSW_UNICODE_20AC	KEY_E + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define FRSW_UNICODE_EXTRA00	0x20AC
#define FRSW_KEYCODE_EXTRA00	KEY_E + ALTGR_MASK			// 20AC €    Euro Sign

 		


#define ESLAT_ACUTE_ACCENT_BITS	0x0200
#define ESLAT_GRAVE_ACCENT_BITS	0x0300
#define ESLAT_DIAERESIS_BITS		0x0400
#define ESLAT_KEYCODE_TYPE		uint16_t
#define ESLAT_DEADKEY_CIRCUMFLEX	KEY_QUOTE + ALTGR_MASK
#define ESLAT_DEADKEY_ACUTE_ACCENT	KEY_LEFT_BRACE
#define ESLAT_DEADKEY_GRAVE_ACCENT	KEY_BACKSLASH + ALTGR_MASK
#define ESLAT_DEADKEY_DIAERESIS	KEY_LEFT_BRACE + SHIFT_MASK
#define KEY_NON_US_100		63

#define ESLAT_ASCII_20	KEY_SPACE				// 32  
#define ESLAT_ASCII_21	KEY_1 + SHIFT_MASK			// 33 !
#define ESLAT_ASCII_22	KEY_2 + SHIFT_MASK			// 34 "
#define ESLAT_ASCII_23	KEY_3 + ALTGR_MASK			// 35 #
#define ESLAT_ASCII_24	KEY_4 + SHIFT_MASK			// 36 $
#define ESLAT_ASCII_25	KEY_5 + SHIFT_MASK			// 37 %
#define ESLAT_ASCII_26	KEY_6 + SHIFT_MASK			// 38 &
#define ESLAT_ASCII_27	KEY_MINUS				// 39 '
#define ESLAT_ASCII_28	KEY_8 + SHIFT_MASK			// 40 (
#define ESLAT_ASCII_29	KEY_9 + SHIFT_MASK			// 41 )
#define ESLAT_ASCII_2A	KEY_RIGHT_BRACE + SHIFT_MASK		// 42 *
#define ESLAT_ASCII_2B	KEY_RIGHT_BRACE				// 43 +
#define ESLAT_ASCII_2C	KEY_COMMA				// 44 ,
#define ESLAT_ASCII_2D	KEY_SLASH				// 45 -
#define ESLAT_ASCII_2E	KEY_PERIOD				// 46 .
#define ESLAT_ASCII_2F	KEY_7 + SHIFT_MASK			// 47 /
#define ESLAT_ASCII_30	KEY_0					// 48 0
#define ESLAT_ASCII_31	KEY_1					// 49 1
#define ESLAT_ASCII_32	KEY_2					// 50 2
#define ESLAT_ASCII_33	KEY_3					// 51 3
#define ESLAT_ASCII_34	KEY_4					// 52 4
#define ESLAT_ASCII_35	KEY_5					// 53 5
#define ESLAT_ASCII_36	KEY_6					// 54 6
#define ESLAT_ASCII_37	KEY_7					// 55 7
#define ESLAT_ASCII_38	KEY_8					// 55 8
#define ESLAT_ASCII_39	KEY_9					// 57 9
#define ESLAT_ASCII_3A	KEY_PERIOD + SHIFT_MASK			// 58 :
#define ESLAT_ASCII_3B	KEY_COMMA + SHIFT_MASK			// 59 ;
#define ESLAT_ASCII_3C	KEY_NON_US_100				// 60 <
#define ESLAT_ASCII_3D	KEY_0 + SHIFT_MASK			// 61 =
#define ESLAT_ASCII_3E	KEY_NON_US_100 + SHIFT_MASK		// 62 >
#define ESLAT_ASCII_3F	KEY_MINUS + SHIFT_MASK			// 63 ?
#define ESLAT_ASCII_40	KEY_Q + ALTGR_MASK			// 64 @
#define ESLAT_ASCII_41	KEY_A + SHIFT_MASK			// 65 A
#define ESLAT_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define ESLAT_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define ESLAT_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define ESLAT_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define ESLAT_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define ESLAT_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define ESLAT_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define ESLAT_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define ESLAT_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define ESLAT_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define ESLAT_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define ESLAT_ASCII_4D	KEY_M + SHIFT_MASK			// 77 M
#define ESLAT_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define ESLAT_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define ESLAT_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define ESLAT_ASCII_51	KEY_Q + SHIFT_MASK			// 81 Q
#define ESLAT_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define ESLAT_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define ESLAT_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define ESLAT_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define ESLAT_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define ESLAT_ASCII_57	KEY_W + SHIFT_MASK			// 87 W
#define ESLAT_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define ESLAT_ASCII_59	KEY_Y + SHIFT_MASK			// 89 Y
#define ESLAT_ASCII_5A	KEY_Z + SHIFT_MASK			// 90 Z
#define ESLAT_ASCII_5B	KEY_QUOTE + SHIFT_MASK			// 91 [
#define ESLAT_ASCII_5C	KEY_MINUS + ALTGR_MASK			// 92
#define ESLAT_ASCII_5D	KEY_BACKSLASH + SHIFT_MASK		// 93 ]
#define ESLAT_ASCII_5E	CIRCUMFLEX_BITS + KEY_SPACE		// 94 ^
#define ESLAT_ASCII_5F	KEY_SLASH + SHIFT_MASK			// 95 _
#define ESLAT_ASCII_60	ESLAT_GRAVE_ACCENT_BITS + KEY_SPACE		// 96 `
#define ESLAT_ASCII_61	KEY_A					// 97 a
#define ESLAT_ASCII_62	KEY_B					// 98 b
#define ESLAT_ASCII_63	KEY_C					// 99 c
#define ESLAT_ASCII_64	KEY_D					// 100 d
#define ESLAT_ASCII_65	KEY_E					// 101 e
#define ESLAT_ASCII_66	KEY_F					// 102 f
#define ESLAT_ASCII_67	KEY_G					// 103 g
#define ESLAT_ASCII_68	KEY_H					// 104 h
#define ESLAT_ASCII_69	KEY_I					// 105 i
#define ESLAT_ASCII_6A	KEY_J					// 106 j
#define ESLAT_ASCII_6B	KEY_K					// 107 k
#define ESLAT_ASCII_6C	KEY_L					// 108 l
#define ESLAT_ASCII_6D	KEY_M					// 109 m
#define ESLAT_ASCII_6E	KEY_N					// 110 n
#define ESLAT_ASCII_6F	KEY_O					// 111 o
#define ESLAT_ASCII_70	KEY_P					// 112 p
#define ESLAT_ASCII_71	KEY_Q					// 113 q
#define ESLAT_ASCII_72	KEY_R					// 114 r
#define ESLAT_ASCII_73	KEY_S					// 115 s
#define ESLAT_ASCII_74	KEY_T					// 116 t
#define ESLAT_ASCII_75	KEY_U					// 117 u
#define ESLAT_ASCII_76	KEY_V					// 118 v
#define ESLAT_ASCII_77	KEY_W					// 119 w
#define ESLAT_ASCII_78	KEY_X					// 120 x
#define ESLAT_ASCII_79	KEY_Y					// 121 y
#define ESLAT_ASCII_7A	KEY_Z					// 122 z
#define ESLAT_ASCII_7B	KEY_QUOTE				// 123 {
#define ESLAT_ASCII_7C	KEY_TILDE				// 124 |
#define ESLAT_ASCII_7D	KEY_BACKSLASH				// 125 }
#define ESLAT_ASCII_7E	KEY_RIGHT_BRACE + ALTGR_MASK		// 126 ~
#define ESLAT_ASCII_7F	KEY_BACKSPACE				// 127

#define ESLAT_ISO_8859_1_A0	KEY_SPACE				// 160       Nonbreakng Space
#define ESLAT_ISO_8859_1_A1	KEY_EQUAL + SHIFT_MASK			// 161 ¡     Inverted Exclamation
#define ESLAT_ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define ESLAT_ISO_8859_1_A3	0					// 163 £     Pound Sign
#define ESLAT_ISO_8859_1_A4	0					// 164 ¤     Currency Sign
#define ESLAT_ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define ESLAT_ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define ESLAT_ISO_8859_1_A7	0					// 167 §     SECTION SIGN
#define ESLAT_ISO_8859_1_A8	ESLAT_DIAERESIS_BITS + KEY_SPACE		// 168 ¨     DIAERESIS
#define ESLAT_ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define ESLAT_ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define ESLAT_ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define ESLAT_ISO_8859_1_AC	KEY_TILDE + ALTGR_MASK			// 172 ¬     NOT SIGN
#define ESLAT_ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define ESLAT_ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define ESLAT_ISO_8859_1_AF	0					// 175 ¯     MACRON
#define ESLAT_ISO_8859_1_B0	KEY_TILDE + SHIFT_MASK			// 176 °     DEGREE SIGN
#define ESLAT_ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define ESLAT_ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define ESLAT_ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define ESLAT_ISO_8859_1_B4	ESLAT_ACUTE_ACCENT_BITS + KEY_SPACE		// 180 ´     ACUTE ACCENT
#define ESLAT_ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define ESLAT_ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define ESLAT_ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define ESLAT_ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define ESLAT_ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define ESLAT_ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define ESLAT_ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define ESLAT_ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define ESLAT_ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define ESLAT_ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define ESLAT_ISO_8859_1_BF	KEY_EQUAL				// 191 ¿     INVERTED QUESTION MARK
#define ESLAT_ISO_8859_1_C0	ESLAT_GRAVE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define ESLAT_ISO_8859_1_C1	ESLAT_ACUTE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define ESLAT_ISO_8859_1_C2	CIRCUMFLEX_BITS + KEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define ESLAT_ISO_8859_1_C3	0					// 195 Ã     A TILDE
#define ESLAT_ISO_8859_1_C4	ESLAT_DIAERESIS_BITS + KEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define ESLAT_ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define ESLAT_ISO_8859_1_C6	0					// 198 Æ     AE
#define ESLAT_ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define ESLAT_ISO_8859_1_C8	ESLAT_GRAVE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define ESLAT_ISO_8859_1_C9	ESLAT_ACUTE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define ESLAT_ISO_8859_1_CA	CIRCUMFLEX_BITS + KEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define ESLAT_ISO_8859_1_CB	ESLAT_DIAERESIS_BITS + KEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define ESLAT_ISO_8859_1_CC	ESLAT_GRAVE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define ESLAT_ISO_8859_1_CD	ESLAT_ACUTE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define ESLAT_ISO_8859_1_CE	CIRCUMFLEX_BITS + KEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define ESLAT_ISO_8859_1_CF	ESLAT_DIAERESIS_BITS + KEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define ESLAT_ISO_8859_1_D0	0					// 208 Ð     ETH
#define ESLAT_ISO_8859_1_D1	KEY_SEMICOLON + SHIFT_MASK		// 209 Ñ     N TILDE
#define ESLAT_ISO_8859_1_D2	ESLAT_GRAVE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define ESLAT_ISO_8859_1_D3	ESLAT_ACUTE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define ESLAT_ISO_8859_1_D4	CIRCUMFLEX_BITS + KEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define ESLAT_ISO_8859_1_D5	0					// 213 Õ     O TILDE
#define ESLAT_ISO_8859_1_D6	ESLAT_DIAERESIS_BITS + KEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define ESLAT_ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define ESLAT_ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define ESLAT_ISO_8859_1_D9	ESLAT_GRAVE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define ESLAT_ISO_8859_1_DA	ESLAT_ACUTE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define ESLAT_ISO_8859_1_DB	CIRCUMFLEX_BITS + KEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define ESLAT_ISO_8859_1_DC	ESLAT_DIAERESIS_BITS + KEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define ESLAT_ISO_8859_1_DD	ESLAT_ACUTE_ACCENT_BITS + KEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define ESLAT_ISO_8859_1_DE	0					// 222 Þ     THORN
#define ESLAT_ISO_8859_1_DF	0					// 223 ß     SHARP S
#define ESLAT_ISO_8859_1_E0	ESLAT_GRAVE_ACCENT_BITS + KEY_A		// 224 à     a GRAVE
#define ESLAT_ISO_8859_1_E1	ESLAT_ACUTE_ACCENT_BITS + KEY_A		// 225 á     a ACUTE
#define ESLAT_ISO_8859_1_E2	CIRCUMFLEX_BITS + KEY_A			// 226 â     a CIRCUMFLEX
#define ESLAT_ISO_8859_1_E3	0					// 227 ã     a TILDE
#define ESLAT_ISO_8859_1_E4	ESLAT_DIAERESIS_BITS + KEY_A			// 228 ä     a DIAERESIS
#define ESLAT_ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define ESLAT_ISO_8859_1_E6	0					// 230 æ     ae
#define ESLAT_ISO_8859_1_E7	0					// 231 ç     c CEDILLA
#define ESLAT_ISO_8859_1_E8	ESLAT_GRAVE_ACCENT_BITS + KEY_E		// 232 è     e GRAVE
#define ESLAT_ISO_8859_1_E9	ESLAT_ACUTE_ACCENT_BITS + KEY_E		// 233 é     e ACUTE
#define ESLAT_ISO_8859_1_EA	CIRCUMFLEX_BITS + KEY_E			// 234 ê     e CIRCUMFLEX
#define ESLAT_ISO_8859_1_EB	ESLAT_DIAERESIS_BITS + KEY_E			// 235 ë     e DIAERESIS
#define ESLAT_ISO_8859_1_EC	ESLAT_GRAVE_ACCENT_BITS + KEY_I		// 236 ì     i GRAVE
#define ESLAT_ISO_8859_1_ED	ESLAT_ACUTE_ACCENT_BITS + KEY_I		// 237 í     i ACUTE
#define ESLAT_ISO_8859_1_EE	CIRCUMFLEX_BITS + KEY_I			// 238 î     i CIRCUMFLEX
#define ESLAT_ISO_8859_1_EF	ESLAT_DIAERESIS_BITS + KEY_I			// 239 ï     i DIAERESIS
#define ESLAT_ISO_8859_1_F0	0					// 240 ð     ETH
#define ESLAT_ISO_8859_1_F1	KEY_SEMICOLON				// 241 ñ     n TILDE
#define ESLAT_ISO_8859_1_F2	ESLAT_GRAVE_ACCENT_BITS + KEY_O		// 242 ò     o GRAVE
#define ESLAT_ISO_8859_1_F3	ESLAT_ACUTE_ACCENT_BITS + KEY_O		// 243 ó     o ACUTE
#define ESLAT_ISO_8859_1_F4	CIRCUMFLEX_BITS + KEY_O			// 244 ô     o CIRCUMFLEX
#define ESLAT_ISO_8859_1_F5	0					// 245 õ     o TILDE
#define ESLAT_ISO_8859_1_F6	ESLAT_DIAERESIS_BITS + KEY_O			// 246 ö     o DIAERESIS
#define ESLAT_ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define ESLAT_ISO_8859_1_F8	0					// 248 ø     o STROKE
#define ESLAT_ISO_8859_1_F9	ESLAT_GRAVE_ACCENT_BITS + KEY_U		// 249 ù     u GRAVE
#define ESLAT_ISO_8859_1_FA	ESLAT_ACUTE_ACCENT_BITS + KEY_U		// 250 ú     u ACUTE
#define ESLAT_ISO_8859_1_FB	CIRCUMFLEX_BITS + KEY_U			// 251 û     u CIRCUMFLEX
#define ESLAT_ISO_8859_1_FC	ESLAT_DIAERESIS_BITS + KEY_U			// 252 ü     u DIAERESIS
#define ESLAT_ISO_8859_1_FD	ESLAT_ACUTE_ACCENT_BITS + KEY_Y		// 253 ý     y ACUTE
#define ESLAT_ISO_8859_1_FE	0					// 254 þ     THORN
#define ESLAT_ISO_8859_1_FF	ESLAT_DIAERESIS_BITS + KEY_Y			// 255 ÿ     y DIAERESIS



#define IR_GRAVE_ACCENT_BITS	0x0100
#define IR_ACUTE_ACCENT_BITS	0x0200
#define IR_KEYCODE_TYPE		uint16_t
#define IR_DEADKEY_ACUTE_ACCENT	KEY_QUOTE + ALTGR_MASK
#define IR_DEADKEY_GRAVE_ACCENT	KEY_TILDE
#define KEY_NON_US_100		63

#define IR_ASCII_20	KEY_SPACE				// 32  
#define IR_ASCII_21	KEY_1 + SHIFT_MASK			// 33 !
#define IR_ASCII_22	KEY_2 + SHIFT_MASK			// 34 "
#define IR_ASCII_23	KEY_BACKSPACE				// 35 #
#define IR_ASCII_24	KEY_4 + SHIFT_MASK			// 36 $
#define IR_ASCII_25	KEY_5 + SHIFT_MASK			// 37 %
#define IR_ASCII_26	KEY_7 + SHIFT_MASK			// 38 &
#define IR_ASCII_27	KEY_QUOTE				// 39 '
#define IR_ASCII_28	KEY_9 + SHIFT_MASK			// 40 (
#define IR_ASCII_29	KEY_0 + SHIFT_MASK			// 41 )
#define IR_ASCII_2A	KEY_8 + SHIFT_MASK			// 42 *
#define IR_ASCII_2B	KEY_EQUAL + SHIFT_MASK			// 43 +
#define IR_ASCII_2C	KEY_COMMA				// 44 ,
#define IR_ASCII_2D	KEY_MINUS				// 45 -
#define IR_ASCII_2E	KEY_PERIOD				// 46 .
#define IR_ASCII_2F	KEY_SLASH				// 47 /
#define IR_ASCII_30	KEY_0					// 48 0
#define IR_ASCII_31	KEY_1					// 49 1
#define IR_ASCII_32	KEY_2					// 50 2
#define IR_ASCII_33	KEY_3					// 51 3
#define IR_ASCII_34	KEY_4					// 52 4
#define IR_ASCII_35	KEY_5					// 53 5
#define IR_ASCII_36	KEY_6					// 54 6
#define IR_ASCII_37	KEY_7					// 55 7
#define IR_ASCII_38	KEY_8					// 55 8
#define IR_ASCII_39	KEY_9					// 57 9
#define IR_ASCII_3A	KEY_SEMICOLON + SHIFT_MASK		// 58 :
#define IR_ASCII_3B	KEY_SEMICOLON				// 59 ;
#define IR_ASCII_3C	KEY_COMMA + SHIFT_MASK			// 60 <
#define IR_ASCII_3D	KEY_EQUAL				// 61 =
#define IR_ASCII_3E	KEY_PERIOD + SHIFT_MASK			// 62 >
#define IR_ASCII_3F	KEY_SLASH + SHIFT_MASK			// 63 ?
#define IR_ASCII_40	KEY_QUOTE + SHIFT_MASK			// 64 @
#define IR_ASCII_41	KEY_A + SHIFT_MASK			// 65 A
#define IR_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define IR_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define IR_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define IR_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define IR_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define IR_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define IR_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define IR_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define IR_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define IR_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define IR_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define IR_ASCII_4D	KEY_M + SHIFT_MASK			// 77 M
#define IR_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define IR_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define IR_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define IR_ASCII_51	KEY_Q + SHIFT_MASK			// 81 Q
#define IR_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define IR_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define IR_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define IR_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define IR_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define IR_ASCII_57	KEY_W + SHIFT_MASK			// 87 W
#define IR_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define IR_ASCII_59	KEY_Y + SHIFT_MASK			// 89 Y
#define IR_ASCII_5A	KEY_Z + SHIFT_MASK			// 90 Z
#define IR_ASCII_5B	KEY_LEFT_BRACE				// 91 [
#define IR_ASCII_5C	KEY_NON_US_100				// 92
#define IR_ASCII_5D	KEY_RIGHT_BRACE				// 93 ]
#define IR_ASCII_5E	KEY_6 + SHIFT_MASK			// 94 ^
#define IR_ASCII_5F	KEY_MINUS + SHIFT_MASK			// 95 _
#define IR_ASCII_60	KEY_QUOTE + SHIFT_MASK + ALTGR_MASK	// 96 `
#define IR_ASCII_61	KEY_A					// 97 a
#define IR_ASCII_62	KEY_B					// 98 b
#define IR_ASCII_63	KEY_C					// 99 c
#define IR_ASCII_64	KEY_D					// 100 d
#define IR_ASCII_65	KEY_E					// 101 e
#define IR_ASCII_66	KEY_F					// 102 f
#define IR_ASCII_67	KEY_G					// 103 g
#define IR_ASCII_68	KEY_H					// 104 h
#define IR_ASCII_69	KEY_I					// 105 i
#define IR_ASCII_6A	KEY_J					// 106 j
#define IR_ASCII_6B	KEY_K					// 107 k
#define IR_ASCII_6C	KEY_L					// 108 l
#define IR_ASCII_6D	KEY_M					// 109 m
#define IR_ASCII_6E	KEY_N					// 110 n
#define IR_ASCII_6F	KEY_O					// 111 o
#define IR_ASCII_70	KEY_P					// 112 p
#define IR_ASCII_71	KEY_Q					// 113 q
#define IR_ASCII_72	KEY_R					// 114 r
#define IR_ASCII_73	KEY_S					// 115 s
#define IR_ASCII_74	KEY_T					// 116 t
#define IR_ASCII_75	KEY_U					// 117 u
#define IR_ASCII_76	KEY_V					// 118 v
#define IR_ASCII_77	KEY_W					// 119 w
#define IR_ASCII_78	KEY_X					// 120 x
#define IR_ASCII_79	KEY_Y					// 121 y
#define IR_ASCII_7A	KEY_Z					// 122 z
#define IR_ASCII_7B	KEY_LEFT_BRACE + SHIFT_MASK		// 123 {
#define IR_ASCII_7C	KEY_NON_US_100 + SHIFT_MASK		// 124 |
#define IR_ASCII_7D	KEY_RIGHT_BRACE + SHIFT_MASK		// 125 }
#define IR_ASCII_7E	KEY_BACKSLASH + SHIFT_MASK		// 126 ~
#define IR_ASCII_7F	KEY_BACKSPACE				// 127

#define IR_ISO_8859_1_A0	KEY_SPACE				// 160       Nonbreakng Space
#define IR_ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define IR_ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define IR_ISO_8859_1_A3	KEY_3 + SHIFT_MASK			// 163 £     Pound Sign
#define IR_ISO_8859_1_A4	0					// 164 ¤     Currency or Euro Sign
#define IR_ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define IR_ISO_8859_1_A6	KEY_TILDE + ALTGR_MASK			// 166 ¦     BROKEN BAR
#define IR_ISO_8859_1_A7	0					// 167 §     SECTION SIGN
#define IR_ISO_8859_1_A8	0					// 168 ¨     DIAERESIS
#define IR_ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define IR_ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define IR_ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define IR_ISO_8859_1_AC	KEY_TILDE + SHIFT_MASK			// 172 ¬     NOT SIGN
#define IR_ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define IR_ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define IR_ISO_8859_1_AF	0					// 175 ¯     MACRON
#define IR_ISO_8859_1_B0	0					// 176 °     DEGREE SIGN
#define IR_ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define IR_ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define IR_ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define IR_ISO_8859_1_B4	0					// 180 ´     ACUTE ACCENT
#define IR_ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define IR_ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define IR_ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define IR_ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define IR_ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define IR_ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define IR_ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define IR_ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define IR_ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define IR_ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define IR_ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define IR_ISO_8859_1_C0	IR_GRAVE_ACCENT_BITS + KEY_A		// 192 À     A GRAVE
#define IR_ISO_8859_1_C1	KEY_A + ALTGR_MASK + SHIFT_MASK		// 193 Á     A ACUTE
#define IR_ISO_8859_1_C2	0					// 194 Â     A CIRCUMFLEX
#define IR_ISO_8859_1_C3	0					// 195 Ã     A TILDE
#define IR_ISO_8859_1_C4	0					// 196 Ä     A DIAERESIS
#define IR_ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define IR_ISO_8859_1_C6	0					// 198 Æ     AE
#define IR_ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define IR_ISO_8859_1_C8	IR_GRAVE_ACCENT_BITS + KEY_E		// 200 È     E GRAVE
#define IR_ISO_8859_1_C9	KEY_E + ALTGR_MASK + SHIFT_MASK		// 201 É     E ACUTE
#define IR_ISO_8859_1_CA	0					// 202 Ê     E CIRCUMFLEX
#define IR_ISO_8859_1_CB	0					// 203 Ë     E DIAERESIS
#define IR_ISO_8859_1_CC	IR_GRAVE_ACCENT_BITS + KEY_I		// 204 Ì     I GRAVE
#define IR_ISO_8859_1_CD	KEY_I + ALTGR_MASK + SHIFT_MASK		// 205 Í     I ACUTE
#define IR_ISO_8859_1_CE	0					// 206 Î     I CIRCUMFLEX
#define IR_ISO_8859_1_CF	0					// 207 Ï     I DIAERESIS
#define IR_ISO_8859_1_D0	0					// 208 Ð     ETH
#define IR_ISO_8859_1_D1	0					// 209 Ñ     N TILDE
#define IR_ISO_8859_1_D2	IR_GRAVE_ACCENT_BITS + KEY_O		// 210 Ò     O GRAVE
#define IR_ISO_8859_1_D3	KEY_O + ALTGR_MASK + SHIFT_MASK		// 211 Ó     O ACUTE
#define IR_ISO_8859_1_D4	0					// 212 Ô     O CIRCUMFLEX
#define IR_ISO_8859_1_D5	0					// 213 Õ     O TILDE
#define IR_ISO_8859_1_D6	0					// 214 Ö     O DIAERESIS
#define IR_ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define IR_ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define IR_ISO_8859_1_D9	IR_GRAVE_ACCENT_BITS + KEY_U		// 217 Ù     U GRAVE
#define IR_ISO_8859_1_DA	KEY_U + ALTGR_MASK + SHIFT_MASK		// 218 Ú     U ACUTE
#define IR_ISO_8859_1_DB	0					// 219 Û     U CIRCUMFLEX
#define IR_ISO_8859_1_DC	0					// 220 Ü     U DIAERESIS
#define IR_ISO_8859_1_DD	IR_ACUTE_ACCENT_BITS + KEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define IR_ISO_8859_1_DE	0					// 222 Þ     THORN
#define IR_ISO_8859_1_DF	0					// 223 ß     SHARP S
#define IR_ISO_8859_1_E0	IR_GRAVE_ACCENT_BITS + KEY_A		// 224 à     a GRAVE
#define IR_ISO_8859_1_E1	KEY_A + ALTGR_MASK			// 225 á     a ACUTE
#define IR_ISO_8859_1_E2	0					// 226 â     a CIRCUMFLEX
#define IR_ISO_8859_1_E3	0					// 227 ã     a TILDE
#define IR_ISO_8859_1_E4	0					// 228 ä     a DIAERESIS
#define IR_ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define IR_ISO_8859_1_E6	0					// 230 æ     ae
#define IR_ISO_8859_1_E7	0					// 231 ç     c CEDILLA
#define IR_ISO_8859_1_E8	IR_GRAVE_ACCENT_BITS + KEY_E		// 232 è     e GRAVE
#define IR_ISO_8859_1_E9	KEY_E + ALTGR_MASK			// 233 é     e ACUTE
#define IR_ISO_8859_1_EA	0					// 234 ê     e CIRCUMFLEX
#define IR_ISO_8859_1_EB	0					// 235 ë     e DIAERESIS
#define IR_ISO_8859_1_EC	IR_GRAVE_ACCENT_BITS + KEY_I		// 236 ì     i GRAVE
#define IR_ISO_8859_1_ED	KEY_I + ALTGR_MASK			// 237 í     i ACUTE
#define IR_ISO_8859_1_EE	0					// 238 î     i CIRCUMFLEX
#define IR_ISO_8859_1_EF	0					// 239 ï     i DIAERESIS
#define IR_ISO_8859_1_F0	0					// 240 ð     ETH
#define IR_ISO_8859_1_F1	0					// 241 ñ     n TILDE
#define IR_ISO_8859_1_F2	IR_GRAVE_ACCENT_BITS + KEY_O		// 242 ò     o GRAVE
#define IR_ISO_8859_1_F3	KEY_O + ALTGR_MASK			// 243 ó     o ACUTE
#define IR_ISO_8859_1_F4	0					// 244 ô     o CIRCUMFLEX
#define IR_ISO_8859_1_F5	0					// 245 õ     o TILDE
#define IR_ISO_8859_1_F6	0					// 246 ö     o DIAERESIS
#define IR_ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define IR_ISO_8859_1_F8	0					// 248 ø     o STROKE
#define IR_ISO_8859_1_F9	IR_GRAVE_ACCENT_BITS + KEY_U		// 249 ù     u GRAVE
#define IR_ISO_8859_1_FA	KEY_U + ALTGR_MASK			// 250 ú     u ACUTE
#define IR_ISO_8859_1_FB	0					// 251 û     u CIRCUMFLEX
#define IR_ISO_8859_1_FC	0					// 252 ü     u DIAERESIS
#define IR_ISO_8859_1_FD	IR_ACUTE_ACCENT_BITS + KEY_Y		// 253 ý     y ACUTE
#define IR_ISO_8859_1_FE	0					// 254 þ     THORN
#define IR_ISO_8859_1_FF	0					// 255 ÿ     y DIAERESIS
#define IR_UNICODE_20AC	KEY_4 + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define IR_UNICODE_EXTRA00	0x20AC
#define IR_KEYCODE_EXTRA00	KEY_4 + ALTGR_MASK			// 20AC €    Euro Sign


#define IC_ACUTE_ACCENT_BITS	0x0200
#define IC_GRAVE_ACCENT_BITS	0x0300
#define IC_DIAERESIS_BITS		0x0400
#define IC_RING_ABOVE_BITS		0x0500
#define IC_KEYCODE_TYPE		uint16_t
#define IC_DEADKEY_CIRCUMFLEX	KEY_QUOTE + ALTGR_MASK
#define IC_DEADKEY_ACUTE_ACCENT	KEY_QUOTE
#define IC_DEADKEY_GRAVE_ACCENT	KEY_BACKSLASH + ALTGR_MASK
#define IC_DEADKEY_DIAERESIS	KEY_TILDE + SHIFT_MASK
#define IC_DEADKEY_RING_ABOVE	KEY_TILDE
#define KEY_NON_US_100		63

#define IC_ASCII_20	KEY_SPACE				// 32  
#define IC_ASCII_21	KEY_1 + SHIFT_MASK			// 33 !
#define IC_ASCII_22	KEY_2 + SHIFT_MASK			// 34 "
#define IC_ASCII_23	KEY_3 + SHIFT_MASK			// 35 #
#define IC_ASCII_24	KEY_4 + SHIFT_MASK			// 36 $
#define IC_ASCII_25	KEY_5 + SHIFT_MASK			// 37 %
#define IC_ASCII_26	KEY_6 + SHIFT_MASK			// 38 &
#define IC_ASCII_27	KEY_QUOTE + SHIFT_MASK			// 39 '
#define IC_ASCII_28	KEY_8 + SHIFT_MASK			// 40 (
#define IC_ASCII_29	KEY_9 + SHIFT_MASK			// 41 )
#define IC_ASCII_2A	KEY_BACKSLASH + SHIFT_MASK		// 42 *
#define IC_ASCII_2B	KEY_BACKSLASH				// 43 +
#define IC_ASCII_2C	KEY_COMMA				// 44 ,
#define IC_ASCII_2D	KEY_EQUAL				// 45 -
#define IC_ASCII_2E	KEY_PERIOD				// 46 .
#define IC_ASCII_2F	KEY_7 + SHIFT_MASK			// 47 /
#define IC_ASCII_30	KEY_0					// 48 0
#define IC_ASCII_31	KEY_1					// 49 1
#define IC_ASCII_32	KEY_2					// 50 2
#define IC_ASCII_33	KEY_3					// 51 3
#define IC_ASCII_34	KEY_4					// 52 4
#define IC_ASCII_35	KEY_5					// 53 5
#define IC_ASCII_36	KEY_6					// 54 6
#define IC_ASCII_37	KEY_7					// 55 7
#define IC_ASCII_38	KEY_8					// 55 8
#define IC_ASCII_39	KEY_9					// 57 9
#define IC_ASCII_3A	KEY_PERIOD + SHIFT_MASK			// 58 :
#define IC_ASCII_3B	KEY_COMMA + SHIFT_MASK			// 59 ;
#define IC_ASCII_3C	KEY_NON_US_100				// 60 <
#define IC_ASCII_3D	KEY_0 + SHIFT_MASK			// 61 =
#define IC_ASCII_3E	KEY_NON_US_100 + SHIFT_MASK		// 62 >
#define IC_ASCII_3F	KEY_RIGHT_BRACE + SHIFT_MASK		// 63 ?
#define IC_ASCII_40	KEY_Q + ALTGR_MASK			// 64 @
#define IC_ASCII_41	KEY_A + SHIFT_MASK			// 65 A
#define IC_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define IC_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define IC_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define IC_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define IC_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define IC_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define IC_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define IC_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define IC_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define IC_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define IC_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define IC_ASCII_4D	KEY_M + SHIFT_MASK			// 77 M
#define IC_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define IC_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define IC_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define IC_ASCII_51	KEY_Q + SHIFT_MASK			// 81 Q
#define IC_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define IC_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define IC_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define IC_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define IC_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define IC_ASCII_57	KEY_W + SHIFT_MASK			// 87 W
#define IC_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define IC_ASCII_59	KEY_Y + SHIFT_MASK			// 89 Y
#define IC_ASCII_5A	KEY_Z + SHIFT_MASK			// 90 Z
#define IC_ASCII_5B	KEY_8 + ALTGR_MASK			// 91 [
#define IC_ASCII_5C	KEY_MINUS + ALTGR_MASK			// 92
#define IC_ASCII_5D	KEY_9 + ALTGR_MASK			// 93 ]
#define IC_ASCII_5E	CIRCUMFLEX_BITS + KEY_SPACE		// 94 ^
#define IC_ASCII_5F	KEY_EQUAL + SHIFT_MASK			// 95 _
#define IC_ASCII_60	IC_GRAVE_ACCENT_BITS + KEY_SPACE		// 96 `
#define IC_ASCII_61	KEY_A					// 97 a
#define IC_ASCII_62	KEY_B					// 98 b
#define IC_ASCII_63	KEY_C					// 99 c
#define IC_ASCII_64	KEY_D					// 100 d
#define IC_ASCII_65	KEY_E					// 101 e
#define IC_ASCII_66	KEY_F					// 102 f
#define IC_ASCII_67	KEY_G					// 103 g
#define IC_ASCII_68	KEY_H					// 104 h
#define IC_ASCII_69	KEY_I					// 105 i
#define IC_ASCII_6A	KEY_J					// 106 j
#define IC_ASCII_6B	KEY_K					// 107 k
#define IC_ASCII_6C	KEY_L					// 108 l
#define IC_ASCII_6D	KEY_M					// 109 m
#define IC_ASCII_6E	KEY_N					// 110 n
#define IC_ASCII_6F	KEY_O					// 111 o
#define IC_ASCII_70	KEY_P					// 112 p
#define IC_ASCII_71	KEY_Q					// 113 q
#define IC_ASCII_72	KEY_R					// 114 r
#define IC_ASCII_73	KEY_S					// 115 s
#define IC_ASCII_74	KEY_T					// 116 t
#define IC_ASCII_75	KEY_U					// 117 u
#define IC_ASCII_76	KEY_V					// 118 v
#define IC_ASCII_77	KEY_W					// 119 w
#define IC_ASCII_78	KEY_X					// 120 x
#define IC_ASCII_79	KEY_Y					// 121 y
#define IC_ASCII_7A	KEY_Z					// 122 z
#define IC_ASCII_7B	KEY_7 + ALTGR_MASK			// 123 {
#define IC_ASCII_7C	KEY_NON_US_100 + ALTGR_MASK		// 124 |
#define IC_ASCII_7D	KEY_0 + ALTGR_MASK			// 125 }
#define IC_ASCII_7E	KEY_RIGHT_BRACE + ALTGR_MASK		// 126 ~
#define IC_ASCII_7F	KEY_BACKSPACE				// 127

#define IC_ISO_8859_1_A0	KEY_SPACE				// 160       Nonbreakng Space
#define IC_ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define IC_ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define IC_ISO_8859_1_A3	0					// 163 £     Pound Sign
#define IC_ISO_8859_1_A4	0					// 164 ¤     Currency or Euro Sign
#define IC_ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define IC_ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR			??
#define IC_ISO_8859_1_A7	0					// 167 §     SECTION SIGN
#define IC_ISO_8859_1_A8	IC_DIAERESIS_BITS + KEY_SPACE		// 168 ¨     DIAERESIS
#define IC_ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define IC_ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define IC_ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define IC_ISO_8859_1_AC	0					// 172 ¬     NOT SIGN			??
#define IC_ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define IC_ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define IC_ISO_8859_1_AF	0					// 175 ¯     MACRON
#define IC_ISO_8859_1_B0	KEY_TILDE + ALTGR_MASK			// 176 °     DEGREE SIGN
#define IC_ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define IC_ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define IC_ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define IC_ISO_8859_1_B4	IC_ACUTE_ACCENT_BITS + KEY_SPACE		// 180 ´     ACUTE ACCENT
#define IC_ISO_8859_1_B5	KEY_M + ALTGR_MASK			// 181 µ     MICRO SIGN
#define IC_ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define IC_ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define IC_ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define IC_ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define IC_ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define IC_ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define IC_ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define IC_ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define IC_ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define IC_ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define IC_ISO_8859_1_C0	IC_GRAVE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define IC_ISO_8859_1_C1	IC_ACUTE_ACCENT_BITS + KEY_A + ALTGR_MASK	// 193 Á     A ACUTE
#define IC_ISO_8859_1_C2	CIRCUMFLEX_BITS	+ KEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define IC_ISO_8859_1_C3	0					// 195 Ã     A TILDE
#define IC_ISO_8859_1_C4	IC_DIAERESIS_BITS + KEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define IC_ISO_8859_1_C5	IC_RING_ABOVE_BITS + KEY_A + SHIFT_MASK	// 197 Å     A RING ABOVE
#define IC_ISO_8859_1_C6	KEY_SEMICOLON + SHIFT_MASK		// 198 Æ     AE
#define IC_ISO_8859_1_C7	0					// 199 Ç     C CEDILLA
#define IC_ISO_8859_1_C8	IC_GRAVE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define IC_ISO_8859_1_C9	IC_ACUTE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define IC_ISO_8859_1_CA	CIRCUMFLEX_BITS + KEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define IC_ISO_8859_1_CB	IC_DIAERESIS_BITS + KEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define IC_ISO_8859_1_CC	IC_GRAVE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define IC_ISO_8859_1_CD	IC_ACUTE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define IC_ISO_8859_1_CE	CIRCUMFLEX_BITS + KEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define IC_ISO_8859_1_CF	IC_DIAERESIS_BITS + KEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define IC_ISO_8859_1_D0	KEY_LEFT_BRACE + SHIFT_MASK		// 208 Ð     ETH
#define IC_ISO_8859_1_D1	0					// 209 Ñ     N TILDE
#define IC_ISO_8859_1_D2	IC_GRAVE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define IC_ISO_8859_1_D3	IC_ACUTE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define IC_ISO_8859_1_D4	CIRCUMFLEX_BITS + KEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define IC_ISO_8859_1_D5	0					// 213 Õ     O TILDE
#define IC_ISO_8859_1_D6	IC_DIAERESIS_BITS + KEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define IC_ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define IC_ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define IC_ISO_8859_1_D9	IC_GRAVE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define IC_ISO_8859_1_DA	IC_ACUTE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define IC_ISO_8859_1_DB	CIRCUMFLEX_BITS + KEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define IC_ISO_8859_1_DC	IC_DIAERESIS_BITS + KEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define IC_ISO_8859_1_DD	IC_ACUTE_ACCENT_BITS + KEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define IC_ISO_8859_1_DE	KEY_SLASH + SHIFT_MASK			// 222 Þ     THORN
#define IC_ISO_8859_1_DF	0					// 223 ß     SHARP S
#define IC_ISO_8859_1_E0	IC_GRAVE_ACCENT_BITS + KEY_A		// 224 à     a GRAVE
#define IC_ISO_8859_1_E1	IC_ACUTE_ACCENT_BITS + KEY_A		// 225 á     a ACUTE
#define IC_ISO_8859_1_E2	CIRCUMFLEX_BITS + KEY_A			// 226 â     a CIRCUMFLEX
#define IC_ISO_8859_1_E3	0					// 227 ã     a TILDE
#define IC_ISO_8859_1_E4	IC_DIAERESIS_BITS + KEY_A			// 228 ä     a DIAERESIS
#define IC_ISO_8859_1_E5	IC_RING_ABOVE_BITS + KEY_A			// 229 å     a RING ABOVE
#define IC_ISO_8859_1_E6	KEY_SEMICOLON				// 230 æ     ae
#define IC_ISO_8859_1_E7	0					// 231 ç     c CEDILLA
#define IC_ISO_8859_1_E8	IC_GRAVE_ACCENT_BITS + KEY_E		// 232 è     e GRAVE
#define IC_ISO_8859_1_E9	IC_ACUTE_ACCENT_BITS + KEY_E		// 233 é     e ACUTE
#define IC_ISO_8859_1_EA	CIRCUMFLEX_BITS + KEY_E			// 234 ê     e CIRCUMFLEX
#define IC_ISO_8859_1_EB	IC_DIAERESIS_BITS + KEY_E			// 235 ë     e DIAERESIS
#define IC_ISO_8859_1_EC	IC_GRAVE_ACCENT_BITS + KEY_I		// 236 ì     i GRAVE
#define IC_ISO_8859_1_ED	IC_ACUTE_ACCENT_BITS + KEY_I		// 237 í     i ACUTE
#define IC_ISO_8859_1_EE	CIRCUMFLEX_BITS + KEY_I			// 238 î     i CIRCUMFLEX
#define IC_ISO_8859_1_EF	IC_DIAERESIS_BITS + KEY_I			// 239 ï     i DIAERESIS
#define IC_ISO_8859_1_F0	KEY_LEFT_BRACE				// 240 ð     ETH
#define IC_ISO_8859_1_F1	0					// 241 ñ     n TILDE
#define IC_ISO_8859_1_F2	IC_GRAVE_ACCENT_BITS + KEY_O		// 242 ò     o GRAVE
#define IC_ISO_8859_1_F3	IC_ACUTE_ACCENT_BITS + KEY_O		// 243 ó     o ACUTE
#define IC_ISO_8859_1_F4	CIRCUMFLEX_BITS + KEY_O			// 244 ô     o CIRCUMFLEX
#define IC_ISO_8859_1_F5	0					// 245 õ     o TILDE
#define IC_ISO_8859_1_F6	IC_DIAERESIS_BITS + KEY_O			// 246 ö     o DIAERESIS
#define IC_ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define IC_ISO_8859_1_F8	0					// 248 ø     o STROKE
#define IC_ISO_8859_1_F9	IC_GRAVE_ACCENT_BITS + KEY_U		// 249 ù     u GRAVE
#define IC_ISO_8859_1_FA	IC_ACUTE_ACCENT_BITS + KEY_U		// 250 ú     u ACUTE
#define IC_ISO_8859_1_FB	CIRCUMFLEX_BITS + KEY_U			// 251 û     u CIRCUMFLEX
#define IC_ISO_8859_1_FC	IC_DIAERESIS_BITS + KEY_U			// 252 ü     u DIAERESIS
#define IC_ISO_8859_1_FD	IC_ACUTE_ACCENT_BITS + KEY_Y		// 253 ý     y ACUTE
#define IC_ISO_8859_1_FE	KEY_SLASH				// 254 þ     THORN
#define IC_ISO_8859_1_FF	IC_DIAERESIS_BITS + KEY_Y			// 255 ÿ     y DIAERESIS
#define IC_UNICODE_20AC	KEY_5 + ALTGR_MASK			//     €     Euro Sign
// not yet implemented
#define IC_UNICODE_EXTRA00	0x20AC
#define IC_KEYCODE_EXTRA00	KEY_5 + ALTGR_MASK			// 20AC €    Euro Sign

// http://forum.pjrc.com/threads/18781-Turkish-Language-Support


#define TK_ACUTE_ACCENT_BITS	0x0200
#define TK_GRAVE_ACCENT_BITS	0x0300
#define TK_TILDE_BITS		0x0400
#define TK_DIAERESIS_BITS		0x0500
#define TK_KEYCODE_TYPE		uint16_t
#define TK_DEADKEY_CIRCUMFLEX	KEY_3 + SHIFT_MASK
#define TK_DEADKEY_ACUTE_ACCENT	KEY_SEMICOLON + ALTGR_MASK
#define TK_DEADKEY_GRAVE_ACCENT	KEY_BACKSLASH + ALTGR_MASK
#define TK_DEADKEY_TILDE		KEY_RIGHT_BRACE + ALTGR_MASK
#define TK_DEADKEY_DIAERESIS	KEY_LEFT_BRACE + ALTGR_MASK

#define TK_ASCII_20	KEY_SPACE				// 32  
#define TK_ASCII_21	KEY_1 + SHIFT_MASK			// 33 !
#define TK_ASCII_22	KEY_TILDE				// 34 "
#define TK_ASCII_23	KEY_3 + ALTGR_MASK			// 35 #
#define TK_ASCII_24	KEY_4 + ALTGR_MASK			// 36 $
#define TK_ASCII_25	KEY_5 + SHIFT_MASK			// 37 %
#define TK_ASCII_26	KEY_6 + SHIFT_MASK			// 38 &
#define TK_ASCII_27	KEY_2 + SHIFT_MASK			// 39 '
#define TK_ASCII_28	KEY_8 + SHIFT_MASK			// 40 (
#define TK_ASCII_29	KEY_9 + SHIFT_MASK			// 41 )
#define TK_ASCII_2A	KEY_MINUS				// 42 *
#define TK_ASCII_2B	KEY_4 + SHIFT_MASK			// 43 +
#define TK_ASCII_2C	KEY_BACKSLASH				// 44 ,
#define TK_ASCII_2D	KEY_EQUAL				// 45 -
#define TK_ASCII_2E	KEY_SLASH				// 46 .
#define TK_ASCII_2F	KEY_7 + SHIFT_MASK			// 47 /
#define TK_ASCII_30	KEY_0					// 48 0
#define TK_ASCII_31	KEY_1					// 49 1
#define TK_ASCII_32	KEY_2					// 50 2
#define TK_ASCII_33	KEY_3					// 51 3
#define TK_ASCII_34	KEY_4					// 52 4
#define TK_ASCII_35	KEY_5					// 53 5
#define TK_ASCII_36	KEY_6					// 54 6
#define TK_ASCII_37	KEY_7					// 55 7
#define TK_ASCII_38	KEY_8					// 55 8
#define TK_ASCII_39	KEY_9					// 57 9
#define TK_ASCII_3A	KEY_SLASH + SHIFT_MASK			// 58 :
#define TK_ASCII_3B	KEY_BACKSLASH + SHIFT_MASK		// 59 ;
#define TK_ASCII_3C	KEY_TILDE + ALTGR_MASK			// 60 <
#define TK_ASCII_3D	KEY_0 + SHIFT_MASK			// 61 =
#define TK_ASCII_3E	KEY_1 + ALTGR_MASK			// 62 >
#define TK_ASCII_3F	KEY_MINUS + SHIFT_MASK			// 63 ?
#define TK_ASCII_40	KEY_Q + ALTGR_MASK			// 64 @
#define TK_ASCII_41	KEY_A + SHIFT_MASK			// 65 A
#define TK_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define TK_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define TK_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define TK_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define TK_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define TK_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define TK_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define TK_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define TK_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define TK_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define TK_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define TK_ASCII_4D	KEY_M + SHIFT_MASK			// 77 M
#define TK_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define TK_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define TK_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define TK_ASCII_51	KEY_Q + SHIFT_MASK			// 81 Q
#define TK_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define TK_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define TK_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define TK_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define TK_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define TK_ASCII_57	KEY_W + SHIFT_MASK			// 87 W
#define TK_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define TK_ASCII_59	KEY_Y + SHIFT_MASK			// 89 Y
#define TK_ASCII_5A	KEY_Z + SHIFT_MASK			// 90 Z
#define TK_ASCII_5B	KEY_8 + ALTGR_MASK			// 91 [
#define TK_ASCII_5C	KEY_MINUS + ALTGR_MASK			// 92
#define TK_ASCII_5D	KEY_9 + ALTGR_MASK			// 93 ]
#define TK_ASCII_5E	CIRCUMFLEX_BITS + KEY_SPACE		// 94 ^
#define TK_ASCII_5F	KEY_EQUAL + SHIFT_MASK			// 95 _
#define TK_ASCII_60	TK_GRAVE_ACCENT_BITS + KEY_SPACE		// 96 `
#define TK_ASCII_61	KEY_A					// 97 a
#define TK_ASCII_62	KEY_B					// 98 b
#define TK_ASCII_63	KEY_C					// 99 c
#define TK_ASCII_64	KEY_D					// 100 d
#define TK_ASCII_65	KEY_E					// 101 e
#define TK_ASCII_66	KEY_F					// 102 f
#define TK_ASCII_67	KEY_G					// 103 g
#define TK_ASCII_68	KEY_H					// 104 h
#define TK_ASCII_69	KEY_QUOTE				// 105 i
#define TK_ASCII_6A	KEY_J					// 106 j
#define TK_ASCII_6B	KEY_K					// 107 k
#define TK_ASCII_6C	KEY_L					// 108 l
#define TK_ASCII_6D	KEY_M					// 109 m
#define TK_ASCII_6E	KEY_N					// 110 n
#define TK_ASCII_6F	KEY_O					// 111 o
#define TK_ASCII_70	KEY_P					// 112 p
#define TK_ASCII_71	KEY_Q					// 113 q
#define TK_ASCII_72	KEY_R					// 114 r
#define TK_ASCII_73	KEY_S					// 115 s
#define TK_ASCII_74	KEY_T					// 116 t
#define TK_ASCII_75	KEY_U					// 117 u
#define TK_ASCII_76	KEY_V					// 118 v
#define TK_ASCII_77	KEY_W					// 119 w
#define TK_ASCII_78	KEY_X					// 120 x
#define TK_ASCII_79	KEY_Y					// 121 y
#define TK_ASCII_7A	KEY_Z					// 122 z
#define TK_ASCII_7B	KEY_7 + ALTGR_MASK			// 123 {
#define TK_ASCII_7C	KEY_EQUAL + ALTGR_MASK			// 124 |
#define TK_ASCII_7D	KEY_0 + ALTGR_MASK			// 125 }
#define TK_ASCII_7E	TK_TILDE_BITS + KEY_SPACE			// 126 ~
#define TK_ASCII_7F	KEY_BACKSPACE				// 127

#define TK_ISO_8859_1_A0	KEY_SPACE				// 160       Nonbreakng Space
#define TK_ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define TK_ISO_8859_1_A2	0					// 162 ¢     Cent SIGN
#define TK_ISO_8859_1_A3	KEY_2 + ALTGR_MASK			// 163 £     Pound Sign
#define TK_ISO_8859_1_A4	0					// 164 ¤     Currency or Euro Sign
#define TK_ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define TK_ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR			??
#define TK_ISO_8859_1_A7	0					// 167 §     SECTION SIGN
#define TK_ISO_8859_1_A8	TK_DIAERESIS_BITS + KEY_SPACE		// 168 ¨     DIAERESIS
#define TK_ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define TK_ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define TK_ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define TK_ISO_8859_1_AC	0					// 172 ¬     NOT SIGN			??
#define TK_ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define TK_ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define TK_ISO_8859_1_AF	0					// 175 ¯     MACRON
#define TK_ISO_8859_1_B0	0					// 176 °     DEGREE SIGN
#define TK_ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define TK_ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define TK_ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define TK_ISO_8859_1_B4	TK_ACUTE_ACCENT_BITS + KEY_SPACE		// 180 ´     ACUTE ACCENT
#define TK_ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define TK_ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define TK_ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define TK_ISO_8859_1_B8	0					// 184 ¸     CEDILLA
#define TK_ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define TK_ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define TK_ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define TK_ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define TK_ISO_8859_1_BD	KEY_5 + ALTGR_MASK			// 189 ½     FRACTION ONE HALF
#define TK_ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define TK_ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define TK_ISO_8859_1_C0	TK_GRAVE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 192 À     A GRAVE
#define TK_ISO_8859_1_C1	TK_ACUTE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define TK_ISO_8859_1_C2	CIRCUMFLEX_BITS	+ KEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define TK_ISO_8859_1_C3	TK_TILDE_BITS + KEY_A + SHIFT_MASK		// 195 Ã     A TILDE
#define TK_ISO_8859_1_C4	TK_DIAERESIS_BITS + KEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define TK_ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define TK_ISO_8859_1_C6	KEY_A + ALTGR_MASK			// 198 Æ     AE
#define TK_ISO_8859_1_C7	KEY_PERIOD + SHIFT_MASK			// 199 Ç     C CEDILLA
#define TK_ISO_8859_1_C8	TK_GRAVE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 200 È     E GRAVE
#define TK_ISO_8859_1_C9	TK_ACUTE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define TK_ISO_8859_1_CA	CIRCUMFLEX_BITS + KEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define TK_ISO_8859_1_CB	TK_DIAERESIS_BITS + KEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define TK_ISO_8859_1_CC	TK_GRAVE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 204 Ì     I GRAVE
#define TK_ISO_8859_1_CD	TK_ACUTE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define TK_ISO_8859_1_CE	CIRCUMFLEX_BITS + KEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define TK_ISO_8859_1_CF	TK_DIAERESIS_BITS + KEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define TK_ISO_8859_1_D0	0					// 208 Ð     ETH
#define TK_ISO_8859_1_D1	TK_TILDE_BITS + KEY_N + SHIFT_MASK		// 209 Ñ     N TILDE
#define TK_ISO_8859_1_D2	TK_GRAVE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 210 Ò     O GRAVE
#define TK_ISO_8859_1_D3	TK_ACUTE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define TK_ISO_8859_1_D4	CIRCUMFLEX_BITS + KEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define TK_ISO_8859_1_D5	TK_TILDE_BITS + KEY_O + SHIFT_MASK		// 213 Õ     O TILDE
#define TK_ISO_8859_1_D6	KEY_COMMA + SHIFT_MASK			// 214 Ö     O DIAERESIS
#define TK_ISO_8859_1_D7	0					// 215 ×     MULTIPLICATION
#define TK_ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define TK_ISO_8859_1_D9	TK_GRAVE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 217 Ù     U GRAVE
#define TK_ISO_8859_1_DA	TK_ACUTE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define TK_ISO_8859_1_DB	CIRCUMFLEX_BITS + KEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define TK_ISO_8859_1_DC	KEY_RIGHT_BRACE + SHIFT_MASK		// 220 Ü     U DIAERESIS
#define TK_ISO_8859_1_DD	TK_ACUTE_ACCENT_BITS + KEY_Y + SHIFT_MASK	// 221 Ý     Y ACUTE
#define TK_ISO_8859_1_DE	0					// 222 Þ     THORN
#define TK_ISO_8859_1_DF	KEY_S + ALTGR_MASK			// 223 ß     SHARP S
#define TK_ISO_8859_1_E0	TK_GRAVE_ACCENT_BITS + KEY_A		// 224 à     a GRAVE
#define TK_ISO_8859_1_E1	TK_ACUTE_ACCENT_BITS + KEY_A		// 225 á     a ACUTE
#define TK_ISO_8859_1_E2	CIRCUMFLEX_BITS + KEY_A			// 226 â     a CIRCUMFLEX
#define TK_ISO_8859_1_E3	TK_TILDE_BITS + KEY_A			// 227 ã     a TILDE
#define TK_ISO_8859_1_E4	TK_DIAERESIS_BITS + KEY_A			// 228 ä     a DIAERESIS
#define TK_ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define TK_ISO_8859_1_E6	0					// 230 æ     ae
#define TK_ISO_8859_1_E7	KEY_PERIOD				// 231 ç     c CEDILLA
#define TK_ISO_8859_1_E8	TK_GRAVE_ACCENT_BITS + KEY_E		// 232 è     e GRAVE
#define TK_ISO_8859_1_E9	KEY_TILDE + SHIFT_MASK			// 233 é     e ACUTE
#define TK_ISO_8859_1_EA	CIRCUMFLEX_BITS + KEY_E			// 234 ê     e CIRCUMFLEX
#define TK_ISO_8859_1_EB	TK_DIAERESIS_BITS + KEY_E			// 235 ë     e DIAERESIS
#define TK_ISO_8859_1_EC	TK_GRAVE_ACCENT_BITS + KEY_I		// 236 ì     i GRAVE
#define TK_ISO_8859_1_ED	TK_ACUTE_ACCENT_BITS + KEY_I		// 237 í     i ACUTE
#define TK_ISO_8859_1_EE	CIRCUMFLEX_BITS + KEY_I			// 238 î     i CIRCUMFLEX
#define TK_ISO_8859_1_EF	TK_DIAERESIS_BITS + KEY_I			// 239 ï     i DIAERESIS
#define TK_ISO_8859_1_F0	0					// 240 ð     ETH
#define TK_ISO_8859_1_F1	TK_TILDE_BITS + KEY_N			// 241 ñ     n TILDE
#define TK_ISO_8859_1_F2	TK_GRAVE_ACCENT_BITS + KEY_O		// 242 ò     o GRAVE
#define TK_ISO_8859_1_F3	TK_ACUTE_ACCENT_BITS + KEY_O		// 243 ó     o ACUTE
#define TK_ISO_8859_1_F4	CIRCUMFLEX_BITS + KEY_O			// 244 ô     o CIRCUMFLEX
#define TK_ISO_8859_1_F5	TK_TILDE_BITS + KEY_O 			// 245 õ     o TILDE
#define TK_ISO_8859_1_F6	KEY_COMMA				// 246 ö     o DIAERESIS
#define TK_ISO_8859_1_F7	0					// 247 ÷     DIVISION
#define TK_ISO_8859_1_F8	0					// 248 ø     o STROKE
#define TK_ISO_8859_1_F9	TK_GRAVE_ACCENT_BITS + KEY_U		// 249 ù     u GRAVE
#define TK_ISO_8859_1_FA	TK_ACUTE_ACCENT_BITS + KEY_U		// 250 ú     u ACUTE
#define TK_ISO_8859_1_FB	CIRCUMFLEX_BITS + KEY_U			// 251 û     u CIRCUMFLEX
#define TK_ISO_8859_1_FC	KEY_RIGHT_BRACE				// 252 ü     u DIAERESIS
#define TK_ISO_8859_1_FD	TK_ACUTE_ACCENT_BITS + KEY_Y		// 253 ý     y ACUTE
#define TK_ISO_8859_1_FE	0					// 254 þ     THORN
#define TK_ISO_8859_1_FF	TK_DIAERESIS_BITS + KEY_Y			// 255 ÿ     y DIAERESIS
#define TK_UNICODE_20AC	KEY_E + ALTGR_MASK			//     €     Euro Sign

// not yet implemented
#define TK_UNICODE_EXTRA00	0x20AC
#define TK_KEYCODE_EXTRA00	KEY_E + ALTGR_MASK			// 20AC €    Euro Sign
#define TK_UNICODE_EXTRA01	0x011E
#define TK_KEYCODE_EXTRA01	KEY_LEFT_BRACE + SHIFT_MASK		// 011E Ğ    Latin capital letter G with breve
#define TK_UNICODE_EXTRA02	0x011F
#define TK_KEYCODE_EXTRA02 KEY_LEFT_BRACE				// 011F ğ    Latin small letter g with breve
#define TK_UNICODE_EXTRA03	0x0130
#define TK_KEYCODE_EXTRA03 KEY_QUOTE + SHIFT_MASK			// 0130 İ    Latin captial letter I with dot above
#define TK_UNICODE_EXTRA04	0x0131
#define TK_KEYCODE_EXTRA04 KEY_I					// 0131 ı    Latin small letter dotless i
#define TK_UNICODE_EXTRA05	0x015E
#define TK_KEYCODE_EXTRA05 KEY_SEMICOLON + SHIFT_MASK		// 015E Ş    Latin capital letter S with cedilla
#define TK_UNICODE_EXTRA06	0x0151
#define TK_KEYCODE_EXTRA06 KEY_SEMICOLON				// 0151 ş    Latin small letter s with cedilla

// http://forum.pjrc.com/threads/24495-Czech-keyboard




#define CZ_ACUTE_ACCENT_BITS	0x0100  // TODO: the Czech might not support some
#define CZ_DEGREE_SIGN_BITS	0x0200  // of these deadkeys, perhaps not any???
#define CZ_CARON_BITS		0x0300

#define CZ_BREVE_BITS		0x0500
#define CZ_OGONEK_BITS		0x0600
//#define CZ_GRAVE_ACCENT_BITS	0x0700
#define CZ_DOT_ABOVE_BITS		0x0800
#define CZ_DOUBLE_ACUTE_BITS	0x0900
//#define CZ_DIAERESIS_BITS	0x0A00
#define CZ_CEDILLA_BITS		0x0B00
#define CZ_KEYCODE_TYPE		uint16_t
#define CZ_DEADKEY_ACUTE_ACCENT	KEY_EQUAL  // TODO: is it KEY_9 + ALTGR_MASK
#define CZ_DEADKEY_DEGREE_SIGN	KEY_TILDE + SHIFT_MASK // TODO: is it KEY_5 + ALTGR_MASK
#define CZ_DEADKEY_CARON		KEY_EQUAL + SHIFT_MASK // TODO: is it KEY_2 + ALTGR_MASK
//#define CZ_DEADKEY_CIRCUMFLEX	KEY_3 + ALTGR_MASK
#define CZ_DEADKEY_BREVE		KEY_4 + ALTGR_MASK
#define CZ_DEADKEY_OGONEK		KEY_6 + ALTGR_MASK
//#define CZ_DEADKEY_GRAVE_ACCENT	KEY_7 + ALTGR_MASK
#define CZ_DEADKEY_DOT_ABOVE	KEY_8 + ALTGR_MASK
#define CZ_DEADKEY_DOUBLE_ACUTE	KEY_0 + ALTGR_MASK
#define CZ_DEADKEY_DIAERESIS	KEY_MINUS + ALTGR_MASK
#define CZ_DEADKEY_CEDILLA		KEY_EQUAL + ALTGR_MASK
#define KEY_NON_US_100		63
#define CZ_ASCII_20	KEY_SPACE				// 32  
#define CZ_ASCII_21	KEY_QUOTE + SHIFT_MASK			// 33 !
#define CZ_ASCII_22	KEY_SEMICOLON + SHIFT_MASK		// 34 "
#define CZ_ASCII_23	KEY_X + ALTGR_MASK			// 35 #
#define CZ_ASCII_24	KEY_SEMICOLON + ALTGR_MASK		// 36 $
#define CZ_ASCII_25	KEY_MINUS + SHIFT_MASK			// 37 %
#define CZ_ASCII_26	KEY_C + ALTGR_MASK			// 38 &
#define CZ_ASCII_27	KEY_BACKSLASH + SHIFT_MASK		// 39 '
#define CZ_ASCII_28	KEY_RIGHT_BRACE + SHIFT_MASK		// 40 (
#define CZ_ASCII_29	KEY_RIGHT_BRACE				// 41 )
#define CZ_ASCII_2A	KEY_SLASH + ALTGR_MASK			// 42 *
#define CZ_ASCII_2B	KEY_1					// 43 +
#define CZ_ASCII_2C	KEY_COMMA				// 44 ,
#define CZ_ASCII_2D	KEY_SLASH				// 45 -
#define CZ_ASCII_2E	KEY_PERIOD				// 46 .
#define CZ_ASCII_2F	KEY_LEFT_BRACE + SHIFT_MASK		// 47 /
#define CZ_ASCII_30	KEY_0 + SHIFT_MASK			// 48 0
#define CZ_ASCII_31	KEY_1 + SHIFT_MASK			// 49 1
#define CZ_ASCII_32	KEY_2 + SHIFT_MASK			// 50 2
#define CZ_ASCII_33	KEY_3 + SHIFT_MASK			// 51 3
#define CZ_ASCII_34	KEY_4 + SHIFT_MASK			// 52 4
#define CZ_ASCII_35	KEY_5 + SHIFT_MASK			// 53 5
#define CZ_ASCII_36	KEY_6 + SHIFT_MASK			// 54 6
#define CZ_ASCII_37	KEY_7 + SHIFT_MASK			// 55 7
#define CZ_ASCII_38	KEY_8 + SHIFT_MASK			// 55 8
#define CZ_ASCII_39	KEY_9 + SHIFT_MASK			// 57 9
#define CZ_ASCII_3A	KEY_PERIOD + SHIFT_MASK			// 58 :
#define CZ_ASCII_3B	KEY_TILDE				// 59 ;
#define CZ_ASCII_3C	KEY_COMMA + ALTGR_MASK			// 60 <
#define CZ_ASCII_3D	KEY_MINUS				// 61 =
#define CZ_ASCII_3E	KEY_PERIOD + ALTGR_MASK			// 62 >
#define CZ_ASCII_3F	KEY_COMMA + SHIFT_MASK			// 63 ?
#define CZ_ASCII_40	KEY_V + ALTGR_MASK			// 64 @
#define CZ_ASCII_41	KEY_A + SHIFT_MASK			// 65 A
#define CZ_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define CZ_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define CZ_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define CZ_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define CZ_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define CZ_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define CZ_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define CZ_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define CZ_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define CZ_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define CZ_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define CZ_ASCII_4D	KEY_M + SHIFT_MASK			// 77 M
#define CZ_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define CZ_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define CZ_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define CZ_ASCII_51	KEY_Q + SHIFT_MASK			// 81 Q
#define CZ_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define CZ_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define CZ_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define CZ_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define CZ_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define CZ_ASCII_57	KEY_W + SHIFT_MASK			// 87 W
#define CZ_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define CZ_ASCII_59	KEY_Z + SHIFT_MASK			// 89 Y
#define CZ_ASCII_5A	KEY_Y + SHIFT_MASK			// 90 Z
#define CZ_ASCII_5B	KEY_F + ALTGR_MASK			// 91 [
#define CZ_ASCII_5C	KEY_NON_US_100				// 92
#define CZ_ASCII_5D	KEY_G + ALTGR_MASK			// 93 ]
#define CZ_ASCII_5E	KEY_3 + ALTGR_MASK			// 94 ^  TODO: testme
#define CZ_ASCII_5F	KEY_SLASH + SHIFT_MASK			// 95 _
#define CZ_ASCII_60	KEY_7 + ALTGR_MASK			// 96 `  TODO: testme
#define CZ_ASCII_61	KEY_A					// 97 a
#define CZ_ASCII_62	KEY_B					// 98 b
#define CZ_ASCII_63	KEY_C					// 99 c
#define CZ_ASCII_64	KEY_D					// 100 d
#define CZ_ASCII_65	KEY_E					// 101 e
#define CZ_ASCII_66	KEY_F					// 102 f
#define CZ_ASCII_67	KEY_G					// 103 g
#define CZ_ASCII_68	KEY_H					// 104 h
#define CZ_ASCII_69	KEY_I					// 105 i
#define CZ_ASCII_6A	KEY_J					// 106 j
#define CZ_ASCII_6B	KEY_K					// 107 k
#define CZ_ASCII_6C	KEY_L					// 108 l
#define CZ_ASCII_6D	KEY_M					// 109 m
#define CZ_ASCII_6E	KEY_N					// 110 n
#define CZ_ASCII_6F	KEY_O					// 111 o
#define CZ_ASCII_70	KEY_P					// 112 p
#define CZ_ASCII_71	KEY_Q					// 113 q
#define CZ_ASCII_72	KEY_R					// 114 r
#define CZ_ASCII_73	KEY_S					// 115 s
#define CZ_ASCII_74	KEY_T					// 116 t
#define CZ_ASCII_75	KEY_U					// 117 u
#define CZ_ASCII_76	KEY_V					// 118 v
#define CZ_ASCII_77	KEY_W					// 119 w
#define CZ_ASCII_78	KEY_X					// 120 x
#define CZ_ASCII_79	KEY_Z					// 121 y
#define CZ_ASCII_7A	KEY_Y					// 122 z
#define CZ_ASCII_7B	KEY_B + ALTGR_MASK			// 123 {
#define CZ_ASCII_7C	KEY_NON_US_100 + SHIFT_MASK		// 124 |
#define CZ_ASCII_7D	KEY_N + ALTGR_MASK			// 125 }
#define CZ_ASCII_7E	KEY_1 + ALTGR_MASK			// 126 ~  TODO: fixme
#define CZ_ASCII_7F	KEY_BACKSPACE				// 127
#define CZ_ISO_8859_1_A0	KEY_SPACE				// 160       Nonbreakng Space
#define CZ_ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define CZ_ISO_8859_1_A2	0					// 162 ¢     Cent Sign
#define CZ_ISO_8859_1_A3	0					// 163 £     Pound Sign
#define CZ_ISO_8859_1_A4	KEY_BACKSLASH + ALTGR_MASK		// 164 ¤     Currency Sign
#define CZ_ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define CZ_ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define CZ_ISO_8859_1_A7	KEY_QUOTE				// 167 §     SECTION SIGN
#define CZ_ISO_8859_1_A8	0					// 168 ¨     DIAERESIS
#define CZ_ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define CZ_ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define CZ_ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define CZ_ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define CZ_ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define CZ_ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define CZ_ISO_8859_1_AF	0					// 175 ¯     MACRON
#define CZ_ISO_8859_1_B0	DEGREE_SIGN_BITS + KEY_SPACE		// 176 °     DEGREE SIGN
#define CZ_ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define CZ_ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define CZ_ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define CZ_ISO_8859_1_B4	ACUTE_ACCENT_BITS + KEY_SPACE		// 180 ´     ACUTE ACCENT
#define CZ_ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define CZ_ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define CZ_ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define CZ_ISO_8859_1_B8	CEDILLA_BITS + KEY_SPACE		// 184 ¸     CEDILLA
#define CZ_ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define CZ_ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define CZ_ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define CZ_ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define CZ_ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define CZ_ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define CZ_ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define CZ_ISO_8859_1_C0	0					// 192 À     A GRAVE
#define CZ_ISO_8859_1_C1	ACUTE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define CZ_ISO_8859_1_C2	0					// 194 Â     A CIRCUMFLEX
#define CZ_ISO_8859_1_C3	0					// 195 Ã     A TILDE
#define CZ_ISO_8859_1_C4	0					// 196 Ä     A DIAERESIS
#define CZ_ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define CZ_ISO_8859_1_C6	0					// 198 Æ     AE
#define CZ_ISO_8859_1_C7	CEDILLA_BITS + KEY_C + SHIFT_MASK	// 199 Ç     C CEDILLA
#define CZ_ISO_8859_1_C8	0					// 200 È     E GRAVE
#define CZ_ISO_8859_1_C9	ACUTE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define CZ_ISO_8859_1_CA	0					// 202 Ê     E CIRCUMFLEX
#define CZ_ISO_8859_1_CB	0					// 203 Ë     E DIAERESIS
#define CZ_ISO_8859_1_CC	0					// 204 Ì     I GRAVE
#define CZ_ISO_8859_1_CD	ACUTE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define CZ_ISO_8859_1_CE	0					// 206 Î     I CIRCUMFLEX
#define CZ_ISO_8859_1_CF	0					// 207 Ï     I DIAERESIS
#define CZ_ISO_8859_1_D0	0					// 208 Ð     ETH
#define CZ_ISO_8859_1_D1	0					// 209 Ñ     N TILDE
#define CZ_ISO_8859_1_D2	0					// 210 Ò     O GRAVE
#define CZ_ISO_8859_1_D3	ACUTE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define CZ_ISO_8859_1_D4	0					// 212 Ô     O CIRCUMFLEX
#define CZ_ISO_8859_1_D5	0					// 213 Õ     O TILDE
#define CZ_ISO_8859_1_D6	0					// 214 Ö     O DIAERESIS
#define CZ_ISO_8859_1_D7	KEY_RIGHT_BRACE + ALTGR_MASK		// 215 ×     MULTIPLICATION
#define CZ_ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define CZ_ISO_8859_1_D9	0					// 217 Ù     U GRAVE
#define CZ_ISO_8859_1_DA	ACUTE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define CZ_ISO_8859_1_DB	0					// 219 Û     U CIRCUMFLEX
#define CZ_ISO_8859_1_DC	0					// 220 Ü     U DIAERESIS
#define CZ_ISO_8859_1_DD	ACUTE_ACCENT_BITS + KEY_Z + SHIFT_MASK	// 221 Ý     Y ACUTE
#define CZ_ISO_8859_1_DE	0					// 222 Þ     THORN
#define CZ_ISO_8859_1_DF	KEY_QUOTE + ALTGR_MASK			// 223 ß     SHARP S  TODO: testme
#define CZ_ISO_8859_1_E0	0					// 224 à     a GRAVE
#define CZ_ISO_8859_1_E1	KEY_8					// 225 á     a ACUTE
#define CZ_ISO_8859_1_E2	0					// 226 â     a CIRCUMFLEX
#define CZ_ISO_8859_1_E3	0					// 227 ã     a TILDE
#define CZ_ISO_8859_1_E4	0					// 228 ä     a DIAERESIS
#define CZ_ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define CZ_ISO_8859_1_E6	0					// 230 æ     ae
#define CZ_ISO_8859_1_E7	CEDILLA_BITS + KEY_C			// 231 ç     c CEDILLA
#define CZ_ISO_8859_1_E8	0					// 232 è     e GRAVE
#define CZ_ISO_8859_1_E9	KEY_0					// 233 é     e ACUTE
#define CZ_ISO_8859_1_EA	0					// 234 ê     e CIRCUMFLEX
#define CZ_ISO_8859_1_EB	0					// 235 ë     e DIAERESIS
#define CZ_ISO_8859_1_EC	0					// 236 ì     i GRAVE
#define CZ_ISO_8859_1_ED	KEY_9					// 237 í     i ACUTE
#define CZ_ISO_8859_1_EE	0					// 238 î     i CIRCUMFLEX
#define CZ_ISO_8859_1_EF	0					// 239 ï     i DIAERESIS
#define CZ_ISO_8859_1_F0	0					// 240 ð     ETH
#define CZ_ISO_8859_1_F1	0					// 241 ñ     n TILDE
#define CZ_ISO_8859_1_F2	0					// 242 ò     o GRAVE
#define CZ_ISO_8859_1_F3	ACUTE_ACCENT_BITS + KEY_O		// 243 ó     o ACUTE
#define CZ_ISO_8859_1_F4	0					// 244 ô     o CIRCUMFLEX
#define CZ_ISO_8859_1_F5	0					// 245 õ     o TILDE
#define CZ_ISO_8859_1_F6	0					// 246 ö     o DIAERESIS
#define CZ_ISO_8859_1_F7	KEY_LEFT_BRACE + ALTGR_MASK		// 247 ÷     DIVISION
#define CZ_ISO_8859_1_F8	0					// 248 ø     o STROKE
#define CZ_ISO_8859_1_F9	0					// 249 ù     u GRAVE
#define CZ_ISO_8859_1_FA	KEY_LEFT_BRACE				// 250 ú     u ACUTE
#define CZ_ISO_8859_1_FB	0					// 251 û     u CIRCUMFLEX
#define CZ_ISO_8859_1_FC	0					// 252 ü     u DIAERESIS
#define CZ_ISO_8859_1_FD	KEY_7					// 253 ý     y ACUTE
#define CZ_ISO_8859_1_FE	0					// 254 þ     THORN
#define CZ_ISO_8859_1_FF	0					// 255 ÿ     y DIAERESIS
#define CZ_UNICODE_20AC	KEY_E + ALTGR_MASK			//     €     Euro Sign

#define CZ_UNICODE_EXTRA00	0x011B	// ě  Small Letter E with caron
#define CZ_KEYCODE_EXTRA00 KEY_2
#define CZ_UNICODE_EXTRA01	0x0161	// š  Small Letter S with caron
#define CZ_KEYCODE_EXTRA01 KEY_3
#define CZ_UNICODE_EXTRA02	0x010D	// č  Small Letter C with caron
#define CZ_KEYCODE_EXTRA02 KEY_4
#define CZ_UNICODE_EXTRA03	0x0159	// ř  Small Letter R with caron
#define CZ_KEYCODE_EXTRA03 KEY_5
#define CZ_UNICODE_EXTRA04	0x017E	// ž  Small Letter Z with caron
#define CZ_KEYCODE_EXTRA04 KEY_6
#define CZ_UNICODE_EXTRA05	0x016F	// ů  Small Letter U with ring above
#define CZ_KEYCODE_EXTRA05 KEY_SEMICOLON
#define CZ_UNICODE_EXTRA06	0x0111	// đ  Small Letter D with stroke
#define CZ_KEYCODE_EXTRA06 KEY_S + ALTGR_MASK
#define CZ_UNICODE_EXTRA07	0x0110	// Đ  Capital Letter D with stroke
#define CZ_KEYCODE_EXTRA07 KEY_D + ALTGR_MASK
#define CZ_UNICODE_EXTRA08	0x0142	// ł  Small Letter L with stroke
#define CZ_KEYCODE_EXTRA08 KEY_K + ALTGR_MASK
#define CZ_UNICODE_EXTRA09	0x0141	// Ł  Capital Letter L with stroke
#define CZ_KEYCODE_EXTRA09 KEY_L + ALTGR_MASK
#define CZ_UNICODE_EXTRA0A	0x20AC	// €  Euro Sign
#define CZ_KEYCODE_EXTRA0A	KEY_E + ALTGR_MASK

// http://forum.pjrc.com/threads/27032-Serbian-Keyboard-Layout



#define SR_CEDILLA_BITS		0x0100
#define SR_CARON_BITS		0x0200
#define SR_BREVE_BITS		0x0400
#define SR_DEGREE_SIGN_BITS	0x0500
#define SR_OGONEK_BITS		0x0600
#define SR_DOT_ABOVE_BITS		0x0700
#define SR_ACUTE_ACCENT_BITS	0x0800
#define SR_DOUBLE_ACUTE_BITS	0x0900
#define SR_DIAERESIS_BITS		0x0A00
#define SR_KEYCODE_TYPE		uint16_t
#define SR_DEADKEY_CEDILLA		KEY_TILDE
#define SR_DEADKEY_CARON		KEY_2 + ALTGR_MASK
#define SR_DEADKEY_CIRCUMFLEX	KEY_3 + ALTGR_MASK
#define SR_DEADKEY_BREVE		KEY_4 + ALTGR_MASK
#define SR_DEADKEY_DEGREE_SIGN	KEY_5 + ALTGR_MASK
#define SR_DEADKEY_OGONEK		KEY_6 + ALTGR_MASK
#define SR_DEADKEY_DOT_ABOVE	KEY_8 + ALTGR_MASK
#define SR_DEADKEY_ACUTE_ACCENT	KEY_9 + ALTGR_MASK
#define SR_DEADKEY_DOUBLE_ACUTE	KEY_0 + ALTGR_MASK
#define SR_DEADKEY_DIAERESIS	KEY_MINUS + ALTGR_MASK
//#define SR_DEADKEY_CEDILLA	KEY_EQUAL + ALTGR_MASK <-- TODO: why are there 2 Cedilla deadkeys?
#define KEY_NON_US_100		63

#define SR_ASCII_20	KEY_SPACE				// 32  
#define SR_ASCII_21	KEY_1 + SHIFT_MASK			// 33 !
#define SR_ASCII_22	KEY_2 + SHIFT_MASK			// 34 "
#define SR_ASCII_23	KEY_3 + SHIFT_MASK			// 35 #
#define SR_ASCII_24	KEY_4 + SHIFT_MASK			// 36 $
#define SR_ASCII_25	KEY_5 + SHIFT_MASK			// 37 %
#define SR_ASCII_26	KEY_6 + SHIFT_MASK			// 38 &
#define SR_ASCII_27	KEY_MINUS				// 39 '
#define SR_ASCII_28	KEY_8 + SHIFT_MASK			// 40 (
#define SR_ASCII_29	KEY_9 + SHIFT_MASK			// 41 )
#define SR_ASCII_2A	KEY_EQUAL + SHIFT_MASK			// 42 *
#define SR_ASCII_2B	KEY_EQUAL				// 43 +
#define SR_ASCII_2C	KEY_COMMA				// 44 ,
#define SR_ASCII_2D	KEY_SLASH				// 45 -  TODO: verify
#define SR_ASCII_2E	KEY_PERIOD				// 46 .
#define SR_ASCII_2F	KEY_7 + SHIFT_MASK			// 47 /
#define SR_ASCII_30	KEY_0					// 48 0
#define SR_ASCII_31	KEY_1					// 49 1
#define SR_ASCII_32	KEY_2					// 50 2
#define SR_ASCII_33	KEY_3					// 51 3
#define SR_ASCII_34	KEY_4					// 52 4
#define SR_ASCII_35	KEY_5					// 53 5
#define SR_ASCII_36	KEY_6					// 54 6
#define SR_ASCII_37	KEY_7					// 55 7
#define SR_ASCII_38	KEY_8					// 55 8
#define SR_ASCII_39	KEY_9					// 57 9
#define SR_ASCII_3A	KEY_PERIOD + SHIFT_MASK			// 58 :
#define SR_ASCII_3B	KEY_COMMA + SHIFT_MASK			// 59 ;
#define SR_ASCII_3C	KEY_NON_US_100				// 60 <
#define SR_ASCII_3D	KEY_0 + SHIFT_MASK			// 61 =
#define SR_ASCII_3E	KEY_NON_US_100 + SHIFT_MASK		// 62 >
#define SR_ASCII_3F	KEY_MINUS + SHIFT_MASK			// 63 ?
#define SR_ASCII_40	KEY_V + ALTGR_MASK			// 64 @
#define SR_ASCII_41	KEY_A + SHIFT_MASK			// 65 A
#define SR_ASCII_42	KEY_B + SHIFT_MASK			// 66 B
#define SR_ASCII_43	KEY_C + SHIFT_MASK			// 67 C
#define SR_ASCII_44	KEY_D + SHIFT_MASK			// 68 D
#define SR_ASCII_45	KEY_E + SHIFT_MASK			// 69 E
#define SR_ASCII_46	KEY_F + SHIFT_MASK			// 70 F
#define SR_ASCII_47	KEY_G + SHIFT_MASK			// 71 G
#define SR_ASCII_48	KEY_H + SHIFT_MASK			// 72 H
#define SR_ASCII_49	KEY_I + SHIFT_MASK			// 73 I
#define SR_ASCII_4A	KEY_J + SHIFT_MASK			// 74 J
#define SR_ASCII_4B	KEY_K + SHIFT_MASK			// 75 K
#define SR_ASCII_4C	KEY_L + SHIFT_MASK			// 76 L
#define SR_ASCII_4D	KEY_M + SHIFT_MASK			// 77 M
#define SR_ASCII_4E	KEY_N + SHIFT_MASK			// 78 N
#define SR_ASCII_4F	KEY_O + SHIFT_MASK			// 79 O
#define SR_ASCII_50	KEY_P + SHIFT_MASK			// 80 P
#define SR_ASCII_51	KEY_Q + SHIFT_MASK			// 81 Q
#define SR_ASCII_52	KEY_R + SHIFT_MASK			// 82 R
#define SR_ASCII_53	KEY_S + SHIFT_MASK			// 83 S
#define SR_ASCII_54	KEY_T + SHIFT_MASK			// 84 T
#define SR_ASCII_55	KEY_U + SHIFT_MASK			// 85 U
#define SR_ASCII_56	KEY_V + SHIFT_MASK			// 86 V
#define SR_ASCII_57	KEY_W + SHIFT_MASK			// 87 W
#define SR_ASCII_58	KEY_X + SHIFT_MASK			// 88 X
#define SR_ASCII_59	KEY_Z + SHIFT_MASK			// 89 Y
#define SR_ASCII_5A	KEY_Y + SHIFT_MASK			// 90 Z
#define SR_ASCII_5B	KEY_F + ALTGR_MASK			// 91 [
#define SR_ASCII_5C	KEY_Q + ALTGR_MASK			// 92
#define SR_ASCII_5D	KEY_G + ALTGR_MASK			// 93 ]
#define SR_ASCII_5E	SR_CIRCUMFLEX_BITS + KEY_SPACE		// 94 ^
#define SR_ASCII_5F	KEY_SLASH + SHIFT_MASK			// 95 _   TODO: verify
#define SR_ASCII_60	KEY_7 + ALTGR_MASK			// 96 `
#define SR_ASCII_61	KEY_A					// 97 a
#define SR_ASCII_62	KEY_B					// 98 b
#define SR_ASCII_63	KEY_C					// 99 c
#define SR_ASCII_64	KEY_D					// 100 d
#define SR_ASCII_65	KEY_E					// 101 e
#define SR_ASCII_66	KEY_F					// 102 f
#define SR_ASCII_67	KEY_G					// 103 g
#define SR_ASCII_68	KEY_H					// 104 h
#define SR_ASCII_69	KEY_I					// 105 i
#define SR_ASCII_6A	KEY_J					// 106 j
#define SR_ASCII_6B	KEY_K					// 107 k
#define SR_ASCII_6C	KEY_L					// 108 l
#define SR_ASCII_6D	KEY_M					// 109 m
#define SR_ASCII_6E	KEY_N					// 110 n
#define SR_ASCII_6F	KEY_O					// 111 o
#define SR_ASCII_70	KEY_P					// 112 p
#define SR_ASCII_71	KEY_Q					// 113 q
#define SR_ASCII_72	KEY_R					// 114 r
#define SR_ASCII_73	KEY_S					// 115 s
#define SR_ASCII_74	KEY_T					// 116 t
#define SR_ASCII_75	KEY_U					// 117 u
#define SR_ASCII_76	KEY_V					// 118 v
#define SR_ASCII_77	KEY_W					// 119 w
#define SR_ASCII_78	KEY_X					// 120 x
#define SR_ASCII_79	KEY_Z					// 121 y
#define SR_ASCII_7A	KEY_Y					// 122 z
#define SR_ASCII_7B	KEY_B + ALTGR_MASK			// 123 {
#define SR_ASCII_7C	KEY_W + ALTGR_MASK			// 124 |
#define SR_ASCII_7D	KEY_N + ALTGR_MASK			// 125 }
#define SR_ASCII_7E	KEY_1 + ALTGR_MASK			// 126 ~
#define SR_ASCII_7F	KEY_BACKSPACE				// 127
#define SR_ISO_8859_1_A0	KEY_SPACE				// 160       Nonbreakng Space
#define SR_ISO_8859_1_A1	0					// 161 ¡     Inverted Exclamation
#define SR_ISO_8859_1_A2	0					// 162 ¢     Cent Sign
#define SR_ISO_8859_1_A3	0					// 163 £     Pound Sign
#define SR_ISO_8859_1_A4	KEY_BACKSLASH + ALTGR_MASK		// 164 ¤     Currency Sign
#define SR_ISO_8859_1_A5	0					// 165 ¥     YEN SIGN
#define SR_ISO_8859_1_A6	0					// 166 ¦     BROKEN BAR
#define SR_ISO_8859_1_A7	KEY_M + ALTGR_MASK			// 167 §     SECTION SIGN
#define SR_ISO_8859_1_A8	DIAERESIS_BITS + KEY_SPACE		// 168 ¨     DIAERESIS
#define SR_ISO_8859_1_A9	0					// 169 ©     COPYRIGHT SIGN
#define SR_ISO_8859_1_AA	0					// 170 ª     FEMININE ORDINAL
#define SR_ISO_8859_1_AB	0					// 171 «     LEFT DOUBLE ANGLE QUOTE
#define SR_ISO_8859_1_AC	0					// 172 ¬     NOT SIGN
#define SR_ISO_8859_1_AD	0					// 173       SOFT HYPHEN
#define SR_ISO_8859_1_AE	0					// 174 ®     REGISTERED SIGN
#define SR_ISO_8859_1_AF	0					// 175 ¯     MACRON
#define SR_ISO_8859_1_B0	DEGREE_SIGN_BITS + KEY_SPACE		// 176 °     DEGREE SIGN
#define SR_ISO_8859_1_B1	0					// 177 ±     PLUS-MINUS SIGN
#define SR_ISO_8859_1_B2	0					// 178 ²     SUPERSCRIPT TWO
#define SR_ISO_8859_1_B3	0					// 179 ³     SUPERSCRIPT THREE
#define SR_ISO_8859_1_B4	ACUTE_ACCENT_BITS + KEY_SPACE		// 180 ´     ACUTE ACCENT
#define SR_ISO_8859_1_B5	0					// 181 µ     MICRO SIGN
#define SR_ISO_8859_1_B6	0					// 182 ¶     PILCROW SIGN
#define SR_ISO_8859_1_B7	0					// 183 ·     MIDDLE DOT
#define SR_ISO_8859_1_B8	CEDILLA_BITS + KEY_SPACE		// 184 ¸     CEDILLA
#define SR_ISO_8859_1_B9	0					// 185 ¹     SUPERSCRIPT ONE
#define SR_ISO_8859_1_BA	0					// 186 º     MASCULINE ORDINAL
#define SR_ISO_8859_1_BB	0					// 187 »     RIGHT DOUBLE ANGLE QUOTE
#define SR_ISO_8859_1_BC	0					// 188 ¼     FRACTION ONE QUARTER
#define SR_ISO_8859_1_BD	0					// 189 ½     FRACTION ONE HALF
#define SR_ISO_8859_1_BE	0					// 190 ¾     FRACTION THREE QUARTERS
#define SR_ISO_8859_1_BF	0					// 191 ¿     INVERTED QUESTION MARK
#define SR_ISO_8859_1_C0	0					// 192 À     A GRAVE
#define SR_ISO_8859_1_C1	ACUTE_ACCENT_BITS + KEY_A + SHIFT_MASK	// 193 Á     A ACUTE
#define SR_ISO_8859_1_C2	SR_CIRCUMFLEX_BITS	+ KEY_A + SHIFT_MASK	// 194 Â     A CIRCUMFLEX
#define SR_ISO_8859_1_C3	0					// 195 Ã     A TILDE
#define SR_ISO_8859_1_C4	DIAERESIS_BITS + KEY_A + SHIFT_MASK	// 196 Ä     A DIAERESIS
#define SR_ISO_8859_1_C5	0					// 197 Å     A RING ABOVE
#define SR_ISO_8859_1_C6	0					// 198 Æ     AE
#define SR_ISO_8859_1_C7	CEDILLA_BITS + KEY_C + SHIFT_MASK	// 199 Ç     C CEDILLA
#define SR_ISO_8859_1_C8	0					// 200 È     E GRAVE
#define SR_ISO_8859_1_C9	ACUTE_ACCENT_BITS + KEY_E + SHIFT_MASK	// 201 É     E ACUTE
#define SR_ISO_8859_1_CA	SR_CIRCUMFLEX_BITS + KEY_E + SHIFT_MASK	// 202 Ê     E CIRCUMFLEX
#define SR_ISO_8859_1_CB	DIAERESIS_BITS + KEY_E + SHIFT_MASK	// 203 Ë     E DIAERESIS
#define SR_ISO_8859_1_CC	0					// 204 Ì     I GRAVE
#define SR_ISO_8859_1_CD	ACUTE_ACCENT_BITS + KEY_I + SHIFT_MASK	// 205 Í     I ACUTE
#define SR_ISO_8859_1_CE	SR_CIRCUMFLEX_BITS + KEY_I + SHIFT_MASK	// 206 Î     I CIRCUMFLEX
#define SR_ISO_8859_1_CF	DIAERESIS_BITS + KEY_I + SHIFT_MASK	// 207 Ï     I DIAERESIS
#define SR_ISO_8859_1_D0	0					// 208 Ð     ETH
#define SR_ISO_8859_1_D1	0					// 209 Ñ     N TILDE
#define SR_ISO_8859_1_D2	0					// 210 Ò     O GRAVE
#define SR_ISO_8859_1_D3	ACUTE_ACCENT_BITS + KEY_O + SHIFT_MASK	// 211 Ó     O ACUTE
#define SR_ISO_8859_1_D4	SR_CIRCUMFLEX_BITS + KEY_O + SHIFT_MASK	// 212 Ô     O CIRCUMFLEX
#define SR_ISO_8859_1_D5	0					// 213 Õ     O TILDE
#define SR_ISO_8859_1_D6	DIAERESIS_BITS + KEY_O + SHIFT_MASK	// 214 Ö     O DIAERESIS
#define SR_ISO_8859_1_D7	KEY_RIGHT_BRACE + ALTGR_MASK		// 215 ×     MULTIPLICATION
#define SR_ISO_8859_1_D8	0					// 216 Ø     O STROKE
#define SR_ISO_8859_1_D9	0					// 217 Ù     U GRAVE
#define SR_ISO_8859_1_DA	ACUTE_ACCENT_BITS + KEY_U + SHIFT_MASK	// 218 Ú     U ACUTE
#define SR_ISO_8859_1_DB	SR_CIRCUMFLEX_BITS + KEY_U + SHIFT_MASK	// 219 Û     U CIRCUMFLEX
#define SR_ISO_8859_1_DC	DIAERESIS_BITS + KEY_U + SHIFT_MASK	// 220 Ü     U DIAERESIS
#define SR_ISO_8859_1_DD	ACUTE_ACCENT_BITS + KEY_Z + SHIFT_MASK	// 221 Ý     Y ACUTE
#define SR_ISO_8859_1_DE	0					// 222 Þ     THORN
#define SR_ISO_8859_1_DF	KEY_QUOTE + ALTGR_MASK			// 223 ß     SHARP S
#define SR_ISO_8859_1_E0	0					// 224 à     a GRAVE
#define SR_ISO_8859_1_E1	ACUTE_ACCENT_BITS + KEY_A		// 225 á     a ACUTE
#define SR_ISO_8859_1_E2	SR_CIRCUMFLEX_BITS + KEY_A			// 226 â     a CIRCUMFLEX
#define SR_ISO_8859_1_E3	0					// 227 ã     a TILDE
#define SR_ISO_8859_1_E4	DIAERESIS_BITS + KEY_A			// 228 ä     a DIAERESIS
#define SR_ISO_8859_1_E5	0					// 229 å     a RING ABOVE
#define SR_ISO_8859_1_E6	0					// 230 æ     ae
#define SR_ISO_8859_1_E7	CEDILLA_BITS + KEY_C			// 231 ç     c CEDILLA
#define SR_ISO_8859_1_E8	0					// 232 è     e GRAVE
#define SR_ISO_8859_1_E9	ACUTE_ACCENT_BITS + KEY_E		// 233 é     e ACUTE
#define SR_ISO_8859_1_EA	SR_CIRCUMFLEX_BITS + KEY_E			// 234 ê     e CIRCUMFLEX
#define SR_ISO_8859_1_EB	DIAERESIS_BITS + KEY_E			// 235 ë     e DIAERESIS
#define SR_ISO_8859_1_EC	0					// 236 ì     i GRAVE
#define SR_ISO_8859_1_ED	ACUTE_ACCENT_BITS + KEY_I		// 237 í     i ACUTE
#define SR_ISO_8859_1_EE	SR_CIRCUMFLEX_BITS + KEY_I			// 238 î     i CIRCUMFLEX
#define SR_ISO_8859_1_EF	DIAERESIS_BITS + KEY_I			// 239 ï     i DIAERESIS
#define SR_ISO_8859_1_F0	0					// 240 ð     ETH
#define SR_ISO_8859_1_F1	0					// 241 ñ     n TILDE
#define SR_ISO_8859_1_F2	0					// 242 ò     o GRAVE
#define SR_ISO_8859_1_F3	ACUTE_ACCENT_BITS + KEY_O		// 243 ó     o ACUTE
#define SR_ISO_8859_1_F4	SR_CIRCUMFLEX_BITS + KEY_O			// 244 ô     o CIRCUMFLEX
#define SR_ISO_8859_1_F5	0					// 245 õ     o TILDE
#define SR_ISO_8859_1_F6	DIAERESIS_BITS + KEY_O			// 246 ö     o DIAERESIS
#define SR_ISO_8859_1_F7	KEY_LEFT_BRACE + ALTGR_MASK		// 247 ÷     DIVISION
#define SR_ISO_8859_1_F8	0					// 248 ø     o STROKE
#define SR_ISO_8859_1_F9	0					// 249 ù     u GRAVE
#define SR_ISO_8859_1_FA	ACUTE_ACCENT_BITS + KEY_U		// 250 ú     u ACUTE
#define SR_ISO_8859_1_FB	SR_CIRCUMFLEX_BITS + KEY_U			// 251 û     u CIRCUMFLEX
#define SR_ISO_8859_1_FC	DIAERESIS_BITS + KEY_U			// 252 ü     u DIAERESIS
#define SR_ISO_8859_1_FD	ACUTE_ACCENT_BITS + KEY_Z		// 253 ý     y ACUTE
#define SR_ISO_8859_1_FE	0					// 254 þ     THORN
#define SR_ISO_8859_1_FF	0					// 255 ÿ     y DIAERESIS
#define SR_UNICODE_20AC	KEY_E + ALTGR_MASK			//     €     Euro Sign

#define SR_UNICODE_EXTRA00	0x0160 // S caron
#define SR_KEYCODE_EXTRA00	KEY_LEFT_BRACE + SHIFT_MASK
#define SR_UNICODE_EXTRA01	0x0161 // s caron
#define SR_KEYCODE_EXTRA01	KEY_LEFT_BRACE
#define SR_UNICODE_EXTRA02	0x0110 // D with stroke
#define SR_KEYCODE_EXTRA02	KEY_RIGHT_BRACE + SHIFT_MASK
#define SR_UNICODE_EXTRA03	0x0111 // d with stroke
#define SR_KEYCODE_EXTRA03	KEY_RIGHT_BRACE
#define SR_UNICODE_EXTRA04	0x010C // C with caron
#define SR_KEYCODE_EXTRA04	KEY_SEMICOLON + SHIFT_MASK
#define SR_UNICODE_EXTRA05	0x010D // c with caron
#define SR_KEYCODE_EXTRA05 KEY_SEMICOLON
#define SR_UNICODE_EXTRA06	0x0106 // C with acute
#define SR_KEYCODE_EXTRA06 KEY_QUOTE + SHIFT_MASK
#define SR_UNICODE_EXTRA07	0x0107 // c with acute
#define SR_KEYCODE_EXTRA07 KEY_QUOTE
#define SR_UNICODE_EXTRA08	0x017D // Z with caron
#define SR_KEYCODE_EXTRA08	KEY_BACKSLASH + SHIFT_MASK
#define SR_UNICODE_EXTRA09	0x017E // z with caron
#define SR_KEYCODE_EXTRA09	KEY_BACKSLASH

#define SR_UNICODE_EXTRA10	0x0141 // L with stroke
#define SR_KEYCODE_EXTRA10 KEY_L + ALTGR_MASK
#define SR_UNICODE_EXTRA11	0x0142 // l with stroke
#define SR_KEYCODE_EXTRA11 KEY_K + ALTGR_MASK
#define SR_UNICODE_EXTRA12	0x010E // D with caron
#define SR_KEYCODE_EXTRA12 CARON_BITS + KEY_D + SHIFT_MASK
#define SR_UNICODE_EXTRA13	0x010F // d with caron
#define SR_KEYCODE_EXTRA13 CARON_BITS + KEY_D
#define SR_UNICODE_EXTRA14	0x011A // E with caron
#define SR_KEYCODE_EXTRA14 CARON_BITS + KEY_E + SHIFT_MASK
#define SR_UNICODE_EXTRA15	0x011B // e with caron
#define SR_KEYCODE_EXTRA15 CARON_BITS + KEY_E
#define SR_UNICODE_EXTRA16	0x013D // L with caron
#define SR_KEYCODE_EXTRA16 CARON_BITS + KEY_L + SHIFT_MASK
#define SR_UNICODE_EXTRA17	0x013E // l with caron
#define SR_KEYCODE_EXTRA17 CARON_BITS + KEY_L
#define SR_UNICODE_EXTRA18	0x0147 // N with caron
#define SR_KEYCODE_EXTRA18 CARON_BITS + KEY_N + SHIFT_MASK
#define SR_UNICODE_EXTRA19	0x0148 // n with caron
#define SR_KEYCODE_EXTRA19 CARON_BITS + KEY_N

#define SR_UNICODE_EXTRA20	0x0158 // R with caron
#define SR_KEYCODE_EXTRA20 CARON_BITS + KEY_R + SHIFT_MASK
#define SR_UNICODE_EXTRA21	0x0159 // r with caron
#define SR_KEYCODE_EXTRA21 CARON_BITS + KEY_R
#define SR_UNICODE_EXTRA22	0x0164 // T with caron
#define SR_KEYCODE_EXTRA22 CARON_BITS + KEY_T + SHIFT_MASK
#define SR_UNICODE_EXTRA23	0x0165 // t with caron
#define SR_KEYCODE_EXTRA23 CARON_BITS + KEY_T
#define SR_UNICODE_EXTRA24	0x0102 // A with breve
#define SR_KEYCODE_EXTRA24 BREVE_BITS + KEY_A + SHIFT_MASK
#define SR_UNICODE_EXTRA25	0x0103 // a with breve
#define SR_KEYCODE_EXTRA25 BREVE_BITS + KEY_A
#define SR_UNICODE_EXTRA26	0x016E // U with ring above  TODO: verify
#define SR_KEYCODE_EXTRA26 DEADKEY_DEGREE_SIGN + KEY_U + SHIFT_MASK
#define SR_UNICODE_EXTRA27	0x016F // u with ring above  TODO: verify
#define SR_KEYCODE_EXTRA27 DEADKEY_DEGREE_SIGN + KEY_U
#define SR_UNICODE_EXTRA28	0x0104 // A with ogonek
#define SR_KEYCODE_EXTRA28 OGONEK_BITS + KEY_A + SHIFT_MASK
#define SR_UNICODE_EXTRA29	0x0105 // a with ogonek
#define SR_KEYCODE_EXTRA29 OGONEK_BITS + KEY_A

#define SR_UNICODE_EXTRA30	0x0118 // E with ogonek
#define SR_KEYCODE_EXTRA30 OGONEK_BITS + KEY_E + SHIFT_MASK
#define SR_UNICODE_EXTRA31	0x0119 // e with ogonek
#define SR_KEYCODE_EXTRA31 OGONEK_BITS + KEY_E
#define SR_UNICODE_EXTRA32	0x017B // Z with dot above
#define SR_KEYCODE_EXTRA32 DEADKEY_DOT_ABOVE + KEY_Z + SHIFT_MASK
#define SR_UNICODE_EXTRA33	0x017C // z with dot above
#define SR_KEYCODE_EXTRA33 DEADKEY_DOT_ABOVE + KEY_Z
#define SR_UNICODE_EXTRA34	0x0139 // L with acute
#define SR_KEYCODE_EXTRA34 ACUTE_ACCENT_BITS + KEY_L + SHIFT_MASK
#define SR_UNICODE_EXTRA35	0x013A // l with acute
#define SR_KEYCODE_EXTRA35 ACUTE_ACCENT_BITS + KEY_L
#define SR_UNICODE_EXTRA36	0x0143 // N with acute
#define SR_KEYCODE_EXTRA36 ACUTE_ACCENT_BITS + KEY_N + SHIFT_MASK
#define SR_UNICODE_EXTRA37	0x0144 // n with acute
#define SR_KEYCODE_EXTRA37 ACUTE_ACCENT_BITS + KEY_N
#define SR_UNICODE_EXTRA38	0x0154 // R with acute
#define SR_KEYCODE_EXTRA38 ACUTE_ACCENT_BITS + KEY_R + SHIFT_MASK
#define SR_UNICODE_EXTRA39	0x0155 // r with acute
#define SR_KEYCODE_EXTRA39 ACUTE_ACCENT_BITS + KEY_R

#define SR_UNICODE_EXTRA40	0x015A // S with acute
#define SR_KEYCODE_EXTRA40 ACUTE_ACCENT_BITS + KEY_S + SHIFT_MASK
#define SR_UNICODE_EXTRA41	0x015B // s with acute
#define SR_KEYCODE_EXTRA41 ACUTE_ACCENT_BITS + KEY_S
#define SR_UNICODE_EXTRA42	0x0179 // Z with acute
#define SR_KEYCODE_EXTRA42 ACUTE_ACCENT_BITS + KEY_Z + SHIFT_MASK
#define SR_UNICODE_EXTRA43	0x017A // z with acute
#define SR_KEYCODE_EXTRA43 ACUTE_ACCENT_BITS + KEY_Z
#define SR_UNICODE_EXTRA44	0x0150 // O with double acute
#define SR_KEYCODE_EXTRA44 DOUBLE_ACUTE_BITS + KEY_O + SHIFT_MASK
#define SR_UNICODE_EXTRA45	0x0151 // o with double acute
#define SR_KEYCODE_EXTRA45 DOUBLE_ACUTE_BITS + KEY_O
#define SR_UNICODE_EXTRA46	0x0170 // U with double acute
#define SR_KEYCODE_EXTRA46 DOUBLE_ACUTE_BITS + KEY_u + SHIFT_MASK
#define SR_UNICODE_EXTRA47	0x0171 // u with double acute
#define SR_KEYCODE_EXTRA47 DOUBLE_ACUTE_BITS + KEY_u
#define SR_UNICODE_EXTRA48	0x015E // S with cedilla
#define SR_KEYCODE_EXTRA48 CEDILLA_BITS + KEY_S + SHIFT_MASK
#define SR_UNICODE_EXTRA49	0x015F // s with cedilla
#define SR_KEYCODE_EXTRA49 CEDILLA_BITS + KEY_S

#define SR_UNICODE_EXTRA50	0x201A // single low quote
#define SR_KEYCODE_EXTRA50 KEY_TILDE
#define SR_UNICODE_EXTRA51	0x20AC // euro sign
#define SR_KEYCODE_EXTRA51 KEY_E + ALTGR_MASK



//extern const KEYCODE_TYPE keycodes_ascii[];
//extern const KEYCODE_TYPE keycodes_iso_8859_1[];

#ifdef __cplusplus
} // extern "C"
#endif

#endif
