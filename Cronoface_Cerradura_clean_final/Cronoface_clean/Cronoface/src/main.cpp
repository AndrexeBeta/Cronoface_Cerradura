#include <Arduino.h>
#include <WiFi.h>

#include "door_control.h"
#include "keypad_input.h"
#include "mqtt_client.h"
#include "oled_display.h"
#include "state_machine.h"
#include "face_logic.h"

WiFiClient wc;

void setup(){
  Serial.begin(115200);
  door_control_setup();
  init_keypad();
  display_setup();
  face_logic_setup();
  state_machine_setup();
  mqtt_setup(wc);
}

void loop(){
  read_keypad_input();
  face_logic_loop();
  state_machine_loop();
  mqtt_loop();
  delay(10);
}
