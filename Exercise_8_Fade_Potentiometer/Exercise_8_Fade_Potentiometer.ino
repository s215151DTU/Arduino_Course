const int RED_PIN = 9;
const int GREEN_PIN = 10;
const int BLUE_PIN = 11;
int redVal = 0;
int greenVal = 0;
int blueVal = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(RED_PIN,OUTPUT);
  pinMode(GREEN_PIN,OUTPUT);
  pinMode(BLUE_PIN,OUTPUT);

  Serial.println("Enter RGB values as 'R,G,B' (e.g., 255,100,50):");
  

}

void loop() {
  
long aVal = analogRead(A0);
long brightness = map(aVal, 0, 1023, 0, 255);

  if (Serial.available() > 0) {
    // Read the Red, Green, and Blue values
    redVal = Serial.parseInt();  // Read the first number
    greenVal = Serial.parseInt();  // Read the second number
    blueVal = Serial.parseInt();  // Read the third number

    // Print the results
    Serial.print("Red: ");
    Serial.println(redVal);
    Serial.print("Green: ");
    Serial.println(greenVal);
    Serial.print("Blue: ");
    Serial.println(blueVal);


    delay(100);

    analogWrite(RED_PIN,redVal);
    analogWrite(GREEN_PIN,greenVal);
    analogWrite(BLUE_PIN,blueVal);
  }
  // delay(1000);
  
//Serial.print("Analog Value is: ");
//Serial.println(brightness);
analogWrite(BLUE_PIN,brightness);
  // if (redVal!= 0){
  //   while (blueVal<255){
  //     blueVal++;
  //     Serial.print("Blue: ");
  //     Serial.println(blueVal);
  //     analogWrite(BLUE_PIN,blueVal);
  //     delay(25);
  //   }

  // }

  
}
