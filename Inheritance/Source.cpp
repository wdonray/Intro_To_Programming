#include <iostream>
#include "Header.h"
#include <time.h>
#include <Windows.h>
#include <string>
#include <conio.h>
#include "Source.h"
#include "MyString.h"
//void Enemy::Attack()
//{
//	std::cout << name << " does " << attack << " damage. \n";
//}

void State()
{
	std::cout << "Press any key other than 'Q' (Q quits the game) to achieve any random phone.  \n \n";
}

int main()
{
	//std::cout << "Incorrect way \n";
	//Animal * Tweet = new Bird();
	//Animal * Bark = new Dog();
	//Animal * Meow = new Cat();
	//Tweet->speak();
	//Bark->speak();
	//Meow->speak();
	//std::cout << "\nCorrect way \n";

	//Bird b = Bird();
	//Dog d = Dog();
	//Cat c = Cat();
	//Mammal ma = Mammal();

	//Animal * animalPointer;
	//animalPointer = &b;
	//animalPointer->speak();
	//animalPointer = &c;
	//animalPointer->speak();
	//animalPointer = &d;
	//animalPointer->speak();
	//animalPointer = &ma;
	//animalPointer->speak();

	//std::cout << " \nType: work \n";
	//Donray don = Donray();
	//Max m = Max();
	//Dylan dy = Dylan();
	//Student * sptr;
	//
	//sptr = &don;
	//sptr->doWork();
	//sptr = &m;
	//sptr->doWork();
	//sptr = &dy;
	//sptr->doWork();
	srand(time(NULL));

	AppleIhpone I = AppleIhpone();
	SamsungGalaxy G = SamsungGalaxy();
	SonyXperia X = SonyXperia();
	FlipPhone F = FlipPhone();
	CellularPhone * cptr;
	State();
	std::string chose;
	int randNum;
	while (_getch()!=113)
	{
		randNum = rand() % 4 + 1;
		switch (randNum)
		{
			case 1:
			{
				cptr = &I;
				cptr->Start();
				cptr->Run();
				cptr->Call();
				cptr->Game();
				cptr->Shutdown();
				State();
				break;
			}
			case 2:
			{
				cptr = &G;
				cptr->Start();
				cptr->Run();
				cptr->Call();
				cptr->Shutdown();
				State();
				break;
			}
			case 3:
			{
				cptr = &X;
				cptr->Start();
				cptr->Run();
				cptr->Call();
				cptr->Shutdown();
				State();
				break;
			}
			case 4:
			{
				cptr = &F;
				cptr->Start();
				cptr->Run();
				cptr->Call();
				cptr->Shutdown();
				State();
				break;
			}
		}

		/*	if (chose == "A")
			{
				cptr = &I;
				cptr->Start();
				cptr->Run();
				cptr->Shutdown();
			}
			if (chose == "B")
			{
				cptr = &s;
				cptr->Start();
				cptr->Run();
				cptr->Shutdown();
			}
			if (chose == "C")
			{
				cptr = &sX;
				cptr->Start();
				cptr->Run();
				cptr->Shutdown();
			}
			else
			{
				std::cout << "Press A, B, C. \n";
			}*/
	}
	system("pause");
	return 0;
}
