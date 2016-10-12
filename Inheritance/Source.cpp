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
	Mammal m = Mammal();

	Animal * animalPointer;

	animalPointer = &b;
	animalPointer->speak();

	animalPointer = &c;
	animalPointer->speak();

	animalPointer = &d;
	animalPointer->speak();

	animalPointer = &m;
	animalPointer->speak();

	system("pause");
	return 0;
}
