# FABI Hardware Addons

This folder contains any additional piece of software hardware or gadget to increase the usability of the FABI box.
Since we use a plain Arduino Pro Micro, these addons are fitted on the corresponding and available pin headers.


## BT-module

The BT module is an ESP32 based addon board for the FABI box. It is placed via pin headers (please do not solder directly, as it is likely that the USB port will break some day) on the supply & serial pins.
This folder here contains the KiCAD design files for PCB production.
Please refer to [esp32_mouse_keyboard](https://github.com/asterics/esp32_mouse_keyboard) repository for the corresponding source code.

This design was done in KiCAD __v5.1.6__. Please use a version equal or newer.
