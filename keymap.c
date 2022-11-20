#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _UP
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT_5x6_5(
  /* BASE
   * .-----------------------------------------.                                                          .-----------------------------------------.
   * |   `  |   1  |   2  |   3  |   4  |   5  |                                                          |   6  |   7  |   8  |   9  |   0  |   -  |
   * |------+------+------+------+------+------|                                                          |------+------+------+------+------+------|
   * | CAPS |   q  |   w  |   e  |   r  |   t  |                                                          |   y  |   u  |   i  |   o  |   p  |   \  |
   * |------+------+------+------+------+------|                                                          |------+------+------+------+------+------|
   * |  TAB |   a  |   s  |   d  |   f  |   g  |                                                          |   h  |   j  |   k  |   l  |   ;  |   '  |
   * |------+------+------+------+------+------|                                                          |------+------+------+------+------+------|
   * | MO(1)|   z  |   x  |   c  |   v  |   b  |                                                          |   n  |   m  |   ,  |   .  |   /  |OSL(1)|
   * '-----------------------------------------/                                                          \-----------------------------------------'
   *               |      |      |    /       /---------------.                            .---------------\       \    |      |      |
   *               |  Win |  Alt |   / shift /       /       /                              \       \       \   bks \   |  alt | Win  |
   *               '-------------'  '-------/   spc /  ctrl /                                \   esc \  ent  \-------'  '-------------'
   *                                       /---------------/                                  \---------------\
   *                                      /       /       /                                    \       \       \
   *                                     /   del /  esc  /                                      \   prsc\  n/a  \
   *                                    '---------------'                                        '---------------'
   */
   KC_GRAVE, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                                         KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS  ,
   KC_CAPS , KC_Q	, KC_W   , KC_E   , KC_R   , KC_T   ,                                         KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSLS  ,
   KC_TAB  , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                                         KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT  ,
   MO(_UP) , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                                         KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, OSL(_UP) ,
                     KC_LGUI , KC_LALT,          KC_LSFT, KC_SPC , KC_LCTL,     KC_RCTL, KC_ENT, KC_BSPC ,          KC_RALT, KC_RGUI,
                                                          KC_DEL, KC_ESC ,     KC_PSCR, XXXXXXX
   ),

  [_UP] = LAYOUT_5x6_5(
  /* ADJUST
   * .-----------------------------------------.                                                          .-----------------------------------------.
   * |  RST |      |      |      |      |      |                                                          |      |      |      |      |      |      |
   * |------+------+------+------+------+------|                                                          |------+------+------+------+------+------|
   * |      |      |      |      |   V+ |      |                                                          |      |      |      |      |   [  |      |
   * |------+------+------+------+------+------|                                                          |------+------+------+------+------+------|
   * |      |      |      |      |   V- |      |                                                          |   <  |   ^  |  V   |  >   |   ]  |  =   |
   * |------+------+------+------+------+------|                                                          |------+------+------+------+------+------|
   * |      |      | prev |  fwd | play | Mute |                                                          |      |      |      |      |      |      |
   * '-----------------------------------------/                                                          \-----------------------------------------'
   *               |      |      |    /       /---------------.                            .---------------\       \    |      |      |
   *               |      |      |   /       /       /       /                              \       \       \       \   |      |      |
   *               '-------------'  '-------/       /       /                                \       \       \-------'  '-------------'
   *                                       /---------------/                                  \---------------\
   *                                      /       /       /                                    \       \       \
   *                                     /       /       /                                      \       \       \
   *                                    '---------------'                                        '---------------'
   */
   QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX , XXXXXXX, XXXXXXX,
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLU, XXXXXXX,                                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX , KC_LBRC, XXXXXXX,
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLD, XXXXXXX,                                         KC_LEFT, KC_UP  , KC_DOWN, KC_RIGHT, KC_RBRC, KC_EQL ,
   XXXXXXX, XXXXXXX, KC_MPRV, KC_MNXT, KC_MPLY, KC_MUTE,                                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX , XXXXXXX, XXXXXXX,
                     _______, _______,          _______, _______, _______,     _______, _______, _______,          XXXXXXX, XXXXXXX ,
                                                _______, _______,     XXXXXXX, XXXXXXX
   )

};