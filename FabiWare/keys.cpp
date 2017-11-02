
#include "fabi.h"
#include "HID.h"

#define KEY_ADD     0
#define KEY_RELEASE 1

int keyAction=KEY_ADD;

void keyboard_write_unicode(uint16_t cpoint);
int keyboard_press(uint8_t key, uint8_t modifier);
static uint8_t keycode_to_modifier(uint16_t keycode);

// which keys are currently pressed, up to 6 keys (+modifier byte) may be down at once
uint8_t keyboard_keys[8]={0,0,0,0,0,0,0,0};
// currently active keyboard layout
uint8_t locale = LAYOUT_GERMAN;
// is BT enabled? If yes, send keys to Serial BT module
uint8_t btenabled = 0;
// is HID enabled? If yes, send keys to HID
uint8_t hidenabled = 1;

void updateKey(int key)
{
   if (keyAction==KEY_ADD)
   {
      Keyboard.press(key);     // press keys individually 
      btKPress(key);
      //"press" button
      /*Serial1.print("KP");
      Serial1.println((char)key);
      //update HID report
      Serial1.println("KY");*/
   } else {
      Keyboard.release(key);   // release keys individually
      btKRelease(key);
      //"press" button
      /*Serial1.print("KU");
      Serial1.println((char)key);
      //update HID report
      Serial1.println("KY");*/
  }
}


void releaseKeys (char * text)
{
   keyAction=KEY_RELEASE; 
   setKeyValues(text);
   keyAction=KEY_ADD; 
}

int getKeycode(char* acttoken)
{
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_SHIFT")))  return(KEY_LEFT_SHIFT);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_CTRL")))  return(KEY_LEFT_CTRL);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_ALT")))  return(KEY_LEFT_ALT);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_RIGHT_ALT")))  return(KEY_RIGHT_ALT);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_GUI")))  return(KEY_LEFT_GUI);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_RIGHT_GUI")))  return(KEY_RIGHT_GUI);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_UP"))) return(KEY_UP);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_DOWN"))) return(KEY_DOWN);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_LEFT"))) return(KEY_LEFT);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_RIGHT"))) return(KEY_RIGHT);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_ENTER"))) return(KEY_ENTER);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_SPACE"))) return(KEY_SPACE);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_ESC"))) return(KEY_ESC);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_BACKSPACE"))) return(KEY_BACKSPACE);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_TAB"))) return(KEY_TAB);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_CAPS_LOCK"))) return(KEY_CAPS_LOCK);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_F1"))) return(KEY_F1);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_F2"))) return(KEY_F2);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_F3"))) return(KEY_F3);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_F4"))) return(KEY_F4);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_F5"))) return(KEY_F5);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_F6"))) return(KEY_F6);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_F7"))) return(KEY_F7);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_F8"))) return(KEY_F8);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_F9"))) return(KEY_F9);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_F10"))) return(KEY_F10);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_F11"))) return(KEY_F11);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_F12"))) return(KEY_F12);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_INSERT"))) return(KEY_INSERT);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_HOME"))) return(KEY_HOME);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_PAGE_UP"))) return(KEY_PAGE_UP);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_DELETE"))) return(KEY_DELETE);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_END"))) return(KEY_END);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_PAGE_DOWN"))) return(KEY_PAGE_DOWN);

    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_A"))) return(KEY_A);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_B"))) return(KEY_B);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_C"))) return(KEY_C);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_D"))) return(KEY_D);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_E"))) return(KEY_E);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_F"))) return(KEY_F);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_G"))) return(KEY_G);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_H"))) return(KEY_H);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_I"))) return(KEY_I);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_J"))) return(KEY_J);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_K"))) return(KEY_K);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_L"))) return(KEY_L);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_M"))) return(KEY_M);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_N"))) return(KEY_N);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_O"))) return(KEY_O);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_P"))) return(KEY_P);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_Q"))) return(KEY_Q);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_R"))) return(KEY_R);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_S"))) return(KEY_S);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_T"))) return(KEY_T);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_U"))) return(KEY_U);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_V"))) return(KEY_V);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_W"))) return(KEY_W);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_X"))) return(KEY_X);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_Y"))) return(KEY_Y);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_Z"))) return(KEY_Z);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_1"))) return(KEY_1);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_2"))) return(KEY_2);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_3"))) return(KEY_3);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_4"))) return(KEY_4);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_5"))) return(KEY_5);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_6"))) return(KEY_6);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_7"))) return(KEY_7);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_8"))) return(KEY_8);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_9"))) return(KEY_9);
    if (!strcmp_FM(acttoken,(uint_farptr_t_FM)F("KEY_0"))) return(KEY_0);
    
    #ifdef TEENSY     // for Teensy2.0++
      if (!strcmp(acttoken,"KEY_SCROLL_LOCK")) return(KEY_SCROLL_LOCK);
      if (!strcmp(acttoken,"KEY_PAUSE")) return(KEY_PAUSE);
      if (!strcmp(acttoken,"KEY_NUM_LOCK")) return(KEY_NUM_LOCK);
      if (!strcmp(acttoken,"KEY_PRINTSCREEN")) return(KEY_PRINTSCREEN);
    #endif

    return(0);
}

