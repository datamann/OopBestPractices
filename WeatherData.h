#ifndef WEATHERDATA_h
#define WEATHERDATA_h

#if (ARDUINO >= 100)
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

class WeatherData {

  public:
    WeatherData();
    
    void setLocation(const char* location);
    const char* getLocation();

    void setTemperature(float temperature);
    float getTemperature();

    void setFeelslike(float feelsLike);
    float getFeelslike();
    
    void setTemp_min(float temp_min);
    float getTemp_min();

    void setTemp_max(float temp_max);
    float getTemp_max();

    void setPressure(int pressure);
    int getPressure();

    void setHumidity(int humidity);
    int getHumidity();

    void setWeather(const char* weather);
    const char* getWeather();

    void setDescription(const char* description);
    const char* getDescription();

    void setWindspeed(float windSpeed);
    float getWindspeed();

    void setWinddirection(int windDirection);
    int getWinddirection();

    void setWindcompassdirection(const char* windCompassDirection);
    const char* getWindcompassdirection();

    void setWeatherid(int weatherID);
    int getWeatherid();

    void setTimes(const char* timeS);
    const char* getTimes();

  private:
    const char* _location;
    float _temperature;
    float _feelsLike;
    float _temp_min;
    float _temp_max;
    int _pressure;
    int _humidity;
    const char* _weather;
    const char* _description;
    float _windSpeed;
    int _windDirection;
    const char* _windCompassDirection;
    int _weatherID;
    const char* _timeS;
};
#endif
