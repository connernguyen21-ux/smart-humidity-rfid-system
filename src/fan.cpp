#include "Fan.h"
#include <Arduino.h>

#define FAN_PIN 5

void Fan::begin() {
  pinMode(FAN_PIN, OUTPUT);
}

void Fan::update(float humidity) {
  if (isnan(humidity)) return;

  state = humidity > threshold;
  digitalWrite(FAN_PIN, state ? HIGH : LOW);
}

bool Fan::isOn() {
  return state;
}