# Building a Moai

_(Under construction)_

## Bill of Materials

* 1x Moai PCB (see Kicad file)
* 1x Moai Plate (see Kicad file)
* 1x Wood middle layer
  * Laser-cut from a 3.3mm width panel, see `middle_later.dxf` on `build_files/` folder for the design.
  * Optionally 3mm laser-cut acrylic can be used instead, but the results are not as good (it can move a bit defeating its purpose, and maybe a drop of glue is needed to keep it in place)
* 1x Low profile microcontroller
  * 0xCB Helios, Frood RP2040, Elite-Pi, Elite-C LowProfile, etc. It should be able to be soldered flat on top of the pcb with components up (so no components on the bottom) and height has to be about 3mm.
  * I tried 0xCB, Frood and Elite-Pi and those three worked well.
* 34x 1N4148 Diodes
  * Could be either through hole or SMD as the PCB supports both
* 34x MX compatible switches
* 34x Keycaps
  * 30x 1U Alphas
  * 4x 1.25U Modifiers (Preferably R1 if not flat profile)

## 1. Preparing PCB and Plate

Using Acrylic ink pen, paint the outer border of the plate and the PCB.
...

## 2. Soldering the Diodes

The PCB supports both through the hole or smd diodes, and both abobe and below the PCB.

Keep in mind that the PCB is bare from below, so maybe better to solder the diodes above the pcb instead of below.

Please also take special care in the orientation of the soldered diodes, the 4 thumb keys have them reversed compared to the rest of the keys.

If using trough hole diodes, use a flush cutter to cut the excess leads.
...

## 4. Soldering the switches

> **Optional:** Use also a flush cutter to cut the excess heigh of the pins. I tried and feels amazing once everything is soldered, buuuut it can potentially ruin 34 switches; not recommended for the faint of heart.
...

## 5. Keycaps

> **Word of advice** : The distance between each pair of thumb keys is tenths of a millimeter less than the standard for 1.25U keys, this is intentional. I have found no incompatibilities in any keycap profiles thrown at it (Cherry, MDA/XVX, XDA, SDA, MT3, etc) from several vendors, but your milleage may vary.
