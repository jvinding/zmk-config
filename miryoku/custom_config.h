#define MIRYOKU_CLIPBOARD_MAC

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,              &kp F,              &kp P,              &kp G,              &kp J,               &kp L,              &kp U,              &kp Y,              SQT,                 \
U_MT(LCTRL, A),    U_MT(LALT, R),      U_MT(LGUI, S),      U_MT(LSHFT, T),     U_MT(HYPR, D),      U_MT(HYPR, H),       U_MT(RSHFT, N),     U_MT(RGUI, E),      U_MT(RALT, I),      U_MT(RCTRL, O),      \
U_LT(U_BUTTON, Z), &kp X,              &kp C,              &kp V,              &kp B,              &kp K,               &kp M,              KC_COMM,            KC_DOT,             U_LT(U_BUTTON,SLASH),\
U_NP,              U_NP,               U_LT(U_FUN,DEL),    U_LT(U_NUM,BSPC),   U_LT(U_SYM,RET),    U_LT(U_MOUSE,KC_TAB),U_LT(U_NAV,SPACE),  U_LT(U_MEDIA,ESC),  U_NP,               U_NP

#define MIRYOKU_LAYER_EXTRA \
&kp Q,             &kp W,              &kp E,              &kp R,              &kp T,              &kp Y,               &kp U,              &kp I,              &kp O,              &kp P,               \
U_MT(LCTRL, A),    U_MT(LALT, S),      U_MT(LGUI, D),      U_MT(LSHFT, F),     U_MT(HYPR, G),      U_MT(HYPR, H),       U_MT(RSHFT, J),     U_MT(RGUI, K),      U_MT(RALT, L),      U_MT(RCTRL, SQT),    \
U_LT(U_BUTTON, Z), &kp X,              &kp C,              &kp V,              &kp B,              &kp N,               &kp M,              KC_COMM,            KC_DOT,             U_LT(U_BUTTON,SLASH),\
U_NP,              U_NP,               U_LT(U_FUN,DEL),    U_LT(U_NUM,BSPC),   U_LT(U_SYM,RET),    U_LT(U_MOUSE,KC_TAB),U_LT(U_NAV,KC_SPC), U_LT(U_MEDIA,ESC),  U_NP,               U_NP

#define MIRYOKU_LAYER_TAP \
&trans,            &trans,             &trans,             &trans,             &trans,             &trans,              &trans,             &trans,             &trans,             &trans,              \
U_MT(LGUI, A),     &trans,             U_MT(LCTRL, S),     &trans,             &trans,             &trans,              &trans,             U_MT(RCTRL, E),     &trans,             U_MT(RGUI, O),       \
&trans,            &trans,             &trans,             &trans,             &trans,             &trans,              &trans,             &trans,             &trans,             &trans,              \
U_NP,              U_NP,               &trans,             &trans,             &trans,             &trans,              &trans,             &trans,             U_NP,               U_NP

#define MIRYOKU_LAYER_NAV \
&kp PD_UP,         &kp HOME,           &kp UP,             &kp END,            &kp INS,            U_NA,                &u_to_U_BASE,       &u_to_U_EXTRA,      &u_to_U_TAP,        U_BOOT,              \
&kp PG_DN,         &kp LEFT,           &kp DOWN,           &kp RGHT,           CW_TOGG,            &kp HYPR,            &kp RSFT,           &kp RGUI,           &kp RALT,           &kp RCTL,            \
U_UND,             U_CUT,              U_CPY,              U_PST,              U_RDO,              U_NA,                &u_to_U_NAV,        &u_to_U_NUM,        U_NA,               U_NA,                \
U_NP,              U_NP,               DEL,                BSPC,               RET,                U_NA,                U_NA,               U_NA,               U_NP,               U_NP

#define MIRYOKU_LAYER_MOUSE \
U_WH_U,            U_WH_L,             U_MS_U,             U_WH_R,             U_NU,               U_NA,                &u_to_U_BASE,       &u_to_U_EXTRA,      &u_to_U_TAP,        U_BOOT,              \
U_WH_D,            U_MS_L,             U_MS_D,             U_MS_R,             U_NU,               &kp HYPR,            &kp RSHFT,          &kp RCTRL,          &kp RALT,           &kp RGUI,            \
U_UND,             U_CUT,              U_CPY,              U_PST,              U_RDO,              U_NA,                &u_to_U_MOUSE,      &u_to_U_SYM,        U_NP,               U_NA,                \
U_NP,              U_NP,               U_BTN3,             U_BTN1,             U_BTN2,             U_NA,                U_NA,               U_NA,               U_NP,               U_NP

