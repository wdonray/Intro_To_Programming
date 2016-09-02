#pragma once
class Zombie
{
public:
	Zombie(int h, int d, const char * o);
	void attack(Zombie &); 

private:
	int m_hp; //declares a variable called m_hp with the type interger
	int m_damage; //declares a variable called m_damage with type interger
	std::string m_occupation; //
};