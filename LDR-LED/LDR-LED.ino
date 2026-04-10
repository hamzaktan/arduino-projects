#define led1 7

void setup(){
  pinMode(led1,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int light = analogRead(A0);
  Serial.println(light);
  delay(50);


  if(light>300){
    digitalWrite(led1,LOW);

  }
  if(light<200){
    digitalWrite(led1,HIGH);

  }


}
