#include "StudentClass.h"
StudentClass::StudentClass()
{
	this->Name = new char[25];
}

void StudentClass::setMath(float grade)
{
	this->math = grade;
}
void StudentClass::setHistory(float grade)
{
	this->history = grade;
}

void StudentClass::setEnglish(float grade)
{
	this->english = grade;
}

float StudentClass::getMath()
{
	return this->math;
}
float StudentClass::getHistory()
{
	return this->history;
}
float StudentClass::getEnglish()
{
	return this->english;
}

void StudentClass::setName(char* name)
{
	memcpy(this->Name, name, strlen(name));
}
char* StudentClass::getName()
{
	return this->Name;
}

float StudentClass::getAvg()
{
	return (getMath() + getHistory() + getEnglish()) / 3;
}