// press all supported keys 
// text is a string which contains the key identifiers eg. "KEY_CTRL KEY_C" for Ctrl-C
void setKeyValues(char* text)
{
  char tmptxt[MAX_KEYSTRING_LEN];   // for parsing keystrings
  char * acttoken;
  int modifiers=0;

  strcpy(tmptxt, text); 
  acttoken = strtok(tmptxt," ");

  while (acttoken)
  {
    int kc=getKeycode(acttoken);
    if (kc) updateKey(kc);
    acttoken = strtok(NULL," ");
  }
}

static uint8_t keycode_to_modifier(uint16_t keycode)
{
	uint8_t modifier=0;

	#ifdef SHIFT_MASK
	if (keycode & SHIFT_MASK) modifier |= MODIFIERKEY_SHIFT;
	#endif
	#ifdef ALTGR_MASK
	if (keycode & ALTGR_MASK) modifier |= MODIFIERKEY_RIGHT_ALT;
	#endif
	#ifdef RCTRL_MASK
	if (keycode & RCTRL_MASK) modifier |= MODIFIERKEY_RIGHT_CTRL;
	#endif
	return modifier;
}

/** decode one character to ASCII/Unicode codepoints
 * 
 * This method decodes input bytes either to
 * single byte ASCII codes
 * OR
 * multibyte sequences of UTF-8
 * 
 * On a completed input decoding, the assembled byte
 * is sent to keyboard_write_unicode.
 * 
 * @see keyboard_write_unicode
 * 
 * @param c input character of input stream
 * 
 * */
void decodeKey(uint8_t c)
{
	static int utf8_state=0;
	static uint16_t unicode_wchar=0;

	if (c < 0x80) {
		// single byte encoded, 0x00 to 0x7F
		utf8_state = 0;
    #ifdef DEBUG_KEYBOARD
    Serial.print("decodeKey, singleByte, 0x");
    Serial.println(c,HEX);
    #endif
		keyboard_write_unicode(c);
	} else if (c < 0xC0) {
		// 2nd, 3rd or 4th byte, 0x80 to 0xBF
		c &= 0x3F;
		if (utf8_state == 1) {
			utf8_state = 0;
      #ifdef DEBUG_KEYBOARD
      Serial.print("decodeKey, UTF, 0x");
      Serial.println(unicode_wchar | c,HEX);
      #endif
			keyboard_write_unicode(unicode_wchar | c);
		} else if (utf8_state == 2) {
			unicode_wchar |= ((uint16_t)c << 6);
			utf8_state = 1;
		}
	} else if (c < 0xE0) {
		// begin 2 byte sequence, 0xC2 to 0xDF
		// or illegal 2 byte sequence, 0xC0 to 0xC1
    #ifdef DEBUG_KEYBOARD
    Serial.println("decodeKey, UTF state = 1");
    #endif
		unicode_wchar = (uint16_t)(c & 0x1F) << 6;
		utf8_state = 1;
	} else if (c < 0xF0) {
		// begin 3 byte sequence, 0xE0 to 0xEF
    #ifdef DEBUG_KEYBOARD
    Serial.println("decodeKey, UTF state = 2");
    #endif
		unicode_wchar = (uint16_t)(c & 0x0F) << 12;
		utf8_state = 2;
	} else {
		// begin 4 byte sequence (not supported), 0xF0 to 0xF4
		// or illegal, 0xF5 to 0xFF
    #ifdef DEBUG_KEYBOARD
    Serial.println("decodeKey, UTF state = 255");
    #endif
		utf8_state = 255;
	}
}


