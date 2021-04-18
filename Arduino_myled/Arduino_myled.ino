//  far lampeggiare un led con fotoresistenza attaccata al pin 5

  #define LED 
  int led = 5;
  int luminosità = 0;
  int fotoresistenza = 5;

void setup() {
  pinMode(LED, OUTPUT);     // imposta il pin  come output
}

void loop() {
  analogWrite(LED, luminosità);  // accende il LED
  luminosità = luminosità + fotoresistenza; 
  if (luminosità == 0 || luminosità ==255){  //cambio la direzione di fading
    fotoresistenza = fotoresistenza;            
  }
  delay(60);
}
