#ifndef OPENWEATHERMAP_h
#define OPENWEATHERMAP_h
#include "WeatherData.h"

#if (ARDUINO >= 100)
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

class OpenWeatherMap {
  public:
    OpenWeatherMap();
    WeatherData fetchWeatherData(String cityid, String apikey);
  
  private:
    const char* getWindDirection(int deg);
    bool inRange(float val, float minimum, float maximum);
    char* _servername = "api.openweathermap.org";
};
#endif