// Step #2: translate Unicode code point to keystroke sequence
//
static uint16_t unicode_to_keycode(uint16_t cpoint)
{
  uint16_t mask = KEYCODE_MASK;
  
  //if necessary, change keycode mask according to locale
  switch(locale)
  {
      case LAYOUT_CANADIAN_MULTILINGUAL:
      //case LAYOUT_CZECH: //TODO: currently unsupported
      //case LAYOUT_SERBIAN://TODO: currently unsupported
        mask = KEYCODE_MASK_FFF;
        break;
      case LAYOUT_ITALIAN:
      case LAYOUT_UNITED_KINGDOM:
        mask = KEYCODE_MASK_FF;
        break;
      case LAYOUT_IRISH:
        mask = KEYCODE_MASK_3FF;
        break;
  }

	// Unicode code points beyond U+FFFF are not supported
	// technically this input should probably be called UCS-2
	if (cpoint < 32) {
		if (cpoint == 10) return KEY_ENTER & mask;
		if (cpoint == 11) return KEY_TAB & mask;
		return 0;
	}
	if (cpoint < 128) {
    #ifdef DEBUG_KEYBOARD
    Serial.print("keycode to ascii, cpoint: ");
    Serial.print(cpoint-0x20,HEX);
    Serial.print(", locale: 0x");
    Serial.println(locale,HEX);
    #endif
		return get_keycode_ascii(cpoint - 0x20, locale);
	}
	if (cpoint >= 0xA0 && cpoint < 0x100) {
    #ifdef DEBUG_KEYBOARD
    Serial.print("keycode to iso, cpoint: ");
    Serial.print(cpoint-0xA0,HEX);
    Serial.print(", locale: 0x");
    Serial.println(locale,HEX);
    #endif
		return get_keycode_iso8859(cpoint - 0xA0, locale);
	}
	return 0;
}

