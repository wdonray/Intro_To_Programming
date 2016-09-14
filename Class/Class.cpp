#include <iostream>
#include <time.h>
#include "ProjectZom.h"


class Student
{
public:
	Student() {};
	Student(int age, char * names)
	{
		m_age = age;
		m_names = names;
	}
	char * m_names;
private:
	int m_age;
};

bool Swap(Student &a, Student &b)
{
	Student tmp = a;
	b = a;
	b = tmp;
	return true;
}
int main()
{
	Zombie first = Zombie(100, 20, "Dad");
	Zombie second = Zombie(200, 30, "Boxer");
	std::cout << "Dad Zombie has : [" << first.m_hp << "] HP \n";
	std::cout << "Boxer Zombie has : [" << second.m_hp << "] HP \n";
	std::cout << "---------------------------------------------------------- \n";
	for (int i = 0; i < 5; i++)
	{

		first.attack(second);
		std::cout << "---------------------------------------------------------- \n";
	}

	Inventory zombiefirstInv;
	Inventory zombiesecondInv;

	Item leg = Item("Leg", 15, true, 4);
	Item arm = Item("Arm", 10, true, 3);
	Item brain = Item("Brain", 10, false, 1);

	zombiefirstInv.addItem(leg);
	zombiefirstInv.addItem(arm);
	zombiefirstInv.printInventory();
	zombiesecondInv.addItem(brain);
	zombiesecondInv.printInventory();

	Student Donray = Student(20, "Donray");
	Student Max = Student(10, "Max");
	Student Students[2] = { Donray, Max };
	Swap(Students[0], Students[1]);
	system("pause");
	return 0;
}