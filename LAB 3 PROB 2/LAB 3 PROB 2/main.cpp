#include "Canvas.h"
int main()
{
	Canvas Canvas(20,20);
	/*Canvas.test();
	Canvas.Print();
	Canvas.Clear();
	*/
	
	Canvas.DrawCircle(50, 50, 10, 'o');
	Canvas.FillCircle(50, 50, 10, '0');
	Canvas.Print();
	Canvas.Clear();
}