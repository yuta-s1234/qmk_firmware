/* Copyright 2019 e3w2q
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  SEND_00 = SAFE_RANGE,
  SEND_000
};

enum encoder_number {
    _1ST_ENC = 0,
    _2ND_ENC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Default Layer
   *  Master Side (USB Cable Connected Side)
   *  ,-----------------------------------------
   *  | NmLK    .  Esc   F1   F2   F3   F4   F5 
   *  |  KP5  KP0 Hank    1    2    3    4    5 
   *  |  KP4  KP9  Tab    Q    W    E    R    T 
   *  |  KP3  KP8 Caps    A    S    D    F    G 
   *  |  KP2  KP7 Shft    Z    W    C    V    B 
   *  |  KP1  KP6 Ctrl  GUI  Alt MHEN Spce Spce 
   *  `-----------------------------------------
   *  Slave Side (USB Cable Not Connected Side)
   *  ,-----------------------------------------
   *  |   F6   F7   F8   F9  F10  F11  F12  Del 
   *  |    6    7    8    9    0    -    =   BS 
   *  |    Y    U    I    O    P    [    ]    \ 
   *  |    H    J    K    L    ;    ' Entr Entr 
   *  |    N    M    ,    .    / Shft   Up MO(1)
   *  | Spce  HEN KANA  Alt  App Left Down Rght 
   *  `-----------------------------------------
   */

  [0] = LAYOUT( /* Base */ 
    KC_NLCK,  KC_PDOT,  KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    
    KC_P5,    KC_P0,    KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     
    KC_P4,    KC_P9,    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     
    KC_P3,    KC_P8,    KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     
    KC_P2,    KC_P7,    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     
    KC_P1,    KC_P6,    KC_LCTL,  KC_LGUI,  KC_LALT,  KC_MHEN,  KC_SPC,   KC_SPC,   

    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,   
    KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  
    KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  
    KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,   KC_ENT,   
    KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    MO(1),    
    KC_SPC,   KC_HENK,  KC_KANA,  KC_RALT,  KC_APP,   KC_LEFT,  KC_DOWN,  KC_RGHT   
  ),

  [1] = LAYOUT(
    RGB_TOG,  RGB_MOD,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    RGB_HUI,  RGB_SAI,  RGB_VAI,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    RGB_HUD,  RGB_SAD,  RGB_VAD,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  EEP_RST,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  RESET,    

    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX   
  ),

  [2] = LAYOUT(
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  

    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX   
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case SEND_00:
      if (record->event.pressed) {
        // when keycode SEND_00 is pressed
        SEND_STRING("00");
      } else {
        // when keycode SEND_00 is released
      }
      break;
    case SEND_000:
      if (record->event.pressed) {
        // when keycode SEND_000 is pressed
        //SEND_STRING("000" SS_TAP(X_ENTER));
        SEND_STRING("000");
      } else {
        // when keycode SEND_000 is released
      }
      break;
  }
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}

bool encoder_update_user(uint8_t index, bool clockwise) {
    switch (index) {
      case _1ST_ENC:
        if (clockwise) {
          tap_code(KC_PGDOWN);
        } else {
          tap_code(KC_PGUP);
        }
        break;
      case _2ND_ENC:
        if (clockwise) {
          tap_code(KC_VOLU);
        } else {
          tap_code(KC_VOLD);
        }
        break;
    }
    return true;
}

