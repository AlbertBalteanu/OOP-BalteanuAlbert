#include "Canvas.h"
int main()
{
	Canvas Canvas(20,20);
	/*Canvas.test();
	Canvas.Print();
	Canvas.Clear();
	*/
	
	Canvas.DrawCircle(50, 50, 10, 'o');
	Canvas.Print();
	Canvas.Clear();
}