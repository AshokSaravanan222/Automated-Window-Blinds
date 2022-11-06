//Author: Ashok Saravanan
//Created 07-14-2021

int ledTest=10;
int speedPin=11;
int dir1=12;
int dir2=8;
int mSpeed=255;

void setup() {
  // put your setup code here, to run once:
pinMode(ledTest, OUTPUT);
pinMode(speedPin, OUTPUT);
pinMode(dir1, OUTPUT);
pinMode(dir2, OUTPUT);
Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:

analogWrite(ledTest, 255);
digitalWrite(dir1, LOW);
digitalWrite(dir2, HIGH);
analogWrite(speedPin, mSpeed);

}
