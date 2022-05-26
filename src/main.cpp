 /* Camslider - camera slider based on ESP32 dev board
 *  2022 by Mikrotron d.o.o.
 */

#include <Arduino.h>
#include "Configuration.h"
#include "WebServer.h"

void setup() {
  // Program start
  #ifdef DEBUG_MODE
    // Enable serial if in debug mode
    Serial.begin(115200);
    delay(5000);
  #endif
  DEBUGLN("Debug mode: on");

  // Mount SPIFFS file system
  if(!SPIFFS.begin()){
    DEBUGLN("SPIFFS mounting error");
  }

  startWebServer();

}

void loop() {
  
}