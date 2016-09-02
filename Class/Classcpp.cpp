#include <iostream>
#include <time.h>
class Player
{
public:
	Player() {};
};
class Enemy
{
public:
	void attack() {};
	Enemy()
	{
		health = 0;
		m_name = "dummy";
		for (int i = 0; i < 5; i++)
			m_goodies[i] = 1;
		m_attackPower = 0;
		m_defense = 0;

	};
	Enemy(std::string n, int mana, int hea)
	{
		m_name = n;
		m_resource = mana;
		health = hea;
	};
	Enemy(char nam[]) {};
protected:
	int health;
	std::string m_name;
	int m_name[255];
	int m_resource;
	int m_goodies[5]; //Backpack Space
	int m_attackPower;
	int m_defense;
private:
	int porn[500];
};

class Player : public Enemy
{
public:
	Player(std::string n, int h, int m) : Enemy(n, h, m)
	{
	
	}
};

int main()
{

}