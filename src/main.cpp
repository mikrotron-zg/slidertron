 /* Camslider - camera slider based on ESP32 dev board
 *  2022 by Mikrotron d.o.o.
 */

#define DEBUG_MODE // please read the instructions in include/Debug.h file

#include <Arduino.h>
#include <WiFi.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <AsyncElegantOTA.h>
#include "Credentials.h" // please read the instructions in include/CredentialsTemplate.h file
#include "Debug.h"

// Server details
AsyncWebServer server(80);

void startWebServer() {
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/plain", "Hi! This is a sample response.");
  });

  AsyncElegantOTA.begin(&server);    // Start AsyncElegantOTA
  server.begin();
  DEBUGLN("HTTP server started");
}

void setup() {
  #ifdef DEBUG_MODE
    // Enable serial if in debug mode
    Serial.begin(115200);
    delay(5000);
  #endif
  DEBUGLN("Debug mode: on");

  // Start access point
  WiFi.softAP(AP_SSID, AP_PASSWORD);
  DEBUG("AP is running, ESP32 IP address: "); DEBUGLN(WiFi.softAPIP());

  startWebServer();

}

void loop() {
  
}