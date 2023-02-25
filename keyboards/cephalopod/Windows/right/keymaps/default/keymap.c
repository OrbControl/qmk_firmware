#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *    ┌───┬───┬───┬───┐  ┌───┬───┬───┬───┐
     *    │F5 │F6 │F7 │F8 │  │F9 │F10│F11│F12│
     *    └───┴───┴───┴───┘  └───┴───┴───┴───┘
     *   ┌───┬───┬───┬───┬───┬───┬───┬───────┐
     *   │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │Backspc│
     *   └─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
     *     │ Y │ U │ I │ O │ P │ [ │ ] │  \  │
     *     └┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
     *      │ H │ J │ K │ L │ ; │ ' │  Enter │
     *      └─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
     *        │ N │ M │ , │ . │ / │    Shift │
     * ┌──────┴───┴┬──┴─┬─┴──┬┴───┼────┬─────┤
     * │           │ Del│ Alt│ GUI│Caps│ Ctrl│
     * └───────────┴────┴────┴────┴────┴─────┘
     */
    [0] = LAYOUT_right(
        KC_F5,   KC_F6,   KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F12,
        KC_6,    KC_7,    KC_8,     KC_9,     KC_0,     KC_MINS,  KC_F11,
        KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_EQL,
        KC_H,    KC_J,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_BSPC,
        KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_BSLS,
        KC_SPC,  KC_DEL, KC_RALT,  KC_RGUI,  KC_CAPS,  KC_RCTL,  KC_RBRC,
                                                                  KC_ENT
    )
};
