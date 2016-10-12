#pragma once
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