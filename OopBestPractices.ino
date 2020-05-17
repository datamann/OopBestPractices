/*
    Written by Stig B. Sivertsen
    sbsivertsen@gmail.com
    https://github.com/datamann/GA-weather-station
    14.05.2020
    @see The GNU Public License (GPL) Version 3
*/
#include <SPI.h>
#define DEBUG
#include "credentials.h"
#include "openweathermap.h"
#include "wifi.h"

OpenWeatherMap owpIlagan;
OpenWeatherMap owpDrammen;
WeatherData ilg;
WeatherData drm;

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

  ilg = owpIlagan.fetchWeatherData("1711146", apikey);
  drm = owpIlagan.fetchWeatherData("3159016", apikey);

  Serial.print(F("Location: "));
  Serial.println(ilg.getLocation());
  Serial.print(F("Temperature: "));
  Serial.println(ilg.getTemperature());
  Serial.print(F("Feels like: "));
  Serial.println(ilg.getFeelslike());
  Serial.print(F("Temp min: "));
  Serial.println(ilg.getTemp_min());
  Serial.print(F("Temp max: "));
  Serial.println(ilg.getTemp_max());
  Serial.print(F("Pressure: "));
  Serial.println(ilg.getPressure());
  Serial.print(F("Humidity: "));
  Serial.println(ilg.getHumidity());
  Serial.print(F("Weather: "));
  Serial.println(ilg.getWeather());
  Serial.print(F("Description: "));
  Serial.println(ilg.getDescription());
  Serial.print(F("Wind speed: "));
  Serial.println(ilg.getWindspeed());
  Serial.print(F("Wind direction: "));
  Serial.println(ilg.getWinddirection());
  Serial.print(F("Wind compass direction: "));
  Serial.println(ilg.getWindcompassdirection());
  Serial.print(F("Weather ID: "));
  Serial.println(ilg.getWeatherid());

  Serial.println(F(" "));

  Serial.print(F("Location: "));
  Serial.println(drm.getLocation());
  Serial.print(F("Temperature: "));
  Serial.println(drm.getTemperature());
  Serial.print(F("Feels like: "));
  Serial.println(drm.getFeelslike());
  Serial.print(F("Temp min: "));
  Serial.println(drm.getTemp_min());
  Serial.print(F("Temp max: "));
  Serial.println(drm.getTemp_max());
  Serial.print(F("Pressure: "));
  Serial.println(drm.getPressure());
  Serial.print(F("Humidity: "));
  Serial.println(drm.getHumidity());
  Serial.print(F("Weather: "));
  Serial.println(drm.getWeather());
  Serial.print(F("Description: "));
  Serial.println(drm.getDescription());
  Serial.print(F("Wind speed: "));
  Serial.println(drm.getWindspeed());
  Serial.print(F("Wind direction: "));
  Serial.println(drm.getWinddirection());
  Serial.print(F("Wind compass direction: "));
  Serial.println(drm.getWindcompassdirection());
  Serial.print(F("Weather ID: "));
  Serial.println(drm.getWeatherid());
}

void loop() {
}
