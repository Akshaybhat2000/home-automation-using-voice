#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char auth[] = "NCH_TIrTRN38okFU8OkKg-nkS9OnsgP_";
char ssid[] ="AndroidAP3851";
char pass[] = "9008105453";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Blynk.begin(auth,ssid,pass);
  }

void loop() {
  // put your main code here, to run repeatedly:
   Blynk.run();
}
