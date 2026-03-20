#ifndef RFID_H
#define RFID_H

#include <Arduino.h>

class RFID {
  public:
    void begin();
    void update();
    String getLastCard();

  private:
    String lastCard = "";
};

#endif