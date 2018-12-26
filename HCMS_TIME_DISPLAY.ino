//  ---- HCMS_TIME_DISPLAY.ino -----
//  By Tim Engel
//  https://github.com/Veticus
//
//
//  Setup of this demo:
//  Pin purpose     DevPin      Pin on Display
//
//  dataPin         - D0    - HCMS-2963 PIN4
//  registerSelect   -D1    - HCMS-2963 PIN5
//  clockPin         -D2    - HCMS-2963 PIN6
//  enable           -D3    - HCMS-2963 PIN7
//  reset            -D4    - HCMS-2963 PIN12
//  LedDisplay method takes 5 pins and an integer.
//  The last integer is the number of chars.
//  The other pins are as indicated here - in the order indicated.
//
//  The font is defined in the font5x7.h file



#include "LedDisplay.h"

LedDisplay myDisplay = LedDisplay(D0, D1, D2, D3, D4, 8);

void setup() {
  myDisplay.begin();
  myDisplay.setBrightness(15);  // Brightness of the display(s) from 0 to 15
  RGB.control(true);  // Allows us to controll the Particle RGB status LED.
  RGB.brightness(0);  // Turns the Particle RBG status LED off
}
void loop() {
  time_t time = Time.now();   // Gets the current time as a time_t type object.
  Time.zone(+1);              // Sets the timezone (relative to GMT)
  Time.format(time, TIME_FORMAT_DEFAULT);   // Allows the time display format to be defined.
  myDisplay.home();           // Sets the displays cursor to the first position.
  myDisplay.print(Time.format(Time.now(), "%H:%M:%S"));   // Format adheres to strftime
}
