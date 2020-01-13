#include <Servo.h>

Servo myservo;
byte ledPin = 13;
byte pirPin = 2;

byte pirValue;


void setup() {
  Serial.begin(9600);
  
  // setup servo pins and initialize to 0 position
  myservo.attach(9);
  myservo.write(0);

  // setup PIR pins and initialize output to LOW
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
  digitalWrite(ledPin, LOW);

  // delay is probably optional
  delay(1000);

}

void loop() {
  // read PIR sensor and output to LED
  pirValue = digitalRead(pirPin);
  digitalWrite(ledPin, pirValue);
  Serial.println(pirValue);
  if (pirValue > 0){
    myservo.write(135);
    delay(20000);
    myservo.write(0);
    digitalWrite(ledPin, LOW);
  }
  delay(10);
}
