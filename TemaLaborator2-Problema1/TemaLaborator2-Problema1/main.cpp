#include "NumberList.h"

int main()
{
	NumberList Numbers;

	Numbers.Init();
	Numbers.Print();

	Numbers.Add(2);
	Numbers.Add(1);
	Numbers.Print();

	Numbers.Sort();
	Numbers.Print();
}