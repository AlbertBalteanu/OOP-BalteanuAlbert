#include "Porsche.h"
void Porsche::setName()
{
	this->Name = new char[strlen("Lambo")];
}
void Porsche::settankSize()
{
	this->tankSize = 100;
}
void Porsche::setlPerKm()
{
	this->lPerKm = 8;
}
void Porsche::setSpeedSunny()
{
	this->avgSpeedSunny = 150;
}
void Porsche::setSpeedRainy()
{
	this->avgSpeedRainy = 100;
}
void Porsche::setSpeedSnowy()
{
	this->avgSpeedSnowy = 90;
}