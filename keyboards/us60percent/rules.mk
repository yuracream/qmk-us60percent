# --- us60percent (RP2040) base rules ---
MCU = RP2040
BOOTLOADER = rp2040

# 最適化（任意だが推奨）
LTO_ENABLE = yes

# VIA/Vial 対応（Vialを使うなら両方ON）
VIA_ENABLE  = yes
VIAL_ENABLE = yes

# そのほか必要に応じて
# CONSOLE_ENABLE = no
# MOUSEKEY_ENABLE = yes
# EXTRAKKEY_ENABLE = yes
