
#include <Arduino.h>


#define MOISTURE_SENSOR_PIN A0
#define WATER_PUMP_PIN 8
// Funktion för att läsa markfuktighetssensorn
int readMoistureSensor() {
    return analogRead(MOISTURE_SENSOR_PIN);
}

// Funktion för att aktivera vattenpumpen
void turnOnWaterPump() {
    digitalWrite(WATER_PUMP_PIN, HIGH);
    Serial.println("Vattenpumpen är på.");
}

// Funktion för att stänga av vattenpumpen
void turnOffWaterPump() {
    digitalWrite(WATER_PUMP_PIN, LOW);
    Serial.println("Vattenpumpen är av.");
}

// Funktion för att styra bevattningen baserat på markfuktighet
void controlWatering() {
    int moistureLevel = readMoistureSensor();
    
    if (moistureLevel < 30) {
        Serial.println("Marken är torr. Bevattning påbörjas.");
        turnOnWaterPump();
        delay(5000);  // Bevattning i 5 sekunder (5000 millisekunder).
        turnOffWaterPump();
        Serial.println("Bevattning avslutad.");
    } else {
        Serial.println("Marken är tillräckligt fuktig. Ingen bevattning krävs.");
    }
}

void setup() {
    pinMode(WATER_PUMP_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    controlWatering();
    delay(10000);  // Vänta i 10 sekunder mellan varje kontroll.
}