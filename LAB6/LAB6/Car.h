#pragma once
#include <string>
class Car
{	
protected:
	char * Name;
	int tankSize, lPerKm, avgSpeedSunny, avgSpeedRainy, avgSpeedSnowy;
public:
	virtual void setName() = 0;
	virtual void settankSize() = 0;
	virtual void setlPerKm() = 0;
	virtual void setavgSpeedSunny() = 0;
	virtual void setSpeedRainy() = 0;
	virtual void setSpeedSunny() = 0;

};

