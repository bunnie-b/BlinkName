// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function represents the SOS signals, where the first set of signals are for the letter "B", the next set of signals are for the letter "A", the next set of signals are for the letter "N", the next set of signals are for the letter "S" and finally the last set of signals are for the letter "I".
void loop() {
  //Letter B
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off 
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);    // turn the LED on
  delay(3000);                       // wait for a second, to create a significant gap.
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off 
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);    // turn the LED on 
  delay(1000);                       // wait for a second, to create a significant gap.
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off 
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);    // turn the LED on 
  delay(1000);                       // wait for a second, to create a significant gap.
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off 
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);    // turn the LED on
  delay(1000);                       // wait for a second, to create a significant gap.
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off 
  delay(3000);                       // wait for three seconds, to create a gap between the letters

  
  //Letter A
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);                       // wait for three seconds
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);                       // wait for three seconds, to create a gap between the letters
  
  //Letter N
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);                       // wait for three seconds
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second, to create a significant gap.
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);                       // wait for three seconds, to create a gap between the letters

  //Letter S
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second, to create a significant gap.
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second, to create a significant gap.
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second 
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);                       // wait for three seconds, to create a significant gap.
 

  //Letter I
  digitalWrite(LED_BUILTIN, HIGH);    // turn the LED on
  delay(1000);                       // wait for a second, to create a significant gap.
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off 
  delay(1000);                       // wait for a second 
  digitalWrite(LED_BUILTIN, HIGH);    // turn the LED on
  delay(1000);                       // wait for a second, to create a significant gap.
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off
  delay(3000);                       // wait for three seconds, to create a gap and end the sequence.
  
 
}
