#pragma once
#include <string>
#include <iostream>
#include <windows.h>
//-----------------------------------------------------------------------------
class Enemy
{
	int health;
	int attack;
	std::string name;
public:
	void Attack();
	Enemy(int hp, int attack, std::string name) : health(hp), attack(attack), name(name)
	{}
};

class Weapon
{
	std::string name;
	float damage;
public:
	Weapon(std::string a, float b) : name(a), damage(b)
	{}
};

class Orc : public Enemy
{
	Weapon * mainhand;
	Weapon * offhand;
public:
	Orc(int a, int b, std::string c) : Enemy(a, b, c) {}

};

class Troll : public Enemy
{
	Weapon * Club;
public:
	Troll(int a, int b, std::string c) : Enemy(a, b, c) {}
};
//-----------------------------------------------------------------------------

class Animal
{
public:
	virtual void speak() = 0;
};

class Mammal : public Animal
{
public:
	Mammal() {};
	void speak() {};
	void bark() {};
};

class Bird : public Animal
{
public:
	Bird() {};
	void speak() { std::cout << "tweet \n"; };
};

class Cat : public Animal
{
public:
	Cat() {};
	void speak() { std::cout << "meow \n"; };
	void purr() { std::cout << "purr \n"; };
};

class Dog : public Animal
{
public:
	Dog() {};
	void speak() { std::cout << "woof \n"; };
	void bark() { std::cout << "bark \n"; };
};
//-----------------------------------------------------------------------------

class Student
{
public:
	virtual void doWork() = 0;
};

class Donray : public Student
{
public:
	Donray() {};
	void doWork()
	{
		std::string work;
		std::getline(std::cin, work);
		if (work == "work")
		{
			std::cout << "Donray: Thanks for typing work \n \n";
			std::cout << "Type : work please \n \n";
		}
		else
		{
			std::cout << "lul type work next time ty\n \n";
		}
	}
};

class Max : public Student
{
public:
	Max() {};
	void doWork()
	{
		std::string work;
		std::getline(std::cin, work);
		if (work == "work please")
		{
			std::cout << "Max: Thanks for typing work \n \n";
		}
		else
		{
			std::cout << "lul type work please next time ty\n \n";
		}
	}
};

class Dylan : public Student
{
public:
	Dylan() {};
	void doWork()
	{
		std::cout << "Dylan: aye \n \n";
	}
};
//-----------------------------------------------------------------------------

class CellularPhone
{
public:
	CellularPhone() { phoneRunning = true; };
	virtual void Start() = 0;
	virtual void Update() = 0;
	virtual void Shutdown() = 0;
	void Run();
	void Work();
	void Test();
protected:
	bool phoneRunning;
};

class appleIhpone : public CellularPhone
{
public:
	appleIhpone() {};
	void Start() { std::cout << "OverPriced garbage\n"; Sleep(500); }
	void Update() {
		std::cout << "This is an Apple Iphone.\n";
		Work();
	}
	void Shutdown() {
		std::cout << "You are now leaving apple.\n";
		Test();
	}
};

class samsungGalaxy : public CellularPhone
{
public:
	samsungGalaxy() {};
	void Start() { std::cout << "Decent OverPriced garbage\n"; Sleep(500); }
	void Update() {
		std::cout << "This is an Samsung Galaxy.\n";
		Work();
	}
	void Shutdown() {
		std::cout << "Come back 2 samsung. \n";
		Test();
	}
};

class sonyXperia : public CellularPhone
{
public:
	sonyXperia() {};
	void Start() { std::cout << "I have never heard of this phone\n"; Sleep(500); }
	void Update() {
		std::cout << "This is an Sony Xperia.\n";
		Work();
	}
	void Shutdown() {
		std::cout << "We also dont know what this phone is, lata. \n";
		Test();
	}
};

void CellularPhone::Run()
{
	while (phoneRunning)
	{
		Update();
	}
}

void CellularPhone::Work()
{
	system("pause");
	phoneRunning = false;
	system("cls");
}

void CellularPhone::Test()
{
	Sleep(500); phoneRunning = true;
	system("cls");
}

//-----------------------------------------------------------------------------