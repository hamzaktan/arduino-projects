#define pot A0
#define led 11
  int deger;
void setup() {
}

void loop() {
  deger=analogRead(pot);
  deger=map(deger,0,1023,0,255);
  analogWrite(led,deger);
}
