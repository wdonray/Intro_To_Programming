#pragma once
#include <string>
#include <iostream>
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

class Animal
{
public: 
	virtual void speak() = 0;
};

class Mammal : public Animal
{
public :
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
public :
	Dog() {};
	void speak() { std::cout << "woof \n"; };
	void bark() { std::cout << "bark \n"; };
};

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
		std::cout << "Max: LUL \n \n";
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