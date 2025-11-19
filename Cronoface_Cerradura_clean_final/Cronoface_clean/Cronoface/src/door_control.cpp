#include "door_control.h"
#include <Arduino.h>
static int RELAY_PIN=4;
void door_control_setup(){ pinMode(RELAY_PIN,OUTPUT); }
void door_open(){ digitalWrite(RELAY_PIN,HIGH); }
void door_close(){ digitalWrite(RELAY_PIN,LOW); }
