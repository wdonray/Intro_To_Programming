#pragma once
#include <string>
class Zombie
{
public:
	Zombie(int h, int d, const char * o);
	void attack(Zombie &);
	int m_hp; //declares a variable called m_hp with the type interger
private:
	int m_damage; //declares a variable called m_damage with type interger
	std::string m_occupation; //Declares a string called occupation
};

class Item
{
public:
	Item() {};

	Item(char * name, int weight, bool stackable, int stackcount) 
	{
		m_name = name; 
		m_weight = weight;
		m_stackable = stackable;
		m_stackCount = stackcount;

	}
 char * m_name; // A name for each item
private:
	
	float m_weight; // Declare a weight with type interger
	bool m_stackable; // If you can stack or not 
	int m_stackCount; // Max stack amount 
};

class Inventory
{
public:
	Inventory()
	{
		m_count = 0;
	};
	bool addItem(Item&item)
	{
		/*for (int i = 0; i < 16; i++)
		{
			if (m_items[i] != NULL)
			{
				m_items[i] = item;
				break;
			}

		}*/
		if (m_count > 16)
		{
			return false;
		}
		m_items[m_count] = item;
		m_count++;
		return true;
	}

	void printInventory()
	{
		for (int i = 0; i < m_count; i++)
		{
			std::cout << "Item @ " << i << " is a " << m_items[i].m_name << "\n";
		}
	}
private:
	Item m_items[16];
	int m_size = 16;
	int m_count;
};
 
 