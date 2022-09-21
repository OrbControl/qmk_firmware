# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

CONSOLE_ENABLE = no         # Console for debug

COMMAND_ENABLE = no         # Commands for debug and configuration

BOOTMAGIC_ENABLE = yes		# Enable Bootmagic Lite

LTO_ENABLE = yes			# Enables Link Time Optimization (LTO) when compiling the keyboard. This makes the process take longer, but it can significantly reduce the compiled size (and since the firmware is small, the added time is not noticeable).

MOUSEKEY_ENABLE = no        # Mouse keys

EXTRAKEY_ENABLE = no		# Audio control and System control

NKRO_ENABLE = yes			# USB N-Key Rollover

BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
