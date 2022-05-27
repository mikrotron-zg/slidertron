/* JS component of web application needed to control UI
 * and hadle WebSocket communication
 * by Mikrotron d.o.o. 2022.
 */

// Global variables
var debug_mode = true; // Should be false for production

// Use this function for initialization
function init() {
  writeLog("Application start");
}

// Call the init function as soon as the page loads
window.addEventListener("load", init, false);

// Write timestamped log to console
function writeLog(message) {
  if (debug_mode) { // Write to log only if in debug mode
    message = new Date().toLocaleString() + " - " + message;
    console.log(message);
  }
}