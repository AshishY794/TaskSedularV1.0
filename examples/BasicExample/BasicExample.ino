#include <TaskSedularV1.0.h>

TaskSedularV1_0 taskScheduler;

void setup() {
    Serial.begin(115200);  // Start Serial Monitor
    taskScheduler.setup();  // Initializes Wi-Fi, Firebase, etc.
    Serial.println("Basic Example Started");
}

void loop() {
    taskScheduler.loop();  // Main loop for user interaction
    // Add your task scheduling logic here
}
