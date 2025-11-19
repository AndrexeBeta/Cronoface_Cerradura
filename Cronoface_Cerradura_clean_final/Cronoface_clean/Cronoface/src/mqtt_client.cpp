#include "mqtt_client.h"
#include <Arduino.h>
#include <WiFi.h>
#include <PubSubClient.h>
static PubSubClient* cptr=nullptr;
static const char* BROKER="test.mosquitto.org";
static uint16_t PORT=1883;
void mqtt_setup(WiFiClient& wc){
  static PubSubClient client(wc);
  cptr=&client;
  client.setServer(BROKER,PORT);
}
void mqtt_loop(){
  if(!cptr) return;
  if(!cptr->connected()) cptr->connect("cronoface");
  cptr->loop();
}