// Step #3: execute keystroke sequence
//
static uint16_t deadkey_to_keycode(uint16_t keycode)
{
	keycode &= DEADKEYS_MASK;
	if (keycode == 0) return 0;

  //deadkeys for US/USINT layout (present in all regions)
  switch(locale)
  {
    case LAYOUT_US_INTERNATIONAL:
      if(keycode == CIRCUMFLEX_BITS) return USINT_DEADKEY_CIRCUMFLEX;
      if(keycode == USINT_ACUTE_ACCENT_BITS) return USINT_DEADKEY_ACUTE_ACCENT;
      if(keycode == USINT_GRAVE_ACCENT_BITS) return USINT_DEADKEY_GRAVE_ACCENT;
      if(keycode == USINT_TILDE_BITS) return USINT_DEADKEY_TILDE;
      if(keycode == USINT_DIAERESIS_BITS) return USINT_DEADKEY_DIAERESIS;
      break;
    case LAYOUT_US_ENGLISH: return 0; //no deadkeys in US English
  }
  
  #ifdef REGION_1
  switch(locale)
  {
    case LAYOUT_CANADIAN_FRENCH:
      if(keycode == CIRCUMFLEX_BITS) return CAFR_DEADKEY_CIRCUMFLEX;
      if(keycode == CAFR_ACUTE_ACCENT_BITS) return CAFR_DEADKEY_ACUTE_ACCENT;
      if(keycode == CAFR_CEDILLA_BITS) return CAFR_DEADKEY_CEDILLA;
      if(keycode == CAFR_DIAERESIS_BITS) return CAFR_DEADKEY_DIAERESIS;
      if(keycode == CAFR_GRAVE_ACCENT_BITS) return CAFR_DEADKEY_GRAVE_ACCENT;
      break;
    case LAYOUT_CANADIAN_MULTILINGUAL:
      if(keycode == CIRCUMFLEX_BITS ) return CAML_DEADKEY_CIRCUMFLEX;
      if(keycode == CAML_ACUTE_ACCENT_BITS ) return CAML_DEADKEY_ACUTE_ACCENT;
      if(keycode == CAML_CEDILLA_BITS ) return CAML_DEADKEY_CEDILLA;
      if(keycode == CAML_DIAERESIS_BITS) return CAML_DEADKEY_DIAERESIS;
      if(keycode == CAML_GRAVE_ACCENT_BITS ) return CAML_DEADKEY_GRAVE_ACCENT;
      if(keycode == CAML_RING_ABOVE_BITS) return CAML_DEADKEY_RING_ABOVE;
      if(keycode == CAML_TILDE_BITS) return CAML_DEADKEY_TILDE;
      break;
    case LAYOUT_UNITED_KINGDOM: return 0; //no deadkeys in UK English
    case LAYOUT_TURKISH:
      if(keycode == CIRCUMFLEX_BITS) return TK_DEADKEY_CIRCUMFLEX;
      if(keycode == TK_ACUTE_ACCENT_BITS) return TK_DEADKEY_ACUTE_ACCENT;
      if(keycode == TK_DIAERESIS_BITS) return TK_DEADKEY_DIAERESIS;
      if(keycode == TK_GRAVE_ACCENT_BITS) return TK_DEADKEY_GRAVE_ACCENT;
      if(keycode == TK_TILDE_BITS) return TK_DEADKEY_TILDE;
      break;
    case LAYOUT_PORTUGUESE_BRAZILIAN:
      if(keycode == CIRCUMFLEX_BITS) return PTBR_DEADKEY_CIRCUMFLEX;
      if(keycode == PTBR_ACUTE_ACCENT_BITS) return PTBR_DEADKEY_ACUTE_ACCENT;
      if(keycode == PTBR_DIAERESIS_BITS) return PTBR_DEADKEY_DIAERESIS;
      if(keycode == PTBR_GRAVE_ACCENT_BITS) return PTBR_DEADKEY_GRAVE_ACCENT;
      if(keycode == PTBR_TILDE_BITS) return PTBR_DEADKEY_TILDE;
      break;
    case LAYOUT_PORTUGUESE:
      if(keycode == CIRCUMFLEX_BITS) return PT_DEADKEY_CIRCUMFLEX;
      if(keycode == PT_ACUTE_ACCENT_BITS) return PT_DEADKEY_ACUTE_ACCENT;
      if(keycode == PT_DIAERESIS_BITS) return PT_DEADKEY_DIAERESIS;
      if(keycode == PT_GRAVE_ACCENT_BITS) return PT_DEADKEY_GRAVE_ACCENT;
      if(keycode == PT_TILDE_BITS) return PT_DEADKEY_TILDE;
      break;
    case LAYOUT_SPANISH_LATIN_AMERICA:
      if(keycode == CIRCUMFLEX_BITS) return ESLAT_DEADKEY_CIRCUMFLEX;
      if(keycode == ESLAT_ACUTE_ACCENT_BITS) return ESLAT_DEADKEY_ACUTE_ACCENT;
      if(keycode == ESLAT_DIAERESIS_BITS) return ESLAT_DEADKEY_DIAERESIS;
      if(keycode == ESLAT_GRAVE_ACCENT_BITS) return ESLAT_DEADKEY_GRAVE_ACCENT;
      break;
  }
  #endif
  
  #ifdef REGION_2
  switch(locale)
  {
    case LAYOUT_SPANISH:
      if(keycode == CIRCUMFLEX_BITS) return ES_DEADKEY_CIRCUMFLEX;
      if(keycode == ES_ACUTE_ACCENT_BITS) return ES_DEADKEY_ACUTE_ACCENT;
      if(keycode == ES_DIAERESIS_BITS) return ES_DEADKEY_DIAERESIS;
      if(keycode == ES_GRAVE_ACCENT_BITS) return ES_DEADKEY_GRAVE_ACCENT;
      if(keycode == ES_TILDE_BITS) return ES_DEADKEY_TILDE;
      break;
    case LAYOUT_DANISH:
      if(keycode == CIRCUMFLEX_BITS) return DK_DEADKEY_CIRCUMFLEX;
      if(keycode == DK_ACUTE_ACCENT_BITS) return DK_DEADKEY_ACUTE_ACCENT;
      if(keycode == DK_DIAERESIS_BITS) return DK_DEADKEY_DIAERESIS;
      if(keycode == DK_GRAVE_ACCENT_BITS) return DK_DEADKEY_GRAVE_ACCENT;
      if(keycode == DK_TILDE_BITS) return DK_DEADKEY_TILDE;
      break;
    case LAYOUT_FINNISH:
      if(keycode == CIRCUMFLEX_BITS) return FI_DEADKEY_CIRCUMFLEX;
      if(keycode == FI_ACUTE_ACCENT_BITS) return FI_DEADKEY_ACUTE_ACCENT;
      if(keycode == FI_DIAERESIS_BITS) return FI_DEADKEY_DIAERESIS;
      if(keycode == FI_GRAVE_ACCENT_BITS) return FI_DEADKEY_GRAVE_ACCENT;
      if(keycode == FI_TILDE_BITS) return FI_DEADKEY_TILDE;
      break;
    case LAYOUT_SWEDISH:
      if(keycode == CIRCUMFLEX_BITS) return SW_DEADKEY_CIRCUMFLEX;
      if(keycode == SW_ACUTE_ACCENT_BITS) return SW_DEADKEY_ACUTE_ACCENT;
      if(keycode == SW_DIAERESIS_BITS) return SW_DEADKEY_DIAERESIS;
      if(keycode == SW_GRAVE_ACCENT_BITS) return SW_DEADKEY_GRAVE_ACCENT;
      if(keycode == SW_TILDE_BITS) return SW_DEADKEY_TILDE;
      break;
    case LAYOUT_ICELANDIC:
      if(keycode == CIRCUMFLEX_BITS) return IC_DEADKEY_CIRCUMFLEX;
      if(keycode == IC_ACUTE_ACCENT_BITS) return IC_DEADKEY_ACUTE_ACCENT;
      if(keycode == IC_DIAERESIS_BITS) return IC_DEADKEY_DIAERESIS;
      if(keycode == IC_GRAVE_ACCENT_BITS) return IC_DEADKEY_GRAVE_ACCENT;
      if(keycode == IC_RING_ABOVE_BITS) return IC_DEADKEY_RING_ABOVE;
      break;
    case LAYOUT_IRISH:
      if(keycode == IR_ACUTE_ACCENT_BITS) return IR_DEADKEY_ACUTE_ACCENT;
      if(keycode == IR_GRAVE_ACCENT_BITS) return IR_DEADKEY_GRAVE_ACCENT;
      break;
    case LAYOUT_NORWEGIAN:
      if(keycode == CIRCUMFLEX_BITS) return NW_DEADKEY_CIRCUMFLEX;
      if(keycode == NW_ACUTE_ACCENT_BITS) return NW_DEADKEY_ACUTE_ACCENT;
      if(keycode == NW_DIAERESIS_BITS) return NW_DEADKEY_DIAERESIS;
      if(keycode == NW_GRAVE_ACCENT_BITS) return NW_DEADKEY_GRAVE_ACCENT;
      if(keycode == NW_TILDE_BITS) return NW_DEADKEY_TILDE;
      break;
  }
  #endif
  
  #ifdef REGION_3
  switch(locale)
  {
    case LAYOUT_FRENCH:
      if(keycode == CIRCUMFLEX_BITS) return FR_DEADKEY_CIRCUMFLEX;
      if(keycode == FR_DIAERESIS_BITS) return FR_DEADKEY_DIAERESIS;
      if(keycode == FR_GRAVE_ACCENT_BITS) return FR_DEADKEY_GRAVE_ACCENT;
      if(keycode == FR_TILDE_BITS) return FR_DEADKEY_TILDE;
      break;
    case LAYOUT_FRENCH_BELGIAN:
      if(keycode == CIRCUMFLEX_BITS) return FRBG_DEADKEY_CIRCUMFLEX;
      if(keycode == FRBG_ACUTE_ACCENT_BITS) return FRBG_DEADKEY_ACUTE_ACCENT;
      if(keycode == FRBG_DIAERESIS_BITS) return FRBG_DEADKEY_DIAERESIS;
      if(keycode == FRBG_GRAVE_ACCENT_BITS) return FRBG_DEADKEY_GRAVE_ACCENT;
      if(keycode == FRBG_TILDE_BITS) return FRBG_DEADKEY_TILDE;
      break;
    case LAYOUT_FRENCH_SWISS:
      if(keycode == CIRCUMFLEX_BITS) return FRSW_DEADKEY_CIRCUMFLEX;
      if(keycode == FRSW_ACUTE_ACCENT_BITS) return FRSW_DEADKEY_ACUTE_ACCENT;
      if(keycode == FRSW_DIAERESIS_BITS) return FRSW_DEADKEY_DIAERESIS;
      if(keycode == FRSW_GRAVE_ACCENT_BITS) return FRSW_DEADKEY_GRAVE_ACCENT;
      if(keycode == FRSW_TILDE_BITS) return FRSW_DEADKEY_TILDE;
      break;
    case LAYOUT_GERMAN:
      if(keycode == CIRCUMFLEX_BITS) return DE_DEADKEY_CIRCUMFLEX;
      if(keycode == DE_ACUTE_ACCENT_BITS) return DE_DEADKEY_ACUTE_ACCENT;
      if(keycode == DE_GRAVE_ACCENT_BITS) return DE_DEADKEY_GRAVE_ACCENT;
      break;
    case LAYOUT_GERMAN_MAC:
      if(keycode == CIRCUMFLEX_BITS) return DEMAC_DEADKEY_CIRCUMFLEX;
      if(keycode == DEMAC_ACUTE_ACCENT_BITS) return DEMAC_DEADKEY_ACUTE_ACCENT;
      if(keycode == DEMAC_DIAERESIS_BITS) return DEMAC_DEADKEY_DIAERESIS;
      if(keycode == DEMAC_GRAVE_ACCENT_BITS) return DEMAC_DEADKEY_GRAVE_ACCENT;
      if(keycode == DEMAC_TILDE_BITS) return DEMAC_DEADKEY_TILDE;
      break;
    case LAYOUT_GERMAN_SWISS:
      if(keycode == CIRCUMFLEX_BITS) return DESW_DEADKEY_CIRCUMFLEX;
      if(keycode == DESW_ACUTE_ACCENT_BITS) return DESW_DEADKEY_ACUTE_ACCENT;
      if(keycode == DESW_DIAERESIS_BITS) return DESW_DEADKEY_DIAERESIS;
      if(keycode == DESW_GRAVE_ACCENT_BITS) return DESW_DEADKEY_GRAVE_ACCENT;
      if(keycode == DESW_TILDE_BITS) return DESW_DEADKEY_TILDE;
      break;
    case LAYOUT_ITALIAN: return 0; //no deadkeys in Italian layout
  }
  #endif
	return 0;
}

