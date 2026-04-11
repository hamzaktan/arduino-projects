int redPin = 9;
int greenPin = 10;
int bluePin = 11;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  digitalWrite(redPin, HIGH);
  delay(1000);
  digitalWrite(redPin, LOW);

  digitalWrite(greenPin, HIGH);
  delay(1000);
  digitalWrite(greenPin, LOW);

  digitalWrite(bluePin, HIGH);
  delay(1000);
  digitalWrite(bluePin, LOW);
}
