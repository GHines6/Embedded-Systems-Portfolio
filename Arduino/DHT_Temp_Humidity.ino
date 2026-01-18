#include "DHT.h"

#define DHTPIN 33
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  
  Serial.begin(9600);

  dht.begin();
}

void loop() {
  delay(4000);

  float humidity = dht.readHumidity();
  float CelsiusTemp = dht.readTemperature();
  float fahrenheit = dht.readTemperature(true);


  if (isnan(humidity) || isnan(CelsiusTemp) || isnan(fahrenheit)) {
    Serial.println(F("Failed to read data from DHT sensor."));
    return;
  }

  Serial.print("\nHumidity: ");
  Serial.print(humidity);
  Serial.print("%\nTemperature: ");
  Serial.print(fahrenheit);
  Serial.print("°\n");

}