static uint8_t keycode_to_key(uint16_t keycode)
{
	uint8_t key = keycode & 0x3F;
	#ifdef KEY_NON_US_100
	if (key == KEY_NON_US_100) key = 100;
	#endif
	return key;
}

// Step #4: do each keystroke
//
static void write_key(uint16_t keycode)
{
  #ifdef DEBUG_KEYBOARD
  Serial.print("writeKey: key: 0x");
  Serial.print(keycode_to_key(keycode),HEX);
  Serial.print(" modifier: 0x");
  Serial.println(keycode_to_modifier(keycode),HEX);
  #endif
  
	keyboard_press(keycode_to_key(keycode), keycode_to_modifier(keycode));
}

int keyboard_press(uint8_t key, uint8_t modifier)
{
  //create HID report
  keyboard_keys[0] = modifier;
  keyboard_keys[1] = 0; //reserved
  keyboard_keys[2] = key;
  keyboard_keys[3] = 0;
  keyboard_keys[4] = 0;
  keyboard_keys[5] = 0;
  keyboard_keys[6] = 0;
  keyboard_keys[7] = 0;
    
  //send to HID keyboard, if enabled
  if(hidenabled) HID().SendReport(2,keyboard_keys,sizeof(keyboard_keys));
  //send to BT module, if enabled
  if(btenabled) btKHIDReport(keyboard_keys);
	return 0;
}

