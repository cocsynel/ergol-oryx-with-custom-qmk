#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
  ST_MACRO_19,
  ST_MACRO_20,
  ST_MACRO_21,
  ST_MACRO_22,
  ST_MACRO_23,
  ST_MACRO_24,
  ST_MACRO_25,
  ST_MACRO_26,
  ST_MACRO_27,
  ST_MACRO_28,
};



enum tap_dance_codes {
  DANCE_0,
};

#define DUAL_FUNC_0 LT(15, KC_3)
#define DUAL_FUNC_1 LT(7, KC_F19)
#define DUAL_FUNC_2 LT(6, KC_F23)
#define DUAL_FUNC_3 LT(6, KC_F3)
#define DUAL_FUNC_4 LT(12, KC_F23)
#define DUAL_FUNC_5 LT(5, KC_F17)
#define DUAL_FUNC_6 LT(13, KC_Y)
#define DUAL_FUNC_7 LT(12, KC_T)
#define DUAL_FUNC_8 LT(12, KC_F8)
#define DUAL_FUNC_9 LT(12, KC_S)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    DUAL_FUNC_0,    KC_1,           KC_2,           KC_3,           DUAL_FUNC_1,    DUAL_FUNC_2,    DUAL_FUNC_3,                                    DUAL_FUNC_3,    DUAL_FUNC_4,    DUAL_FUNC_5,    DUAL_FUNC_6,    DUAL_FUNC_7,    DUAL_FUNC_8,    KC_ESCAPE,      
    KC_TAB,         KC_Q,           KC_C,           KC_O,           KC_P,           KC_W,           TG(6),                                          TG(5),          KC_J,           KC_M,           KC_D,           OSL(3),         KC_Y,           KC_AUDIO_VOL_UP,
    TG(1),          KC_A,           MT(MOD_LGUI, KC_S),MT(MOD_LCTL, KC_E),MT(MOD_LALT, KC_N),KC_F,           KC_TAB,                                                                         DUAL_FUNC_9,    KC_L,           MT(MOD_LALT, KC_R),MT(MOD_LCTL, KC_T),MT(MOD_LGUI, KC_I),KC_U,           KC_AUDIO_VOL_DOWN,
    TT(5),          KC_Z,           KC_X,           KC_MINUS,       KC_V,           KC_B,                                           KC_DOT,         KC_H,           KC_G,           KC_COMMA,       KC_K,           KC_AUDIO_MUTE,  
    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_RIGHT_ALT,   TD(DANCE_0),                                                                                                    LGUI(LSFT(KC_S)),MO(2),          KC_LEFT,        KC_RIGHT,       KC_UP,          KC_DOWN,        
    MO(1),          KC_LEFT_CTRL,   LALT(KC_C),                     KC_ENTER,       KC_BSPC,        KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_HASH,        KC_AT,          KC_TRANSPARENT, 
    KC_TRANSPARENT, LSFT(KC_Q),     LSFT(KC_C),     LSFT(KC_O),     LSFT(KC_P),     LSFT(KC_W),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_J),     LSFT(KC_M),     LSFT(KC_D),     KC_EXLM,        LSFT(KC_Y),     KC_TRANSPARENT, 
    KC_TRANSPARENT, LSFT(KC_A),     LSFT(KC_S),     LSFT(KC_E),     LSFT(KC_N),     LSFT(KC_F),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, LSFT(KC_L),     LSFT(KC_R),     LSFT(KC_T),     LSFT(KC_I),     LSFT(KC_U),     KC_TRANSPARENT, 
    KC_TRANSPARENT, LSFT(KC_Z),     LSFT(KC_X),     KC_QUES,        LSFT(KC_V),     LSFT(KC_B),                                     KC_COLN,        LSFT(KC_H),     LSFT(KC_G),     KC_SCLN,        LSFT(KC_K),     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_CIRC,        KC_LABK,        KC_RABK,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AT,          KC_AMPR,        KC_ASTR,        KC_QUOTE,       KC_GRAVE,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LCBR,        KC_LPRN,        KC_RPRN,        KC_RCBR,        KC_EQUAL,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_BSLS,        KC_PLUS,        KC_MINUS,       KC_SLASH,       KC_DQUO,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TILD,        KC_LBRC,        KC_RBRC,        KC_UNDS,        KC_HASH,                                        KC_PIPE,        KC_EXLM,        KC_SCLN,        KC_COLN,        KC_QUES,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_3,     ST_MACRO_4,     KC_TRANSPARENT, ST_MACRO_5,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_11,    KC_UNDS,        OSL(4),         ST_MACRO_12,    KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_6,     ST_MACRO_7,     ST_MACRO_8,     ST_MACRO_9,     KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_LPRN,        KC_RPRN,        ST_MACRO_13,    ST_MACRO_14,    ST_MACRO_15,    KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_10,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 ST_MACRO_16,    KC_TRANSPARENT, KC_TRANSPARENT, KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_17,    ST_MACRO_18,    KC_TRANSPARENT, ST_MACRO_19,    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_25,    KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_20,    ST_MACRO_21,    ST_MACRO_22,    ST_MACRO_23,    KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_26,    ST_MACRO_27,    ST_MACRO_28,    KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_24,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TAB,         KC_KP_7,        KC_KP_8,        KC_KP_9,        LSFT(KC_TAB),   KC_F12,         
    KC_TRANSPARENT, KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_KP_EQUAL,    KC_KP_ASTERISK, KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     KC_LPRN,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_KP_SLASH,    KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_MINUS,    KC_RPRN,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_NUM,         KC_TRANSPARENT, KC_KP_0,        KC_KP_DOT,      KC_KP_COMMA,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_LBRC,        
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_B,           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_LEFT_CTRL,   KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};





extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {204,255,255}, {204,255,255}, {124,255,212}, {124,255,212}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {0,245,245}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {124,255,212}, {204,255,255}, {124,255,212}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {33,255,255}, {204,255,255}, {124,255,212}, {204,255,255}, {204,255,255}, {33,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {33,255,255}, {204,255,255}, {204,255,255}, {0,245,245}, {204,255,255}, {124,255,212}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {124,255,212}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255} },

    [1] = { {217,212,233}, {217,212,233}, {124,255,212}, {124,255,212}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {124,255,212}, {217,212,233}, {124,255,212}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {33,255,255}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {33,255,255}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {33,255,255}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {124,255,212}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {124,255,212}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233}, {217,212,233} },

    [2] = { {171,219,255}, {171,219,255}, {124,255,212}, {124,255,212}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {124,255,212}, {171,219,255}, {124,255,212}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {33,255,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {33,255,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {33,255,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {124,255,212}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {124,255,212}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255}, {171,219,255} },

    [3] = { {85,163,255}, {85,163,255}, {124,255,212}, {124,255,212}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {124,255,212}, {85,163,255}, {124,255,212}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {33,255,255}, {85,163,255}, {0,255,255}, {85,163,255}, {85,163,255}, {33,255,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {33,255,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {124,255,212}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {124,255,212}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255} },

    [4] = { {85,163,255}, {85,163,255}, {124,255,212}, {124,255,212}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {124,255,212}, {85,163,255}, {124,255,212}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {33,255,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {33,255,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {33,255,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {124,255,212}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {124,255,212}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255}, {85,163,255} },

    [5] = { {0,0,255}, {0,0,255}, {124,255,212}, {124,255,212}, {0,0,255}, {0,0,255}, {204,255,255}, {204,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {204,255,255}, {86,184,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,184,255}, {86,184,255}, {0,0,255}, {0,0,255}, {0,0,255}, {204,255,255}, {86,184,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {124,255,212}, {0,0,255}, {124,255,212}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {204,255,255}, {204,255,255}, {0,0,255}, {0,0,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {0,0,255}, {86,184,255}, {86,184,255}, {86,184,255}, {204,255,255}, {0,0,255}, {86,184,255}, {86,184,255}, {86,184,255}, {86,184,255}, {0,0,255}, {86,184,255}, {86,184,255}, {86,184,255}, {124,255,212}, {0,0,255}, {204,255,255}, {204,255,255}, {204,255,255}, {0,0,255}, {124,255,212}, {204,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

    [6] = { {124,255,212}, {124,255,212}, {204,255,255}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {0,255,255}, {124,255,212}, {124,255,212}, {124,255,212}, {0,255,255}, {0,255,255}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {0,255,255}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {204,255,255}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {204,255,255}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {204,255,255}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212}, {124,255,212} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,      
    SINGLE_HOLD,         
    DOUBLE_TAP,          
    DOUBLE_HOLD,         
    DOUBLE_SINGLE_TAP,   
    MORE_TAPS            
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_C));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_X)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_C)); register_code16(LCTL(KC_C));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_X)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_8) ));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_7) SS_TAP(X_KP_1) ));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_8) SS_TAP(X_KP_7) ));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_6) ));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_1) ));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_4) ));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_4) ));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_3) ));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_2) ));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_4) ));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_0) ));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_8) SS_TAP(X_KP_1) ));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_5) SS_TAP(X_KP_1) ));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_8) ));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_9) ));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_9) ));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_3) SS_TAP(X_KP_3) ));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_4) ));
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_9) ));
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_1) SS_TAP(X_KP_2) ));
    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_2) ));
    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_1) ));
    }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_0) ));
    }
    break;
    case ST_MACRO_23:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_2) ));
    }
    break;
    case ST_MACRO_24:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_8) ));
    }
    break;
    case ST_MACRO_25:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_1) SS_TAP(X_KP_9) ));
    }
    break;
    case ST_MACRO_26:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_6) ));
    }
    break;
    case ST_MACRO_27:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_7) ));
    }
    break;
    case ST_MACRO_28:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_1) SS_TAP(X_KP_7) ));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_ESCAPE);
        } else {
          unregister_code16(KC_ESCAPE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_ESCAPE)));
        } else {
          unregister_code16(LCTL(LSFT(KC_ESCAPE)));
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_4);
        } else {
          unregister_code16(KC_4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_DLR);
        } else {
          unregister_code16(KC_DLR);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_5);
        } else {
          unregister_code16(KC_5);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_PERC);
        } else {
          unregister_code16(KC_PERC);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DELETE);
        } else {
          unregister_code16(KC_DELETE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_DELETE));
        } else {
          unregister_code16(LSFT(KC_DELETE));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_6);
        } else {
          unregister_code16(KC_6);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_CIRC);
        } else {
          unregister_code16(KC_CIRC);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_7);
        } else {
          unregister_code16(KC_7);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_AMPR);
        } else {
          unregister_code16(KC_AMPR);
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_8);
        } else {
          unregister_code16(KC_8);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_ASTR);
        } else {
          unregister_code16(KC_ASTR);
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_9);
        } else {
          unregister_code16(KC_9);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_HASH);
        } else {
          unregister_code16(KC_HASH);
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_0);
        } else {
          unregister_code16(KC_0);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_AT);
        } else {
          unregister_code16(KC_AT);
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_Z));
        } else {
          unregister_code16(LCTL(KC_Z));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_Y));
        } else {
          unregister_code16(LCTL(KC_Y));
        }  
      }  
      return false;
    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}

