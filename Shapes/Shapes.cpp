#include "Shapes.h"
#include <iostream>

int main()
{
	Triangle test = Triangle(1, 2, 3, 4, 5, 6, "Red");
	Circle test2 = Circle(1, 2, 3, "Blue");
	Line test3 = Line(3,1,3,1,"Help");
	/*test.DebugPrint();
	test2.DebugPrint();*/
	test3.DebugPrint();
	system("pause");
	return 0;
}