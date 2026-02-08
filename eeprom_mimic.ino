#include <EEPROM.h>

const int addr = 0;

void setup() {
  Serial.begin(115200);
  delay(1500);

  Serial.println("\n=== EEPROM TEST (Teensy 4.1) ===");

  uint32_t bootCount = 0;
  EEPROM.get(addr, bootCount);

  Serial.print("Old stored value: ");
  Serial.println(bootCount);

  bootCount++;

  EEPROM.put(addr, bootCount);

  Serial.print("New stored value: ");
  Serial.println(bootCount);

  Serial.println("✅ Power OFF and ON again. Value should increase.");
}

void loop() {}
