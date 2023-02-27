#pragma once
#include <string>
#include <stdio.h>
class StudentClass
{
	int math, english, history;
	char* Name;

public:
	StudentClass();
	void setName(char *name);
	void setMath(float grade);
	void setHistory(float grade);
	void setEnglish(float grade);

	char* getName();
	float getMath();
	float getHistory();
	float getEnglish();

	float getAvg();

};

