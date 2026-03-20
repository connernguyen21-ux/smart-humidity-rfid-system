#ifndef UI_H
#define UI_H

#include <Arduino.h>

class UI {
  public:
    void begin();
    void updateButton();
    void display(float humidity, float temperature, bool fanOn, String card);

  private:
    int currentPage = 0;
    int lastPage = -1;
    bool lastButtonState = LOW;
};

#endif