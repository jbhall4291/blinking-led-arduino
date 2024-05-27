#include <Arduino.h>
#define onboard 13

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  pinMode(onboard, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(onboard, LOW);
  delay(1000);
  Serial.println("light goes on...");
  digitalWrite(onboard, HIGH);
  delay(1000);
  Serial.println("...light goes off");
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}