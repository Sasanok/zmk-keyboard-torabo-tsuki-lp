/*
 * JIS Mac配列用キーコード定義
 * Mac JIS配列でSymbolキーが正しくマッピングされるように定義
 *
 * 注: このファイルはkeymap.keymapより後にインクルードされるため、
 * ZMKのキーコード定義を直接使用できます。
 */

#pragma once

/* JIS配列での記号キー定義 (Mac用) */

// JIS配列では @ は LBKT位置
#define JA_AT LBKT

// JIS配列での [ ] は専用キー
#define JA_LBKT RBKT
#define JA_RBKT BSLH

// JIS配列での { } は Shift + [ ]
#define JA_LBRC LS(RBKT)
#define JA_RBRC LS(BSLH)

// JIS配列での ; : は専用キー
#define JA_SEMI SEMI
#define JA_COLON LS(SEMI)

// JIS配列での ' " は Shift+7, Shift+2
#define JA_SQT LS(N7)
#define JA_DQT LS(N2)

// JIS配列での - _ = +
#define JA_MINUS MINUS
#define JA_UNDER LS(INT_RO) // ろ/_ キー
#define JA_EQUAL LS(MINUS)  // Shift + -
#define JA_PLUS LS(SEMI)    // Shift + ;

// JIS配列での \ | (¥キー)
#define JA_BSLH INT_YEN
#define JA_PIPE LS(INT_YEN)

// JIS配列での ` ~
#define JA_GRAVE LS(LBKT)  // Shift+@
#define JA_TILDE LS(EQUAL) // Shift+^

// JIS固有キー
#define JA_CARET EQUAL // ^ キー
#define JA_YEN INT_YEN // ¥ キー
