#include QMK_KEYBOARD_H
#include "raw_hid.h"
#include "quantum.h"

#define ____ KC_TRNS
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_h(
    KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7
  ),

  [1] = LAYOUT_h(
    _______,  _______,  _______,  _______,  _______,  _______,  _______
  ),

  [2] = LAYOUT_h(
    _______,  _______,  _______,  _______,  _______,  _______,  _______
  ),

  [3] = LAYOUT_h(
    _______,  _______,  _______,  _______,  _______,  _______,  _______
  )

};

/*
void raw_hid_receive_kb(uint8_t *data, uint8_t length) {
    if(data[0] == 0xFC){
        switch (data[1]) {
            case 0x01:{
                // move to layer
                data[1] = 0xFD;
                layer_move(data[2]);
                break;
            }
            case 0x02:{
                // turn on layer
                data[1] = 0xFD;
                layer_on(data[2]);
                break;
            }
            case 0x03:{
                // turn off layer
                data[1] = 0xFD;
                layer_off(data[2]);
                break;
            }
        }
    }
    raw_hid_send(data, length);
}
*/
