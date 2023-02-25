#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┐  ┌───┬───┬───┬───┐
     * │Esc│  │F1 │F2 │F3 │F4 │
     * └───┘  └───┴───┴───┴───┘
     * ┌───┬───┬───┬───┬───┬───┐
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┐
     * │ Tab │ Q │ W │ E │ R │ T │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┐
     * │ Caps │ A │ S │ D │ F │ G │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┐
     * │ Shift  │ Z │ X │ C │ V │ B │
     * ├─────┬──┴─┬─┴──┬┴───┼───┴───┴───┐
     * │Ctrl │OPT │CMD │Bksp│   Space   │
     * └─────┴────┴────┴────┴───────────┘
     */
    [0] = LAYOUT_left(
        KC_ESC,             KC_F1,    KC_F2,   KC_F3,   KC_F4,
        KC_GRV,   KC_1,     KC_2,     KC_3,    KC_4,    KC_5,
        KC_TAB,   KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,
        KC_CAPS,  KC_A,     KC_S,     KC_D,    KC_F,    KC_G,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,    KC_V,    KC_B,
        KC_LCTL,  KC_LOPT,  KC_LCMD,  KC_BSPC,          KC_SPC
    )
};
