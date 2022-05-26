#ifndef WEBSERVER_H
    #define WEBSERVER_H
    #define HTTP_PORT         80    // web server will listen for HTTP requests on port 80

    #include "Configuration.h"
    #include "Credentials.h" // please read the instructions in include/CredentialsTemplate.h file
    // Public functions
    void startWebServer();
#endif