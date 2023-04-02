#pragma once
#include <string>
class Car
{	
public:
	char * Name;
	int tankSize, lPerKm, avgSpeedSunny, avgSpeedRainy, avgSpeedSnowy;
public:
	virtual void setName() = 0;
	virtual void settankSize() = 0;
	virtual void setlPerKm() = 0;
	virtual void setSpeedSunny() = 0;
	virtual void setSpeedRainy() = 0;
	virtual void setSpeedSnowy() = 0;
	//virtual int gettankSize();

};

