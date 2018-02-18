#include "Myth.h"
#include "keymap_uk.h"

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QW 0
#define _KP 1
#define _FN 2


enum planck_keycodes {
  QWERTY = SAFE_RANGE,
  KEYPAD,
  FN,
  BACKLIT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-------------------------------------------------------------------------------------------------. ,---------------------------.
 * |  ^   |   ~  |   _  |   {  |   }  |   [  |   ]  |   <  |   >  |   (  |   )  |  &   |   \  |  |   | |   £  |   #  |   %  |  $   |
 * |------+------+------+------+------+-------------+------+------+------+------+------+------+------| |------+------+------+------|
 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  `   |   @  | Bksp | |   7  |   8  |   9  |  +   |
 * |------+------+------+------+------+-------------+------+------+------+------+------+------+------| |------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   "  |  :   |   ;  | Del  | |   4  |   5  |   6  |  -   |
 * |------+------+------+------+------+------|------+------+------+------+------+------+------+------| |------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   !  |   ?  |  ,   |  '   |  Up  |Enter | |   1  |   2  |   3  |  *   |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------| |------+------+------+------|
 * | Ctrl | Caps | Alt  | GUI  |    Space    |    Space    |    Space    | Shift| Left | Down |Right | |   0  |   .  |   =  |  /   |
 * `-------------------------------------------------------------------------------------------------' `---------------------------'
 */

 [_QW] = KEYMAP(
	    KC_CIRC, UK_TILD, KC_UNDS, KC_LCBR, KC_RCBR,       KC_LBRC,       KC_RBRC, KC_LABK, KC_RABK,       KC_LPRN,       KC_RPRN, KC_AMPR, UK_BSLS, UK_PIPE, \
		KC_ESC,  KC_Q,	  KC_W,    KC_E,    KC_R,          KC_T,          KC_Y,    KC_U,    KC_I,          KC_O,          KC_P,    KC_GRV,  UK_AT,   KC_BSPC, \
		KC_TAB,  KC_A,	  KC_S,    KC_D,    KC_F,          KC_G,          KC_H,    KC_J,    KC_K,          KC_L,          UK_QUOT, KC_COLN, KC_SCLN, KC_DEL,  \
		KC_LSFT, KC_Z,	  KC_X,    KC_C,    KC_V,          KC_B,          KC_N,    KC_M,    KC_EXLM,       KC_QUES,       KC_COMM, KC_QUOT, KC_UP,   KC_ENT,  \
		KC_LCTL, KC_LCAP, KC_LALT, KC_LGUI, LT(1, KC_SPC), LT(1, KC_SPC), KC_SPC,  KC_SPC,  LT(2, KC_SPC), LT(2, KC_SPC), KC_RSFT, KC_LEFT, KC_DOWN, KC_RGHT, \
																																								UK_PND,  UK_HASH, KC_PERC, KC_DLR, \
																																								KC_7,    KC_8,    KC_9,    KC_PLUS,\
																																								KC_4,    KC_5,    KC_6,    KC_MINS,\
																																								KC_1,    KC_2,    KC_3,    KC_ASTR,\
																																								KC_0,    KC_DOT,  KC_EQL,  KC_SLSH),


/* Keypad
 * ,-------------------------------------------------------------------------------------------------. ,---------------------------.
 * |  ^   |   ~  |   _  |   {  |   }  |   [  |   ]  |   <  |   >  |   (  |   )  |  &   |   \  |  |   | |      |   #  |   %  |  $   |
 * |------+------+------+------+------+-------------+------+------+------+------+------+------+------| |------+------+------+------|
 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  `   |   @  | Bksp | |   7  |   8  |   9  |  +   |
 * |------+------+------+------+------+-------------+------+------+------+------+------+------+------| |------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   "  |  :   |   ;  | Del  | |   4  |   5  |   6  |  -   |
 * |------+------+------+------+------+------|------+------+------+------+------+------+------+------| |------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   !  |   ?  |Pause |PntScn|Pg Up |Enter | |   1  |   2  |   3  |  *   |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------| |------+------+------+------|
 * | Ctrl | Caps | Alt  | GUI  |    Space    |    Space    |    Space    | Shift| Home |Pg Dn |End   | |   0  |   .  |   =  |  /   |
 * `-------------------------------------------------------------------------------------------------' `---------------------------'
 */

