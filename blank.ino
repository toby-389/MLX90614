#include <Wire.h>
#include <ESP8266WiFi.h>
#include "Adafruit_MLX90614.h"

Adafruit_MLX90614 mlx = Adafruit_MLX90614();

void setup() {
  // put your setup code here, to run once:
  WiFi.forceSleepBegin();
  delay(1);
  Serial.begin(115200);
  //Wire.begin(10, 14);
  Serial.println("MLX90614");
  mlx.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("read ambient: ");
  Serial.println(mlx.readAmbientTempC());
  Serial.print("read object: ");
  Serial.println(mlx.readObjectTempC());
  Serial.println();
  delay(500);
}
