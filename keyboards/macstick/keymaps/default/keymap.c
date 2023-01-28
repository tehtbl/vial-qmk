// Copyright 2023 TBL (@tehtbl)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes {
    QMKTEST = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_h(
      QMKTEST, KC_O, KC_O, KC_L, KC_E, KC_Y, KC_A
    )

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
      case QMKTEST:
          if (record->event.pressed) {
              // when keycode QMKTEST is pressed
              SEND_STRING("QMK Macro Test /wo VIA!");
          } else {
              // when keycode QMKBEST is released
          }
          break;
      }
    return true;
};
