#pragma once
#include "Weather.h"
#include "Car.h"

class Circuit
{
	int length, carAmount = 0, i,j,nrOfCarsNF=0;
	Weather weather;
	Car* carlist[3];
public:
	void SetLength(int n);
	void SetWeather(Weather a);
	void AddCar(Car* mycar);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};

