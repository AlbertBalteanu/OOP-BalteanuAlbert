#include "Number.h"

Number::Number(const char* value, int base)
{
	this->value = new char[strlen(value) + 1];
	this->base = base;
}
Number::~Number()
{
	if (this->value != nullptr)
	{
		delete this->value;
		this->value = nullptr;
	}
}
Number::Number(const Number& ex)
{
	this->value = ex.value;
}
Number::Number(const Number&& ex)
{
	this->value = ex.value;
}
void SwitchBase(int newBase)
{

}
