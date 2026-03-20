#ifndef FAN_H
#define FAN_H

class Fan {
  public:
    void begin();
    void update(float humidity);
    bool isOn();

  private:
    float threshold = 60.0;
    bool state = false;
};

#endif