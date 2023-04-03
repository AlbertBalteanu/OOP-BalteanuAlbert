#include <iostream>
using namespace std;
float operator"" _kelvin(const char* x)
{
	return atof(x) - 273.15;
}
float operator"" _fahrenheit(const char * x)
{
	return (atof(x) - 32) / 1.8;
}
int main()
{
	float a = 300_kelvin;
	float b = 120_fahrenheit;
	printf("300 K = %f C\n", a);
	printf("120 F = %f C\n", b);

}