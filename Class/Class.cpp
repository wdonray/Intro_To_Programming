#include <iostream>
#include <time.h>
#include "ProjectZom.h"
int main()
{
	Zombie first = Zombie(100, 20, "Dad");
	Zombie second = Zombie(200, 30, "Boxer");
	
	for (int i = 0; i < 5; i++)
	{
		first.attack(second);
	}
	system("pause");
	return 0;
}