#ifndef TASKSEDULARV1_0_H
#define TASKSEDULARV1_0_H

// Automatically include required libraries
#include <WiFiManager.h>
#include <WiFiUdp.h>
#include <NTPClient.h>
#include <FirebaseESP32.h>
#include <Audio.h>
#include <ArduinoJson.h>

class TaskSedularV1_0 {
public:
    void setup();
    void loop();
    void connectToWiFi();
    void initFirebase();
    // Add more functions as needed
private:
    WiFiManager wifiManager;
    FirebaseData firebaseData;
    NTPClient timeClient;
    Audio audio;
};

#endif
