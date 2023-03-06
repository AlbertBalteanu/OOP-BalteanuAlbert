#define _CRT_SECURE_NO_WARNINGS
#include "Math.h"

int Math::Add(int a, int b)
{
	return a + b;
}
int Math::Add(int a, int b,int c)
{
	return a + b + c;
}
int Math::Add(double a, double b)
{
	return a + b;
}
int Math::Add(double a, double b, double c)
{
	return a + b + c;

}
int Math::Mul(int a, int b)
{
	return a * b;
}
int Math::Mul(int a, int b, int c)
{
	return a * b * c;
}
int Math::Mul(double a, double b)
{
	return a * b;
}
int Math::Mul(double a, double b, double c)
{
	return a * b * c;

}
int Math::Add(int count, ...)
{
	va_list vl; int s = 0;
	va_start(vl, count);
	for (int i = 1; i <= count; i++)
		s = s + va_arg(vl, int);
	va_end(vl);
	return s;
}
char* Math::Add(const char* a, const char* b)
{
	if (a == nullptr || b == nullptr) return nullptr;
	char* c = new char[strlen(a)+strlen(b)+1];
	strcpy(c, a); strcat(c, b);
	return c;
}

