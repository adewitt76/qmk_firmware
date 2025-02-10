/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <sys/types.h>
#include QMK_KEYBOARD_H

const uint16_t PROGMEM pipe_combo[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM dash_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM underscore_combo[] = {KC_C, KC_V, COMBO_END};

const uint16_t PROGMEM escape_combo[] = {KC_J, KC_K, COMBO_END};

combo_t key_combos[] = {
    COMBO(pipe_combo, KC_PIPE),
    COMBO(dash_combo, KC_MINS),
    COMBO(underscore_combo, KC_UNDS),
    COMBO(escape_combo, KC_ESC)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
       KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
LCTL_T(KC_TAB),    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, RCTL_T(KC_QUOT),
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
                                 KC_LGUI, KC_LALT, LT(1, KC_SPC),   LT(2, KC_ENT),  KC_RALT, KC_RGUI
  ),

    [1] = LAYOUT_split_3x6_3(
        KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_DEL,
LCTL_T(KC_TAB), XXXXXXX, KC_LPRN, KC_LBRC, KC_LCBR, KC_HOME,                      KC_PGUP, KC_RCBR, KC_RBRC, KC_RPRN, XXXXXXX, KC_RCTL,
       KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_END,                      KC_PGDN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_RSFT,
                                         KC_LGUI,  KC_LALT,  KC_SPC,   LT(3, KC_ENT),  KC_RALT, KC_RGUI
  ),

    [2] = LAYOUT_split_3x6_3(
       KC_ESC, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, XXXXXXX,
LCTL_T(KC_TAB), KC_UNDS, KC_PLUS, KC_MINS, KC_EQL, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_BSLS, RCTL_T(KC_GRV),
      KC_LSFT, KC_PIPE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, RSFT_T(KC_TILD),
                                  KC_LGUI,   KC_LALT, LT(3, KC_SPC),     KC_ENT, KC_RALT, KC_RGUI
  ),

    [3] = LAYOUT_split_3x6_3(
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,
       XXXXXXX, XXXXXXX,RM_TOGG, RM_HUEU, RM_SATU, RM_VALU,                        KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,
       XXXXXXX, XXXXXXX,RM_NEXT, RM_HUED, RM_SATD, RM_VALD,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                          XXXXXXX, XXXXXXX, _______,    _______, XXXXXXX, XXXXXXX
  )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif
