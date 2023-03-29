#pragma once
#include "Weather.h"
#include "Car.h"

class Circuit
{
	void SetLength(int n);
	void SetWeather(Weather a);
	void AddCar(Car* mycar);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};

