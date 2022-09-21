#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐     ┌───┬───┬───┐
     * │PSc│Scr│Ply│     │Mut│Vdn│Vup│
     * └───┴───┴───┘     └───┴───┴───┘
     * ┌───┬───┬───┐ ┌───┬───┬───┬───┐
     * │Ins│Hom│PgU│ │Bks│ / │ * │ - │
     * ├───┼───┼───┤ ├───┼───┼───┼───┤
     * │Del│End│PgD│ │ 7 │ 8 │ 9 │   │
     * └───┴───┴───┘ ├───┼───┼───┤ + │
     *               │ 4 │ 5 │ 6 │   │
     *     ┌───┐     ├───┼───┼───┼───┤
     *     │ ↑ │     │ 1 │ 2 │ 3 │   │
     * ┌───┼───┼───┐ ├───┴───┼───┤Ent│
     * │ ← │ ↓ │ → │ │   0   │ . │   │
     * └───┴───┴───┘ └───────┴───┴───┘
     */
    [0] = LAYOUT(
        KC_PSCR, KC_SCRL, KC_MPLY,              KC_MUTE, KC_VOLD, KC_VOLU

        KC_INS,  KC_HOME, KC_PGUP,    KC_BSPC,  KC_PSLS, KC_PAST, KC_PMNS,
        KC_DEL,  KC_END,  KC_PGDN,    KC_P7,    KC_P8,   KC_P9,   KC_PPLS,
        KC_P4,   KC_P5,   KC_P6,
        KC_UP,                        KC_P1,    KC_P2,   KC_P3,   KC_PENT,
        KC_LEFT, KC_DOWN, KC_RGHT,    KC_P0,             KC_PDOT
    )
};
