#pragma once
#include <Arduino.h>

static const char AUTH_PIN[] = "1234";
inline bool check_pin(const String& c){ return c == AUTH_PIN; }
