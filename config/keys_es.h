#pragma once
#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>


// Aliases
#define ES_MORD GRAVE  // º
#define ES_1    N1    // 1
#define ES_2    N2    // 2
#define ES_3    N3    // 3
#define ES_4    N4    // 4
#define ES_5    N5    // 5
#define ES_6    N6    // 6
#define ES_7    N7    // 7
#define ES_8    N8    // 8
#define ES_9    N9    // 9
#define ES_0    N0    // 0
#define ES_QUOT MINUS // '
#define ES_IEXL EQUAL  // ¡
#define ES_Q    Q    // Q
#define ES_W    W    // W
#define ES_E    E    // E
#define ES_R    R    // R
#define ES_T    T    // T
#define ES_Y    Y    // Y
#define ES_U    U    // U
#define ES_I    I    // I
#define ES_O    O    // O
#define ES_P    P    // P
#define ES_GRV  LBKT // ` (dead)
#define ES_PLUS RBKT // +
#define ES_A    A    // A
#define ES_S    S    // S
#define ES_D    D    // D
#define ES_F    F    // F
#define ES_G    G    // G
#define ES_H    H    // H
#define ES_J    J    // J
#define ES_K    K    // K
#define ES_L    L    // L
#define ES_NTIL SEMI  // Ñ
#define ES_ACUT SQT   // ´ (dead)
#define ES_CCED NUHS // Ç
#define ES_LABK NUBS // <
#define ES_Z    Z    // Z
#define ES_X    X    // X
#define ES_C    C    // C
#define ES_V    V    // V
#define ES_B    B    // B
#define ES_N    N    // N
#define ES_M    M    // M
#define ES_COMM SLASH      // ,
#define ES_DOT  DOT        // .
#define ES_MINS SLASH      // -
#define ES_FORD S(ES_MORD) // ª
#define ES_EXLM S(ES_1)    // !
#define ES_DQUO S(ES_2)    // "
#define ES_BULT S(ES_3)    // ·
#define ES_DLR  S(ES_4)    // $
#define ES_PERC S(ES_5)    // %
#define ES_AMPR S(ES_6)    // &
#define ES_SLSH S(ES_7)    // /
#define ES_LPRN S(ES_8)    // (
#define ES_RPRN S(ES_9)    // )
#define ES_EQL  S(ES_0)    // =
#define ES_QUES S(ES_QUOT) // ?
#define ES_IQUE S(ES_IEXL) // ¿
#define ES_CIRC S(ES_GRV)  // ^ (dead)
#define ES_ASTR S(ES_PLUS) // *
#define ES_DIAE S(ES_ACUT) // ¨ (dead)
#define ES_RABK S(ES_LABK) // >
#define ES_SCLN S(ES_COMM) // ;
#define ES_COLN S(ES_DOT)  // :
#define ES_UNDS S(ES_MINS) // _
#define ES_BSLS RA(ES_MORD) // (backslash)
#define ES_PIPE RA(ES_1)    // |
#define ES_AT   RA(ES_2)    // @
#define ES_HASH RA(ES_3)    // #
#define ES_TILD RA(ES_4)    // ~
#define ES_EURO RA(ES_5)    // €
#define ES_NOT  RA(ES_6)    // ¬
#define ES_LBRC RA(ES_GRV)  // [
#define ES_RBRC RA(ES_PLUS) // ]
#define ES_LCBR RA(ES_ACUT) // {
#define ES_RCBR RA(ES_CCED) // }