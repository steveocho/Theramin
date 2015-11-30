#include "pitches.h"

int trigpin = 11;
int echopin = 12;
int speakerout = 8;
double duration, cm, inches;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(speakerout, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigpin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);

  duration = pulseIn(echopin, HIGH);

  cm = (duration / 2) / 29.1;

  if (duration > 150 && duration < 500) {
    tone(speakerout, NOTE_C4);
  }
  else if (duration > 500 && duration < 800) {
    tone(speakerout, NOTE_G4);
  }
  else {
    noTone(speakerout);
  }

  Serial.print(duration);
  Serial.println(" duration");
  Serial.print(cm);
  Serial.print(" cm");
  Serial.println();
}
