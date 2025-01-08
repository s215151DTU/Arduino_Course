/*
  Alternate Blink
  Turns on one LED on for one second while the other is off, then
  reverses the LEDs for 1 second, repeatedly.
  Dr. Purdum, 11/13/2014
  */
// Given each LED pin a name and don't let it be changed by the program:
const int LEDRED = 9;
const int LEDYELLOW = 10;
const int LEDGREEN = 11;
long counter = 0;
// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pins as an output.
  pinMode(LEDRED, OUTPUT);
  pinMode(LEDYELLOW, OUTPUT);
  pinMode(LEDGREEN, OUTPUT);
}
// the loop routine runs over and over again forever:
void loop() {
  if (counter % 3 == 0){
  digitalWrite(LEDRED, HIGH); // turn LED on (HIGH is the voltage level = 5V = ON)
  digitalWrite(LEDYELLOW, LOW); // turn LED off by making the voltage LOW (= 0V = OFF)
  digitalWrite(LEDGREEN, LOW); // turn LED off by making the voltage LOW (= 0V = OFF)
  }
  if (counter % 3 == 1){
  digitalWrite(LEDRED, LOW); // turn LED on (HIGH is the voltage level = 5V = ON)
  digitalWrite(LEDYELLOW, HIGH); // turn LED off by making the voltage LOW (= 0V = OFF)
  digitalWrite(LEDGREEN, LOW); // turn LED off by making the voltage LOW (= 0V = OFF)
  }
  if (counter % 3 == 2){
  digitalWrite(LEDRED, LOW); // turn LED on (HIGH is the voltage level = 5V = ON)
  digitalWrite(LEDYELLOW, LOW); // turn LED off by making the voltage LOW (= 0V = OFF)
  digitalWrite(LEDGREEN, HIGH); // turn LED off by making the voltage LOW (= 0V = OFF)
  }
  delay(1000);
  counter++;
}





