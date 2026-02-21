#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Temperature and Humidity Monitoring using DHT11
 * @author Charvi Mittal
 * @date 2026-02-15
 *
 * @details
 * This program reads environmental data from the DHT11 sensor
 * and displays temperature and humidity values on Serial Monitor.
 * Students must complete the TODO sections.
 */

#include <DHT.h>
#define DHTPIN2
#define DHTTYPE DHT11
DHT dht(DHTPIN2, DHTTYPE);


void setup() {
    Serial.begin(9600);
    dht.begin();
}

void loop() {
    float humidity=dht.readHumidity();


    // TODO 8:
    // Read temperature value from sensor

    // TODO 9:
    // Check if either reading failed using isnan()
    // If failed, print error message and return

    // TODO 10:
    // Print formatted temperature and humidity values

    // TODO 11:
    // Add a 2-second delay before next reading
}
