#include <iostream>
#include "Header.h"
#include <time.h>
#include <Windows.h>
#include <string>
void Enemy::Attack()
{
	std::cout << name << " does " << attack << " damage. \n";
}

int main()
{
	//Enemy * First = new Orc(500, 100, "Donray");
	//Enemy * LittleFirst = new Troll(200, 25, "Max");
	//First->Attack();
	//LittleFirst->Attack();
	
	std::cout << "Incorrect way \n";

	Animal * Tweet = new Bird();
	Animal * Bark = new Dog();
	Animal * Meow = new Cat();

	Tweet->speak();

	Bark->speak();

	Meow->speak();

	std::cout << "\nCorrect way \n";

	Bird b = Bird();
	Dog d = Dog();
	Cat c = Cat();
	Mammal ma = Mammal();

	Animal * animalPointer;

	animalPointer = &b;
	animalPointer->speak();

	animalPointer = &c;
	animalPointer->speak();

	animalPointer = &d;
	animalPointer->speak();

	animalPointer = &ma;
	animalPointer->speak();

	std::cout << " \nType: work \n";

	Donray don = Donray();
	Max m = Max();
	Dylan dy = Dylan();

	Student * sptr;
	
	sptr = &don;
	sptr->doWork();
	sptr = &m;
	sptr->doWork();
	sptr = &dy;
	sptr->doWork();

	system("pause");
	return 0;
}
