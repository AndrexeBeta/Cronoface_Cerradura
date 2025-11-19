#include "oled_display.h"
#include <Arduino.h>
void display_setup(){}
void display_message(const String& m){ Serial.println("[OLED] "+m); }
