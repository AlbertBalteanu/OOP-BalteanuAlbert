#include <iostream>

using namespace std;

int main()
{
	FILE* fp;
	fopen_s(&fp, "in.txt", "r");

	char myString[200]; 
	int suma = 0; int ctoint = 0;

	while (fgets(myString, 200, fp))
	{
			ctoint=0;
			
			for (int i = 0;i<strlen(myString)-1;i++)
			{
				ctoint = ctoint * 10 + myString[i] - '0';
			}
			suma = suma + ctoint;
			printf("%d\n", ctoint);
			
		
	}
	printf("%d", suma);
}