/**
 * send one unicode character to the keyboard
 * 
 * This method takes an unicode character point and
 * converts it to keycode(s).
 * If an additional deadkey is necessary, it is sent too.
 * The output is done via write_key()
 * 
 * @see unicode_to_keycode
 * @see deadkey_to_keycode
 * @see write_key
 * */
void keyboard_write_unicode(uint16_t cpoint)
{
	uint16_t keycode;

	keycode = unicode_to_keycode(cpoint);
  #ifdef DEBUG_KEYBOARD
  Serial.print("writeUnicode: 0x");
  Serial.println(keycode,HEX);
  #endif
	if (keycode) {
		uint16_t deadkeycode = deadkey_to_keycode(keycode);
    #ifdef DEBUG_KEYBOARD
    Serial.print("writeUnicode - deadkey: 0x");
    Serial.println(deadkeycode,HEX);
    #endif
		if (deadkeycode) write_key(deadkeycode);
		write_key(keycode);
	}
}

/** Sends a full string to the HID/BT Keyboard
 * 
 * This method is used to send a string to the keyboard.
 * 
 * @param writeKeystring string to be written
 **/ 
void KeyboardWrite( char * p1)
{
  uint16_t k;
     while (*p1) {
       decodeKey(*p1);
       p1++;
     }
     //release keys
     keyboard_press(0,0);
}

/** Sends a full string to the HID/BT Keyboard - with KEY_xxx constants
 * 
 * This method is used to send a string to the keyboard.
 * Used by AT KW (keyboard write)
 * It is possible to use KEY_XXX constants in this strings,
 * which will be seperated and pressed in addition
 * 
 * @param writeKeystring string to be written
 **/ 
void KeyboardWriteWithConstants(char * writeKeystring)
{
    char tmp[MAX_KEYSTRING_LEN]; 
    char * p1, *p2, *p3;
    strcpy (tmp,writeKeystring);
    p1=tmp;
    p2=strstr(p1,"KEY_");
    while (p2)
    { 
       p3=p2; while ((*p3!=' ') && (*p3)) p3++; 
       if (*p3) {*p3=0; p3++;}
       int kc= getKeycode(p2);
       *p2=0; 
       if (p1!=p2) KeyboardWrite(p1);
       if (kc) { KeyboardWrite(kc); }
       p1=p3; if (*p1) p2=strstr(p1,"KEY_"); else p2=0;
    }
    KeyboardWrite(p1);
}

