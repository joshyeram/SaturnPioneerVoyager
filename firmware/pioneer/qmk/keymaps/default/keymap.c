// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include <stdio.h>
#include QMK_KEYBOARD_H
#define _BASE 0
#define _NUMBER 1
#define _SYMBOL 2
#define _EE 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_ortho_4x12(
    KC_ESC,                KC_Q,                KC_W,           KC_E,           KC_R,           KC_T,                               KC_Y,                  KC_U,                 KC_I,               KC_O,                 KC_P,             KC_BSPC,
    KC_TAB,                KC_A,                KC_S,           KC_D,           KC_F,           KC_G,                               KC_H,                  KC_J,                 KC_K,               KC_L,                 KC_SCLN,          KC_QUOT,
    LCTL_T(KC_LEFT_SHIFT), KC_Z,                KC_X,           KC_C,           KC_V,           KC_B,                               KC_N,                  KC_M,                 KC_COMM,            KC_DOT,               KC_SLSH,          KC_RIGHT_SHIFT,
                                                                KC_LCTL,        KC_SPC,         MO(_SYMBOL),                        MO(_NUMBER),           KC_LEFT_ALT                                  
    ),                                                                                     
    [_NUMBER] = LAYOUT_ortho_4x12(                                                                     
    KC_GRAVE,              KC_1,                KC_2,           KC_3,           KC_4,          KC_5,                                KC_6,                  KC_7,                 KC_8,               KC_9,                 KC_0,             KC_BSPC,
    KC_NO,                 KC_NO,               KC_NO,          KC_NO,          KC_NO,         KC_NO,                               KC_NO,                 KC_MS_BTN1,           KC_MS_UP,           KC_MS_BTN2,           KC_WH_U,          KC_NO,
    KC_LEFT_SHIFT,         KC_NO,               KC_NO,          KC_NO,          KC_NO,         KC_NO,                               KC_NO,                 KC_MS_LEFT,           KC_MS_DOWN,         KC_MS_RIGHT,          KC_WH_D,          KC_RIGHT_SHIFT,
                                                                KC_LCTL,        KC_SPC,        KC_NO,                               KC_TRANSPARENT,        KC_LEFT_ALT       
    ),                                 
    [_SYMBOL] = LAYOUT_ortho_4x12(                         
    KC_TAB,                 KC_PRINT_SCREEN,    TG(_EE),        KC_NO,          QK_BOOTLOADER, LCTL(S(KC_T)),                       KC_LEFT_BRACKET,       KC_RIGHT_BRACKET,     KC_MINUS,           KC_EQUAL,             KC_BACKSLASH,     KC_DELETE,
    KC_CAPS_LOCK,           LCTL(KC_A),         LCTL(KC_S),     KC_NO,          LCTL(KC_F),    A(KC_F4),                            KC_AUDIO_VOL_UP,       KC_MEDIA_PREV_TRACK,  KC_UP,              KC_MEDIA_NEXT_TRACK,  KC_NO,            KC_ENTER,
    KC_LEFT_SHIFT,          LCTL(KC_Z),         LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),    DB_TOGG,                             KC_AUDIO_VOL_DOWN,     KC_LEFT,              KC_DOWN,            KC_RIGHT,             KC_NO,            KC_RIGHT_SHIFT,
                                                                KC_LCTL,        KC_LEFT_ALT,   KC_TRANSPARENT,                      KC_MEDIA_PLAY_PAUSE,   KC_LEFT_ALT
    ),
    [_EE] = LAYOUT_ortho_4x12(                         
    KC_NO,                  KC_NO,              KC_NO,          TG(_BASE),      KC_NO,         QK_BOOTLOADER,                       QK_REBOOT,             KC_NO,                KC_NO,              KC_NO,                 KC_NO,           KC_NO,
    KC_NO,                  KC_NO,              KC_NO,          KC_NO,          KC_NO,         KC_NO,                               KC_NO,                 KC_NO,                KC_NO,              KC_NO,                 KC_NO,           KC_NO,
    KC_NO,                  KC_NO,              KC_NO,          KC_NO,          KC_NO,         KC_NO,                               KC_NO,                 KC_NO,                KC_NO,              KC_NO,                 KC_NO,           KC_NO,
                                                                KC_NO,          KC_NO,         KC_NO,                               KC_NO,                 KC_NO
    )
};
