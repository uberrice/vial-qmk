#include QMK_KEYBOARD_H

enum layers { LAYER_BASE, LAYER_NAV, LAYER_MEDIA, LAYER_EXTRA };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[LAYER_BASE] = LAYOUT(KC_MUTE, KC_MPLY, MO(LAYER_NAV), KC_NO, KC_NO, KC_NO),

                                                              [LAYER_NAV] = LAYOUT(KC_ESC, KC_ENT, KC_TRNS, KC_NO, KC_NO, KC_NO),

                                                              [LAYER_MEDIA] = LAYOUT(KC_MPRV, KC_MNXT, TO(LAYER_BASE), KC_NO, KC_NO, KC_NO),

                                                              [LAYER_EXTRA] = LAYOUT(KC_NO, KC_NO, TO(LAYER_BASE), KC_NO, KC_NO, KC_NO)};

#if defined(ENCODER_MAP_ENABLE)

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {[LAYER_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(KC_PGDN, KC_PGUP)},

                                                         [LAYER_NAV] = {ENCODER_CCW_CW(KC_WH_D, KC_WH_U), ENCODER_CCW_CW(KC_DOWN, KC_UP), ENCODER_CCW_CW(KC_TAB, S(KC_TAB))},

                                                         [LAYER_MEDIA] = {ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_BRID, KC_BRIU)},

                                                         [LAYER_EXTRA] = {ENCODER_CCW_CW(KC_NO, KC_NO), ENCODER_CCW_CW(KC_NO, KC_NO), ENCODER_CCW_CW(KC_NO, KC_NO)}};

#endif
