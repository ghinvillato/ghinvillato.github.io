void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
pinMode(7,OUTPUT);
pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,HIGH); 
delay(350);
digitalWrite(13,LOW);
delay(250);
digitalWrite(7,HIGH);
delay(400);
digitalWrite(7,LOW);
delay(250);
digitalWrite(3,HIGH);
delay(600);
digitalWrite(3,LOW);
delay(250);
}