#define MIRYOKU_LAYER_MEDIA \
U_RGB_HUI,         U_RGB_SAI,          &kp C_VOL_UP,       U_RGB_BRI,          U_RGB_TOG,          U_NA,                &u_to_U_BASE,       &u_to_U_EXTRA,      &u_to_U_TAP,        U_BOOT,              \
U_RGB_EFF,         &kp C_PREV,         &kp C_VOL_DN,       &kp C_NEXT,         U_EP_TOG,           &kp HYPR,            &kp RSHFT,          &kp RGUI,           &kp RALT,           &kp RGUI,            \
&u_bt_sel_0,       &u_bt_sel_1,        &u_bt_sel_2,        &u_bt_sel_3,        &u_out_tog,         U_NA,                &u_to_U_MEDIA,      &u_to_U_FUN,        U_NP,               U_NA,                \
U_NP,              U_NP,               &kp C_MUTE,         &kp C_PP,           &kp C_STOP,         U_NA,                U_NA,               U_NA,               U_NP,               U_NP

#define MIRYOKU_LAYER_NUM \
U_BOOT,            &u_to_U_TAP,        &u_to_U_EXTRA,      &u_to_U_BASE,       MO(U_NUMPAD),       &kp LBKT,            &kp N7,             &kp N8,             &kp N9,             &kp RBKT,            \
&kp LGUI,          &kp LALT,           &kp LCTRL,          &kp LSHFT,          &kp HYPR,           &kp EQUAL,           &kp N4,             &kp N5,             &kp N6,             &kp SEMI,            \
U_NA,              U_NU,               &u_to_U_NAV,        &u_to_U_NUM,        U_NA,               &kp BSLH,            &kp N1,             &kp N2,             &kp N3,             &kp GRAVE,           \
U_NP,              U_NP,               U_NA,               U_NA,               U_NA,               &kp MINUS,           &kp N0,             &kp DOT,            U_NP,               U_NP

#define MIRYOKU_LAYER_NUMPAD \
U_BOOT,            &u_to_U_TAP,        &u_to_U_EXTRA,      &u_to_U_BASE,       U_NA,               &kp KP_SLASH,        &kp KP_N7,          &kp KP_N8,          &kp KP_N9,          &kp KP_MINUS,        \
kp LGUI,           &kp LALT,           &kp LCTRL,          &kp LSHFT,          &kp HYPR,           &kp KP_ASTERISK,     &kp KP_N4,          &kp KP_N5,          &kp KP_N6,          &kp KP_PLUS,         \
U_NA,              U_NU,               &u_to_U_NAV,        &u_to_U_NUM,        U_NA,               &kp KP_ENTER,        &kp KP_N1,          &kp KP_N2,          &kp KP_N3,          &kp KP_EQUAL,        \
U_NP,              U_NP,               U_NA,               U_NA,               U_NA,               BSPC,                &kp KP_N0,          &kp KP_DOT,         U_NP,               U_NP

#define MIRYOKU_LAYERMAPPING_NUMPAD MIRYOKU_MAPPING

#define MIRYOKU_LAYER_SYM \
U_BOOT,            &u_to_U_TAP,        &u_to_U_EXTRA,      &u_to_U_BASE,       U_NA,               &kp LBRC,            &kp AMPS,           &kp ASTRK,          &kp LPAR,          &kp RBRC,             \
&kp LGUI,          &kp LALT,           &kp LCTRL,          &kp LSHFT,          &kp HYPR,           &kp PLUS,            &kp DLLR,           &kp PRCNT,          &kp CARET,         &kp COLON,            \
U_NA,              U_NP,               &u_to_U_MOUSE,      &u_to_U_SYM,        U_NA,               &kp PIPE,            &kp EXCL,           &kp AT,             &kp HASH,          &kp TILDE,            \
U_NP,              U_NP,               U_NA,               U_NA,               U_NA,               &kp UNDER,           &kp LPAR,           &kp RPAR,           U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
U_BOOT,            &u_to_U_TAP,        &u_to_U_EXTRA,      &u_to_U_BASE,       U_NA,               &kp PSCRN,           &kp F7,             &kp F8,             &kp F9,            &kp F12,              \
&kp LGUI,          &kp LALT,           &kp LCTRL,          &kp LSHFT,          &kp HYPR,           &kp SLCK,            &kp F4,             &kp F5,             &kp F6,            &kp F11,              \
U_NA,              U_NP,               &u_to_U_MEDIA,      &u_to_U_FUN,        U_NA,               &kp PAUSE_BREAK,     &kp F1,             &kp F2,             &kp F3,            &kp F10,              \
U_NP,              U_NP,               U_NA,               U_NA,               U_NA,               &kp TAB,             &kp SPACE,          &kp K_APP,          U_NP,              U_NP
