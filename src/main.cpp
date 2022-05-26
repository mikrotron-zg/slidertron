 /* Camslider - camera slider based on ESP32 dev board
 *  2022 by Mikrotron d.o.o.
 */

#define DEBUG_MODE // please read the instructions in include/Debug.h file

#include <Arduino.h>
#include "Debug.h"
#include "WebServer.h"

void setup() {
  // Program start
  #ifdef DEBUG_MODE
    // Enable serial if in debug mode
    Serial.begin(115200);
    delay(5000);
  #endif
  DEBUGLN("Debug mode: on");

  startWebServer();

}

void loop() {
  
}