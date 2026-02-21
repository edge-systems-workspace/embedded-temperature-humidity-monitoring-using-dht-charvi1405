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
    float temperature=dht.readTemperature();
    Serial.print("Humidity: ");

    Serial.print(humidity);

    Serial.print("% ");

    Serial.print("Temperature: ");

    Serial.print(temperature);

    Serial.println("°C");

    delay(2000);

}
