# featurecreep_keyboard
1980s mechanical keyboard to USB keyboard/mouse/serial, with room for expansion

The original keyboard stopped being a keyboard, and I blamed it on the 8051. I desoldered it, took some photos, spent a few hours in GIMP tracing it, and then wired to a Teensy3.1. Sure, I could have used multiplexers, but I really just wanted it to work. 

The first commit is the result of a mess of working on it in my spare time. It could all be handled better.

Joystick is a PSP controller replacement.

Possible Additions:
Orangepi in the case. There is enough room.
Switch for US or Dvorak layout. 
LiPo batteries with I2C interface.
Small OLED display for dummy terminal.
DIP switches in the back for settings.
Buck and boost converters to charge batteries from any barrel jack power source.
Fe1.1s USB hub chips to embed more hardware into it.
Etc.
