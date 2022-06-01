/*******************************************************************
 * Handles WebSocket communication with and from client
 *******************************************************************/

#ifndef WEBSOCKETSCOMMUNICATION_H
    #define WEBSOCKETSCOMMUNICATION_H
    #define WS_PORT 1337    // ;-) web socket server port number
    #define WS_MSG_BUFFER_SIZE 10 // increase if needed

    // Public functions
    void startWebSocketsServer();
#endif