#pragma once
#include "config_common.h"

/* 行列サイズ（info.json と一致） */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/* ダイオード方向（info.json と一致） */
#define DIODE_DIRECTION COL2ROW

/* デバウンス等（必要に応じて） */
// #define DEBOUNCE 5

/* Vial のアンロックコンボを全キーマップで共通にするなら、ここに置く
   （既に keymaps/vial/config.h にあるなら重複しないよう片方にだけ定義） */
// #define VIAL_UNLOCK_COMBO_ROWS { 0, 4 }
// #define VIAL_UNLOCK_COMBO_COLS { 0, 13 }
