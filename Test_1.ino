void setup() {
  //pinMode(LED_BUILTIN, OUTPUT)
  //pinMode(13,OUTPUT);
  //pinMode(12,OUTPUT);
  

}

void loop() {
   digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(13,HIGH);
  delay(1000);//Wait for 1000 millisecond(s)
  digitalWrite(13,LOW);
  delay(500);//Wait for 500 millisecond(s)
  digitalWrite(12,HIGH);
  delay(1000);//Wait for 1000 millisecond(s)
  digitalWrite(12,LOW);
  delay(500);//Wait for 500 millisecond(s)
 
}
