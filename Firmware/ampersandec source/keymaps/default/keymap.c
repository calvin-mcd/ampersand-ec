/* Copyright 2023 Cipulot
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
    [0] = LAYOUT(
        KC_ESC,   KC_Q,     KC_W,     KC_E,     KC_R,   KC_T,    KC_Y,    KC_U,   KC_I,      KC_O,    KC_P,   KC_P,     KC_BSPC,
		KC_TAB,   KC_A,     KC_S,     KC_D,     KC_F,   KC_G,    KC_H,    KC_J,   KC_K,      KC_L,    KC_SCLN, KC_SCLN,  KC_ENT,
		KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,   KC_B,    KC_N,    KC_M,   KC_COMM,   KC_DOT,  KC_DOT,  KC_RSFT,
                            KC_LALT,  KC_LCTL,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_RCTL,  KC_RCTL)
    // clang-format on
};
