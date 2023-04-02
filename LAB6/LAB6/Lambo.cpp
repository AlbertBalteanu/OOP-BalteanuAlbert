#include "Lambo.h"
void Lambo::setName()
{
	this->Name = new char[strlen("Lambo")];
}
void Lambo::settankSize()
{
	this->tankSize = 70;
}
void Lambo::setlPerKm()
{
	this->lPerKm = 12;
}
void Lambo::setSpeedSunny()
{
	this->avgSpeedSunny = 180;
}
void Lambo::setSpeedRainy()
{
	this->avgSpeedRainy = 130;
}
void Lambo::setSpeedSnowy()
{
	this->avgSpeedSnowy = 60;
}
