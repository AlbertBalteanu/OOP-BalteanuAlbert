#include "Ferrari.h"
void Ferrari::setName()
{	
	this->Name = new char[strlen("Ferrari")];	
}
void Ferrari::settankSize()
{
	this->tankSize = 80;
}
void Ferrari::setlPerKm()
{
	this->lPerKm = 10;
}
void Ferrari::setSpeedSunny()
{
	this->avgSpeedSunny = 170;
}
void Ferrari::setSpeedRainy()
{
	this->avgSpeedRainy = 120;
}
void Ferrari::setSpeedSnowy()
{
	this->avgSpeedSnowy = 90;
}