//Started 2026-02-01
#include "Humidity.h"
#include "Fan.h"
#include "RFID.h"
#include "UI.h"

Humidity humidity;
Fan fan;
RFID rfid;
UI ui;

void setup() {
  humidity.begin();
  fan.begin();
  rfid.begin();
  ui.begin();
}

void loop() {
  ui.updateButton();

  float h = humidity.getHumidity();
  float t = humidity.getTemperature();

  rfid.update();
  fan.update(h);

  ui.display(h, t, fan.isOn(), rfid.getLastCard());

  delay(200);
}