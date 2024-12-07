#include "TaskSedularV1.0.h"

void TaskSedularV1_0::setup() {
    // Initialize Wi-Fi, NTP, Firebase, and Audio libraries
    connectToWiFi();
    initFirebase();
    // Initialize Audio library
    audio.begin();
}

void TaskSedularV1_0::loop() {
    // Main loop for your library, you can add your code here
}

void TaskSedularV1_0::connectToWiFi() {
    wifiManager.autoConnect("AutoConnectAP"); // Set up Wi-Fi Manager
}

void TaskSedularV1_0::initFirebase() {
    Firebase.begin("firebase_url", "firebase_auth_token"); // Set up Firebase
}
