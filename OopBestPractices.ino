#include <SPI.h>
#define DEBUG
#include "openweathermap.h"
#include "wifi.h"

// OPENWEATHER API CONFIGURATION
String apikey = "********************************";

OpenWeatherMap owp;
OpenWeatherMap owp1;

WeatherData Ilagan;
WeatherData Drammen;

void setup() {

  Serial.begin(9600);
  
  init_Wifi();
  int counter = 0;
  while (WiFi.status() != WL_CONNECTED) {
    delay(200);
    if (++counter > 200) ESP.restart();
    #ifdef DEBUG
      Serial.print (".");
    #endif
  }
  #ifdef DEBUG
    Serial.print(F("\n\nWiFi connected: "));
    Serial.println(WiFi.localIP().toString());
  #endif

  Ilagan = owp.fetchWeatherData("1711146", apikey);
  Drammen = owp1.fetchWeatherData("3159016", apikey);

  Serial.print(F("Location: "));
  Serial.println(Ilagan.getLocation());
  Serial.print(F("Temperature: "));
  Serial.println(Ilagan.getTemperature());
  Serial.print(F("Feels like: "));
  Serial.println(Ilagan.getFeelslike());
  Serial.print(F("Temp min: "));
  Serial.println(Ilagan.getTemp_min());
  Serial.print(F("Temp max: "));
  Serial.println(Ilagan.getTemp_max());
  Serial.print(F("Pressure: "));
  Serial.println(Ilagan.getPressure());
  Serial.print(F("Humidity: "));
  Serial.println(Ilagan.getHumidity());
  Serial.print(F("Weather: "));
  Serial.println(Ilagan.getWeather());
  Serial.print(F("Description: "));
  Serial.println(Ilagan.getDescription());
  Serial.print(F("Wind speed: "));
  Serial.println(Ilagan.getWindspeed());
  Serial.print(F("Wind direction: "));
  Serial.println(Ilagan.getWinddirection());
  Serial.print(F("Wind compass direction: "));
  Serial.println(Ilagan.getWindcompassdirection());
  Serial.print(F("Weather ID: "));
  Serial.println(Ilagan.getWeatherid());

  Serial.println(F(" "));

  Serial.print(F("Location: "));
  Serial.println(Drammen.getLocation());
  Serial.print(F("Temperature: "));
  Serial.println(Drammen.getTemperature());
  Serial.print(F("Feels like: "));
  Serial.println(Drammen.getFeelslike());
  Serial.print(F("Temp min: "));
  Serial.println(Drammen.getTemp_min());
  Serial.print(F("Temp max: "));
  Serial.println(Drammen.getTemp_max());
  Serial.print(F("Pressure: "));
  Serial.println(Drammen.getPressure());
  Serial.print(F("Humidity: "));
  Serial.println(Drammen.getHumidity());
  Serial.print(F("Weather: "));
  Serial.println(Drammen.getWeather());
  Serial.print(F("Description: "));
  Serial.println(Drammen.getDescription());
  Serial.print(F("Wind speed: "));
  Serial.println(Drammen.getWindspeed());
  Serial.print(F("Wind direction: "));
  Serial.println(Drammen.getWinddirection());
  Serial.print(F("Wind compass direction: "));
  Serial.println(Drammen.getWindcompassdirection());
  Serial.print(F("Weather ID: "));
  Serial.println(Drammen.getWeatherid());
}

void loop() {
}
