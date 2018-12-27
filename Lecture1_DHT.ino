#include "DHT.h"
#define DHTPIN 2     // what digital pin we're connected to
#define DHTTYPE DHT11   // DHT 11
DHT dht(DHTPIN, DHTTYPE);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float t = dht.readTemperature();
  float h = dht.readHumidity();

  
  Serial.print("Temp(*C): ");
  Serial.print(t);
  Serial.print("  Temp(*F): ");
  Serial.print(t/5*9+32);
  Serial.print("  Humidity(%): ");
  Serial.println(h);
  delay(3000);
}
