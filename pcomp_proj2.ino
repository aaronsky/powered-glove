#include <Adafruit_NeoPixel.h>

const byte NEOPIXEL_PIN = 0;
const byte THERM_PIN = 1;

Adafruit_NeoPixel pixel = Adafruit_NeoPixel(3, NEOPIXEL_PIN);

void setup() {
  // put your setup code here, to run once:
  pixel.begin();
  //Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int thermVal = analogRead(THERM_PIN);
  //Serial.println(thermVal);
  if (thermVal <= 500) {
    for (int i = 0; i < 3; i++) {
      pixel.setPixelColor(i, pixel.Color(0, 255, 0));
      pixel.show();
    }
  }
  delay(500);
}
