#include "UI.h"
#include <LiquidCrystal_I2C.h>

#define BUTTON_PIN 7

LiquidCrystal_I2C lcd(0x27, 16, 2);

void UI::begin() {
  pinMode(BUTTON_PIN, INPUT);
  lcd.init();
  lcd.backlight();
}

void UI::updateButton() {
  bool currentState = digitalRead(BUTTON_PIN);

  if (lastButtonState == HIGH && currentState == LOW) {
    currentPage++;
    if (currentPage > 2) currentPage = 0;
    delay(200);
  }

  lastButtonState = currentState;
}

void UI::display(float humidity, float temperature, bool fanOn, String card) {
  if (currentPage != lastPage) {
    lcd.clear();
    lastPage = currentPage;
  }

  lcd.setCursor(0, 0);

  switch (currentPage) {
    case 0:
      lcd.print("Hum: "); lcd.print(humidity);
      lcd.setCursor(0,1);
      lcd.print("Temp: "); lcd.print(temperature);
      break;

    case 1:
      lcd.print("Fan: ");
      lcd.print(fanOn ? "ON" : "OFF");
      break;

    case 2:
      lcd.print("Card:");
      lcd.setCursor(0,1);
      lcd.print(card);
      break;
  }
}