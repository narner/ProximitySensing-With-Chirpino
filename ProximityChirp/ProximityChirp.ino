#include <ChirpinoSing.h>


// Change Beak to PortamentoBeak for a different sound
Beak beak;

int sensorPin = 0; //analog pin 0


void setup() {
    Serial.begin(9600);
}


void loop() {
  beak.chirp("769jhvac9dm282qo58");
//  delay(2000);
    
  int val = analogRead(sensorPin);
  Serial.println(val);

  //just to slow down the output - remove if trying to catch an object passing by
  delay(100);
}
