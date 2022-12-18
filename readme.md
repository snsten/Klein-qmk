# klein

![klein](imgur.com image replace me!)

_A short description of the keyboard/project_

- Keyboard Maintainer: [ssh](https://github.com/snsten)
- Hardware Supported: Klein v1 PCB, Pro Micro, KB2040
- Hardware Availability: [github](https://github.com/snsten/Klein)

Make example for this keyboard (after setting up your build environment):

    make klein:default

Flashing example for this keyboard:

    make klein:default:flash

For Pro Micro

    qmk flash -kb klein -km default

For KB2040

    qmk flash -kb klein/kb2040 -km default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

- **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
- **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
- **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
