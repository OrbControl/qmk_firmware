#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *    ┌───┬───┬───┬───┐  ┌───┬───┬───┬───┐
     *    │F5 │F6 │F7 │F8 │  │F9 │F10│F11│F12│
     *    └───┴───┴───┴───┘  └───┴───┴───┴───┘
     *   ┌───┬───┬───┬───┬───┬───┬───┬───────┐
     *   │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│
     *   └─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤ 
     *     │ Y │ U │ I │ O │ P │ [ │ ] │  \  │
     *     └┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
     *      │ H │ J │ K │ L │ ; │ ' │  Enter │
     *      └─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
     *        │ N │ M │ , │ . │ / │    Shift │
     * ┌──────┴───┴┬──┴─┬─┴──┬┴───┼────┬─────┤
     * │           │    │ Alt│ GUI│Menu│ Ctrl│
     * └───────────┴────┴────┴────┴────┴─────┘
     */
    [0] = LAYOUT(
        KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,

        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
                 KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,
        KC_SPC,                    KC_SPC,  KC_RALT, KC_RGUI, KC_APP,  KC_RCTL,
    )
};
