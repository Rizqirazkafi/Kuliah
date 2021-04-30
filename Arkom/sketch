#include "CTBot.h"
//Bot var
CTBot myBot;
//Wifi Config
String ssid = "Faraday"; // Wifi ssid
String pass = "mezametamae"; //wifi password
//Telegram Token and ID
String token = "1745548338:AAGGD9wzuRtXO3BVrlUqOOtWUEIOSktBtDA";
const int id = 1283139048;
const int gasPin = A0; //Input form MQ2 using A0 analog pin
int sensorValue;
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Start wifi connection");
  //  wifi connection --start
  myBot.wifiConnect (ssid, pass);
  //  Telegram token
  myBot.setTelegramToken(token);
  //  Check wifi connectivity;
  if (myBot.testConnection())
    Serial.println("Connected");
  else
    Serial.println("Serial down");
}

void loop() {
  //  Read input from A0 pin
  sensorValue = analogRead(gasPin);
  //  Convert output value to string
  String noVal = String(sensorValue);
  if (sensorValue > 510) {
    Serial.println("Gas Detected");
    Serial.println(sensorValue);
    myBot.sendMessage(id, "Gas Detected");
    myBot.sendMessage(id, "Gas level : " + noVal);
  } else {
    Serial.println("No Gas");
    Serial.println(sensorValue);
  }
  delay(2000);
}
