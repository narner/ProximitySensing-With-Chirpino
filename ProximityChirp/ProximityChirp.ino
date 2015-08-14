#include <ChirpinoSing.h>

// Change Beak to PortamentoBeak for a different sound
Beak beak;

// Analog pin 0 (proximity sensor input)
int sensorPin = 0; 


void setup() {
    Serial.begin(9600);
}

void loop() {
    
  int val = analogRead(sensorPin);
  Serial.println(val);

  //Set a threshold for when to chirp. 
  if (val > 200) {
      beak.chirp("769jhvac9dm282qo58");
      delay(2000);
  }
}
