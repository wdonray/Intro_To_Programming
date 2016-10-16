#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string>
#include "Homework.h"

int main()
{
	Club First = Club(10.54, 50.76, 0.96, "Club");
	Sword Second = Sword(53.86, 124.89, 2.01, "Sword");
	Stash<Weapon> Inv = Stash<Weapon>(50);
	Inv.Add(First);
	system("pause");
	return 0;
}
