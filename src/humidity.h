#ifndef HUMIDITY_H
#define HUMIDITY_H

class Humidity {
  public:
    void begin();
    float getHumidity();
    float getTemperature();
};

#endif