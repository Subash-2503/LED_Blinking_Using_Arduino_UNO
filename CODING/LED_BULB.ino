#define BLYNK_TEMPLATE_ID "TMPL3OszW761y"
#define BLYNK_TEMPLATE_NAME "minion"
#define BLYNK_AUTH_TOKEN "cgJPXsUGFepD-jhJy3oROEFbiMSHP5fU"
#define BLYNK_PRINT Serial
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#define LEd_pin 5
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Vasanth";  // type your wifi name
char pass[] = "vasanth008"; 

void setup() {
  Serial.begin(115200);
  pinMode(LEd_pin,OUTPUT);
 Blynk.begin(BLYNK_AUTH_TOKEN,ssid,pass);

}
BLYNK_WRITE(v0){
  int value = param.asInt();
  digitalWrite(LEd_pin,value);
}
void loop() {
   Blynk.run();
  // put your main code here, to run repeatedly:

}
