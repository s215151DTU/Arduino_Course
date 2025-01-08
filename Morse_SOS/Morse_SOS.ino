# define UNIT 333
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);


}

// the loop function runs over and over again forever
void loop() {
 

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
