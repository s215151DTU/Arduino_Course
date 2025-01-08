# define UNIT 333
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

  digitalWrite(LED_BUILTIN, HIGH);  // S
  delay(UNIT);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(UNIT);                      
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(UNIT);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(UNIT); 
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(UNIT);                      
  digitalWrite(LED_BUILTIN, LOW);   
 
  delay(UNIT*3);                  // space between letters

  digitalWrite(LED_BUILTIN, HIGH);  // O
  delay(UNIT*3); 
  digitalWrite(LED_BUILTIN, LOW);   
  delay(UNIT); 
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(UNIT*3); 
  digitalWrite(LED_BUILTIN, LOW);   
  delay(UNIT);
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(UNIT*3); 
  digitalWrite(LED_BUILTIN, LOW);   

  delay(UNIT*3);                  // space between letters

  digitalWrite(LED_BUILTIN, HIGH);  // S
  delay(UNIT);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(UNIT);                      
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(UNIT);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(UNIT); 
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(UNIT);                      
  digitalWrite(LED_BUILTIN, LOW);   
  
  delay(UNIT*7);                  // space between words


}

// the loop function runs over and over again forever
void loop() {
 

  digitalWrite(LED_BUILTIN, HIGH);  // D
  delay(UNIT*3);                      // 1 long
  digitalWrite(LED_BUILTIN, LOW);   
  delay(UNIT);                      
  for (int i=0; i<2; i++){
    digitalWrite(LED_BUILTIN, HIGH);  // 2 short
    delay(UNIT); 
    digitalWrite(LED_BUILTIN, LOW);   
    delay(UNIT); }
  delay(UNIT*2);                  // space between letters

  digitalWrite(LED_BUILTIN, HIGH);  // A
  delay(UNIT);                      // 1 short
  digitalWrite(LED_BUILTIN, LOW);   
  delay(UNIT); 
  digitalWrite(LED_BUILTIN, HIGH);  //1 long
  delay(UNIT*3); 
  digitalWrite(LED_BUILTIN, LOW);   
 
  delay(UNIT*3);                  // space between letters

  for (int i=0; i<3; i++)  {          // V
    digitalWrite(LED_BUILTIN, HIGH);  // 3 short
    delay(UNIT); 
    digitalWrite(LED_BUILTIN, LOW);   
    delay(UNIT);}
  digitalWrite(LED_BUILTIN, HIGH);    // 1 long
  delay(UNIT*3); 
  digitalWrite(LED_BUILTIN, LOW);   


  delay(UNIT*3);                  // space between letters

  for (int i=0; i<2; i++){         // I
    digitalWrite(LED_BUILTIN, HIGH);  // 2 short
    delay(UNIT); 
    digitalWrite(LED_BUILTIN, LOW);   
    delay(UNIT);}
  
  digitalWrite(LED_BUILTIN, LOW);   

  delay(UNIT*3);                  // space between letters

  digitalWrite(LED_BUILTIN, HIGH);  // D
  delay(UNIT*3);                      // 1 long
  digitalWrite(LED_BUILTIN, LOW);   
  delay(UNIT);                      
  for (int i=0; i<2; i++){
    digitalWrite(LED_BUILTIN, HIGH);  // 2 short
    delay(UNIT); 
    digitalWrite(LED_BUILTIN, LOW);   
    delay(UNIT);}
  
  
  delay(UNIT*7);                  // space between words


}
