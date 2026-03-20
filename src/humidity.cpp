#include "Humidity.h"
#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void Humidity::begin() {
  dht.begin();
}

float Humidity::getHumidity() {
  return dht.readHumidity();
}

float Humidity::getTemperature() {
  return dht.readTemperature();
}