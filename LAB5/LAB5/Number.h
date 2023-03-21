#pragma once
#include <stdio.h>
#include <string.h>
class Number
{

	// add data members
	char* value;
	int base;
	int digitcount;

public:

	Number(const char* value, int base); // where base is between 2 and 16

	~Number();
	Number(const Number& ex);
	Number(const Number&& ex);



	// add operators and copy/move constructor



	void SwitchBase(int newBase);

	void Print();

	int  GetDigitsCount(); // returns the number of digits for the current number

	int  GetBase(); // returns the current base
};

