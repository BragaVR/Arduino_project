  const int pinLed =10; // il numero di pin dove è collegato il led
  const int pinLuminosità = A0;  // Il pin dove collego dalla fotoresistenza

  int luminosità = 0; //il valore della resistenza


void setup() {
  pinMode (pinLed,OUTPUT);

}

void loop() {
  luminosità = analogRead(pinLuminosità);  //lettura della luminosità

  analogWrite (pinLed,luminosità * (255.0/1023.0); //mettiamo il valore letto x il led
  delay (10); //aspetta 10 ms
}
