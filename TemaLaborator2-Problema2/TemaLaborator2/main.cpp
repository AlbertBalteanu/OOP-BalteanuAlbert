#include "StudentClass.h"
int main()
{
	StudentClass StudentClass;

	StudentClass.setMath(9);
	StudentClass.setHistory(7);
	StudentClass.setEnglish(9);
	
	char c[25] = "Albert Balteanu";
	StudentClass.setName(c);

	float a=StudentClass.getAvg();
	printf("Media este:%f", a);
}