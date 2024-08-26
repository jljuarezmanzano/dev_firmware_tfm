#include <Arduino.h>
#include <MQTT.h>
#include <WiFi.h>
#include <WiFiClientSecure.h>
#include "secrets.h"

WiFiClientSecure net;
MQTTClient client;

unsigned long lastMillis = 0;

void messageReceived(String& topic, String& payload) {
  Serial.println("incoming: " + topic + " - " + payload);
}

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, pass);

  Serial.print("Checking wifi...");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(1000);
  }
  Serial.println("WiFi connected!");

  net.setCACert(serverCA);
  net.setCertificate(clientCert);
  net.setPrivateKey(clientKey);

  net.setTimeout(5);

  client.begin("a14tl5p6b2y4o8-ats.iot.eu-west-1.amazonaws.com", 8883, net);

  client.onMessage(messageReceived);

  while (!client.connect(TKid)) {
    Serial.print(".");
    delay(1000);
  }

  Serial.println("connected to IoT Core!");

  client.subscribe("$aws/things/"+String(TKid)+"/shadow/update");
}

void loop() {

  client.loop();

  if (!client.connected()) {
    while (!client.connect(TKid)) {
      Serial.print(".");
      delay(1000);
    }
    Serial.println("Reconnected to MQTT Broker!");
  }

  if (millis() - lastMillis > 10000) {
    lastMillis = millis();
    String mensaje = "{\"state\":{\"reported\":{\"mensaje\":\"Probando\ "+String(random(100))+"\"}}}";

    client.publish("$aws/things/"+String(TKid)+"/shadow/update", mensaje);
  }
}
