#define LED 2
#define POT A6
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(POT, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(LED,HIGH);
  delay(analogRead(POT));
  digitalWrite(LED,LOW);
  delay(analogRead(POT));
}
