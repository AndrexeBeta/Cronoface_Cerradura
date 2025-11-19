#pragma once
#include <Arduino.h>

// Inicializa el teclado matricial (configuración de pines, etc.).
void init_keypad();

// Lee el estado del teclado y actualiza la lógica de la aplicación.
void read_keypad_input();
