/*
Important information:

  i) To convert reading taken from LM35 into degrees Celsius, use this equation:
      TemperatureInC = (<Sensor Reading> * 500) / 1023
      
  ii) Use the following LDR readings to control the 3 white LEDs:
        -> If reading is less than 255, then turn on all 3 LEDs,
        -> If reading is less than 511 but greater than or equal to 255, then turn on two LEDs, and third will remain turned off,
        -> If reading is less than 767 but greater than or equal to 511, then turn on one LED, and the other two will remain turned off,
        -> If reading is greater than or equal to 767, then all 3 LEDs will turn off.

  iii) You MUST add a 40 milliseconds delay at the end of main iteration (void loop()) of your code!!!
*/

// Type Team's Name Here: 

void setup() {
  //Initialize all the LEDs with their respective pin numbers here:

}

void loop() {
  //Take readings from the two sensors and make use of conditional statements to control the LEDs the way you're asked to do so here:

}