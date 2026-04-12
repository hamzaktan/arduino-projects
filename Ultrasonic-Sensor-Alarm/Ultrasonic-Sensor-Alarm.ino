#define echoPin 6
#define trigPin 7
#define buzzerPin 8
#define ledGreen 9
#define ledRed 10

int maxRange = 50;
int minRange = 0;

void setup() {
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

void loop() {
  int distance = measureDistance(maxRange, minRange);
  controlLED(distance);
  beep(distance);
}

int measureDistance(int maxRange, int minRange) {
  long duration, distance;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration / 58.2;
  delay(50);

  if (distance >= maxRange || distance <= minRange) {
    return 0;
  }
  return distance;
}

void beep(int distance) {
  if (distance > 0 && distance <= maxRange) {
    int delayTime = map(distance, 1, maxRange, 100, 600);

    tone(buzzerPin, 262);
    delay(100);   
    noTone(buzzerPin);
    delay(delayTime);   
  }
}

void controlLED(int distance) {
  if (distance > 10) {
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledRed, LOW);
  } else if (distance > 0 && distance <= 10) {
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, HIGH);
  } else {
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, LOW);
  }
}
