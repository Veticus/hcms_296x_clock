# hcms_296x_clock
A desk/nightstand clock using Avago HCMS-296x series 4-digit 5*7 LED Displays.
![alt text](https://forthebadge.com/images/badges/you-didnt-ask-for-this.svg "idunno")


### Usage with a Particle Photon on a breadboard
#### Stuff needed for basic breadboard tinkering
- Broadcom/Avago HCMS-296x series display
- Breadboard
- Particle Photon
- A handfull of dupont-type wires
- A microUSB cable for the Photon

#### The hardware steps
###### (I'm assuming you know how to use a breadboard)
1. Plug the Photon and the display into the breadboard
2. Connect pin _4_ of the display to the _D0_ pin on the Photon
3. Connect pin _5_ to _D1_
4. Connect pin _6_ to _D2_
5. Connect pin _7_ to _D3_
6. Connect pin _12_ to _D4_
7. Connect pins _8 and 9_ to GND
8. Connect pins _3, 10 and 11_ to VCC/Vin
9. Take a sip of water/tea/coffee/Club Mate
10. Plug the Photon into a USB port


#### The software steps
1. Launch the [[Particle Web IDE](https://build.particle.io/build/new)]
 or use the [[Particle Desktop IDE (Dev)](https://docs.particle.io/tutorials/developer-tools/dev/#download)]
2. Give your App a title
3. Download or clone this repository
4. Copy the files into your Particle project
5. Chose the right device to upload to
6. Upload and flash
7. Enjoy! And happy tinkering!

**Note: Lines 33 and 34 disable the built-in LED. This helps with nightstand use, but may throw you off. Just comment them out, or use ``RGB.brightness()`` to dim the LED**


### Now what?
Check out the ``LedDisplay.h``file, to see what else you can do with these magnificent little displays. I suggest connecting a bunch of them. Just connect everything in parallel, except for the dataPin (Pin 4).
From right to left connect the displays from Pin 4 to Pin 1.
(Pin 1 being "dataOut" while Pin 4 is "dataIn"). Check the datasheet linked below.

You might also have some fun with editing the font file or making animations.


## Links to more information
[Datasheet for the HCMS-29xxseries](https://sigma.octopart.com/23295/datasheet/Avago-HCMS-2973.pdf)

Some great examples can be found in PaulStoffregen's Arduino Library for the displays: [GitHub - PaulStoffregen/LedDisplay](https://github.com/PaulStoffregen/LedDisplay)


## Acknowledgments
- Tom Idoe, who wrote the control library in 2009
- Pascal Stang, who wrote the 5x7 font in 2001
- Mark 'Robotto' Moore, who tested this for me <3
- Paul Stoffregen, for the Ardunio library and examples

## License
See the ``LICENSE`` file.
