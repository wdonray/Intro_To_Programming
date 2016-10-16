#pragma once
#include <string>
#include <iostream>
#include <Windows.h>
#include <time.h>

template <class T>

class Stash
{
public:
	Stash(int size) : m_size(size) {};
	bool Add(T a);
	int m_size;
	T * items = new T;
};

template <class T>

bool Stash <T>::Add(T a)
{
	items[0] = a;
	return true;
}

class Weapon
{
public:
	Weapon(float min, float max, float aSpeed, std::string name) : m_minimumDamage(min), m_maximumDamage(max), m_attackspeed(aSpeed), m_name(name) {};
	float DamagePerSecond();
	bool operator == (const Weapon& Check)const;
	//Weapon(std::string name) : m_name(name) {};
	//std::string m_name;
private:
	float m_minimumDamage;
	float m_maximumDamage;
	float m_attackspeed;
	std::string m_name;
};

float Weapon::DamagePerSecond()
{
	return ((m_maximumDamage + m_minimumDamage) / 2) / m_attackspeed;
}

class Club : public Weapon
{
public:
	Club(float a, float b, float c, std::string n) : Weapon(a, b, c, n) {};
};

class Sword : public Weapon
{
public:
	Sword(float a, float b, float c, std::string n) : Weapon(a, b, c, n) {};
};

bool Weapon::operator==(const Weapon& Check) const
{
	if (this->m_attackspeed == Check.m_attackspeed&&m_maximumDamage == Check.m_maximumDamage&&m_minimumDamage == Check.m_minimumDamage &&m_name == Check.m_name)
		return true;
	return false;
}
