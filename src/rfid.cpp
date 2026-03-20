#include "RFID.h"
#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 mfrc522(SS_PIN, RST_PIN);

void RFID::begin() {
  SPI.begin();
  mfrc522.PCD_Init();
}

void RFID::update() {
  if (!mfrc522.PICC_IsNewCardPresent()) return;
  if (!mfrc522.PICC_ReadCardSerial()) return;

  String uidStr = "";
  for (byte i = 0; i < mfrc522.uid.size; i++) {
    uint8_t val = mfrc522.uid.uidByte[i];
    if (val < 0x10) uidStr += "0";
    uidStr += String(val, HEX);
  }
  uidStr.toLowerCase();

  lastCard = uidStr;
}

String RFID::getLastCard() {
  return lastCard;
}