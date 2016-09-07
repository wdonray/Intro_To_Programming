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

	Inventory zombiefirstInv;
	Inventory zombiesecondInv;

	Item leg = Item( "Leg", 15, true, 4 );
	Item arm = Item( "Arm", 10, true, 3 );
	Item brain = Item( "Brain", 10, false, 1 );
	
	zombiefirstInv.addItem(leg);
	zombiefirstInv.addItem(arm);
	zombiefirstInv.printInventory();
	zombiesecondInv.addItem(brain);
	zombiesecondInv.printInventory();

	system("pause");
	return 0;
}