 [_KP] = KEYMAP(
		KC_CIRC, UK_TILD, KC_UNDS, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_LABK, KC_RABK, KC_LPRN, KC_RPRN, KC_AMPR, UK_BSLS, BACKLIT, \
		KC_ESC,  KC_Q,	  KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_GRV,  UK_AT,   KC_BSPC, \
		KC_TAB,  KC_A,	  KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    UK_QUOT, KC_COLN, KC_SCLN, KC_DEL,  \
		KC_LSFT, KC_Z,	  KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_EXLM, KC_QUES, KC_PAUS, KC_PSCR, KC_PGUP, KC_ENT,  \
		KC_LCTL, KC_LCAP, KC_LALT, KC_LGUI, KC_TRNS, KC_TRNS, KC_SPC,  KC_SPC,  KC_TRNS, KC_TRNS, KC_RSFT, KC_HOME, KC_PGDN, KC_END,  \
																																		UK_EURO, UK_HASH, KC_PERC, KC_DLR ,\
																																		KC_P7,   KC_P8,   KC_P9,   KC_PLUS,\
																																		KC_P4,   KC_P5,   KC_P6,   KC_MINS,\
																																		KC_P1,   KC_P2,   KC_P3,   KC_ASTR,\
																																		KC_P0,   KC_DOT,  KC_EQL,  KC_SLSH),


/* Fn
 * ,-------------------------------------------------------------------------------------------------. ,---------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  |  F11 |  F12 |   \  |  |   | |   £  |   #  |   %  |  $   |
 * |------+------+------+------+------+-------------+------+------+------+------+------+------+------| |------+------+------+------|
 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  `   |   @  | Bksp | |   7  |   8  |   9  |  +   |
 * |------+------+------+------+------+-------------+------+------+------+------+------+------+------| |------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   "  |  :   |   ;  | Del  | |   4  |   5  |   6  |  -   |
 * |------+------+------+------+------+------|------+------+------+------+------+------+------+------| |------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   !  |   ?  |  ,   |  '   |  Up  |Enter | |   1  |   2  |   3  |  *   |
 * |------+------+------+------+------+------+------+------+------+------+------+------+------+------| |------+------+------+------|
 * | Ctrl | Caps | Alt  | GUI  |    Space    |    Space    |    Space    | Shift| Left | Down |Right | |   0  |   .  |   =  |  /   |
 * `-------------------------------------------------------------------------------------------------' `---------------------------'
 */

[_FN] = KEYMAP(
		KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  UK_BSLS, UK_PIPE, \
		KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_GRV,  UK_AT,   KC_BSPC, \
		KC_TAB,  KC_A,	  KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    UK_QUOT, KC_COLN, KC_SCLN, KC_DEL,  \
		KC_LSFT, KC_Z,	  KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_EXLM, KC_QUES, KC_COMM, KC_QUOT, KC_UP,   KC_ENT,  \
		KC_LCTL, KC_LCAP, KC_LALT, KC_LGUI, KC_TRNS, KC_TRNS, KC_SPC,  KC_SPC,  KC_TRNS, KC_TRNS, KC_RSFT, KC_LEFT, KC_DOWN, KC_RGHT, \
																																		UK_PND,  UK_HASH, KC_PERC, KC_DLR ,\
																																		KC_7,    KC_8,    KC_9,    KC_PLUS,\
																																		KC_4,    KC_5,    KC_6,    KC_MINS,\
																																		KC_1,    KC_2,    KC_3,    KC_ASTR,\
																																		KC_0,    KC_DOT,  KC_EQL,  KC_SLSH),


};



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case BACKLIT:
      if (record->event.pressed) {
        register_code(KC_RSFT);
        #ifdef BACKLIGHT_ENABLE
          backlight_step();
        #endif
      } else {
        unregister_code(KC_RSFT);
      }
      return false;
      break;
  }
  return true;
}