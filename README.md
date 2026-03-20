#  ShelfSense — Smart Humidity & RFID Monitoring System

##  Overview

ShelfSense is an embedded system designed to monitor environmental conditions and manage item identification using RFID technology. The system reads humidity and temperature data in real time and automatically controls a fan (simulated with an LED) to maintain optimal conditions. Users can interact with the system through a button-controlled LCD interface and RFID cards.

---

##  Features

*  Real-time humidity and temperature monitoring
*  Automatic fan control based on humidity threshold
*  RFID card detection for item identification
*  Multi-page LCD user interface (button-controlled)
*  Modular embedded system architecture (UI, Fan, Humidity, RFID subsystems)

---

##  System Architecture

The project is divided into four main subsystems:

* **Humidity Module** — Reads sensor data from DHT22
* **Fan Module** — Controls output based on humidity threshold
* **RFID Module** — Detects and identifies RFID cards
* **UI Module** — Handles LCD display and button navigation

---

##  Hardware Components

* DHT22 Temperature & Humidity Sensor
* MFRC522 RFID Module
* 16x2 I2C LCD Display
* Push Button (with pull-up configuration)
* LED (used to simulate fan behavior)
* Microcontroller (Arduino / ESP32 compatible)

---

##  How It Works

1. The system continuously reads humidity and temperature.
2. If humidity exceeds a defined threshold (default: 60%), the fan is activated.
3. Users can cycle through display pages using a button:

   * Sensor data
   * Fan status
   * Last scanned RFID card
4. When an RFID card is scanned, the system identifies it and displays its type.

---

##  File Structure

```
/src
  UI.cpp / UI.h
  Fan.cpp / Fan.h
  Humidity.cpp / Humidity.h
  RFID.cpp / RFID.h
main.ino
```

---

##  Future Improvements

* Adjustable humidity threshold via UI or RFID
* Data logging (SD card or cloud)
* Wireless monitoring (WiFi/Bluetooth)
* Improved debounce handling and non-blocking timing

---

##  Team Contributions

This project was developed as a collaborative embedded systems project with clearly defined subsystem responsibilities.

---

##  Applications

* Smart storage systems
* Environmental monitoring
* Library/archive preservation
* Inventory tracking systems

---
