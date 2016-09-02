#include <iostream>
#include "ProjectZom.h"

Zombie::Zombie(int h, int d, const char * o)
{
	m_hp = h;
	m_damage = d;
	m_occupation = o;
}

void Zombie::attack(Zombie & defender)
{
	this -> m_hp -= 20;
	defender.m_hp -= this->m_damage;

	const char * o = defender.m_occupation.c_str();
	const char * u = this-> m_occupation.c_str();
	
	std::cout << "The remaining hp of the first Zombie is [" << defender.m_hp << "] he was a " << u << "!\n \n";

	std::cout << "The remaining hp of the second Zombie is [" << this -> m_hp << "] he was a " << o << "!\n \n";
}
