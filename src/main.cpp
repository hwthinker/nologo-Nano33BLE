#include <Arduino.h>

// Pin untuk LED RGB
#define LED_RED_PIN 24   // P0.24 untuk Red
#define LED_GREEN_PIN 16 // P0.16 untuk Green
#define LED_BLUE_PIN 6   // P0.06 untuk Blue

void setup() {
    // Set semua pin LED sebagai output
    pinMode(LED_RED_PIN, OUTPUT);
    pinMode(LED_GREEN_PIN, OUTPUT);
    pinMode(LED_BLUE_PIN, OUTPUT);

    // Matikan semua LED saat awal
    digitalWrite(LED_RED_PIN, HIGH);
    digitalWrite(LED_GREEN_PIN, HIGH);
    digitalWrite(LED_BLUE_PIN, HIGH);
}

void loop() {
    // // Nyalakan LED Merah (Red)
    // digitalWrite(LED_RED_PIN, LOW); // LED Merah ON
    // delay(1000);
    // digitalWrite(LED_RED_PIN, HIGH); // LED Merah OFF
    // delay(1000);

    // // Nyalakan LED Hijau (Green)
    // digitalWrite(LED_GREEN_PIN, LOW); // LED Hijau ON
    // delay(1000);
    // digitalWrite(LED_GREEN_PIN, HIGH); // LED Hijau OFF
    // delay(1000);

    // Nyalakan LED Biru (Blue)
    digitalWrite(LED_BLUE_PIN, LOW); // LED Biru ON
    delay(1000);
    digitalWrite(LED_BLUE_PIN, HIGH); // LED Biru OFF
    delay(1000);
}
