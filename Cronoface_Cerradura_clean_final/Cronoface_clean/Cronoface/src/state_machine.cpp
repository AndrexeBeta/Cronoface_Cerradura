#include "state_machine.h"
#include "door_control.h"
#include "oled_display.h"
#include <Arduino.h>
static DoorState st=DoorState::LOCKED;
void state_machine_setup(){ st=DoorState::LOCKED; display_message("Cerradura bloqueada"); }
DoorState get_door_state(){ return st; }
void state_machine_loop(){}
