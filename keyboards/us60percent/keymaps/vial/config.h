#pragma once

// --- Vial 必須UID（8バイト） ---
#define VIAL_KEYBOARD_UID { 0xe7, 0xce, 0x8c, 0xcf, 0x62, 0x95, 0x6b, 0xbb }

// --- Vial で使う上限（必要分だけでOK） ---
#define VIAL_TAP_DANCE_ENTRIES 8
#define VIAL_COMBO_ENTRIES     8

// ★RP2040のフラッシュサイズ指定はキーボード本体側で行うのが推奨
//   （例）keyboards/us60percent/config.h にて：
//   #define PICO_FLASH_SIZE_BYTES (1 * 1024 * 1024)
