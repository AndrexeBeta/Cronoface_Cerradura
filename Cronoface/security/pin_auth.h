#pragma once
#include <Arduino.h>

// PIN maestro actual almacenado en memoria/programa.
// Su definición se encuentra en pin_auth.cpp
extern String masterPIN;

// Valida que el PIN ingresado coincida con el PIN maestro.
bool validate_pin(const String &inputPIN);

// Actualiza el PIN maestro por uno nuevo.
void update_pin(const String &newPIN);
