#pragma once
#include <string>
#include <iostream>
#include <windows.h>

class Weapon
{
public:
	float DamagePerSecond();
private:
	float m_minimumDamage;
	float m_maximumDamage;
	float m_attackspeed;

};