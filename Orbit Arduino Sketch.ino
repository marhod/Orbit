#include <Adafruit_MotorShield.h>
Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 
Adafruit_DCMotor *myMotor = AFMS.getMotor(4);

int button = 6;
int led = 5;
int state = LOW;      // the current state of the output pin
int reading;           // the current reading from the input pin
int previous = LOW;    // the previous reading from the input pin
long time = 0;         // the last time the output pin was toggled
long debounce = 200;   // the debounce time, increase if the output flickers
int spinSpeed = 250;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);
  AFMS.begin();
  myMotor->setSpeed(0); 
}

void loop() {
  reading = digitalRead(button);
  if (reading == HIGH && previous == LOW && millis() - time > debounce) {
    if (state == HIGH) {
      state = LOW;
      digitalWrite(led, state);
      myMotor->run(RELEASE);
    } else {
      state = HIGH;
      myMotor->run(FORWARD);
      for (int i=0; i <= spinSpeed; i=i+25){
        digitalWrite(led, LOW);
        if (i > spinSpeed) {
          myMotor->setSpeed(spinSpeed);
        } else {
          myMotor->setSpeed(i);
        }
        delay(200);
        digitalWrite(led, HIGH);
        delay(200);
      }
    }
    time = millis();    
  }
  previous = reading;
}
