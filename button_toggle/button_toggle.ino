#define BUTTON_PIN 3
#define LED_PIN 2

void setup(void) {

   pinMode(BUTTON_PIN, INPUT_PULLUP);
   pinMode(LED_PIN,OUTPUT);
}

void loop(void) {
static byte toggle_sw_memmory=0;

   // Check for keypress
   if ( !digitalRead(BUTTON_PIN) ) {          // Pulled up so zero = hit.

      toggle_sw_memmory = !toggle_sw_memmory;

      if (toggle_sw_memmory)
         digitalWrite(LED_PIN,HIGH);
      else
         digitalWrite(LED_PIN,LOW);

      while(!digitalRead(BUTTON_PIN)); // wait for low
   }

}
