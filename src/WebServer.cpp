#include <WiFi.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <AsyncElegantOTA.h>
#include "WebServer.h"

AsyncWebServer server(80);

void startAccessPoint() {
  // Start access point
  WiFi.softAP(AP_SSID, AP_PASSWORD);
  DEBUG("AP is running, ESP32 IP address: "); DEBUGLN(WiFi.softAPIP());
}

void startWebServer() {
  // Start web server
  startAccessPoint();
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/plain", "Hi! This is a sample response.");
  });

  AsyncElegantOTA.begin(&server);    // Start AsyncElegantOTA
  server.begin();
  DEBUGLN("HTTP server started");
}