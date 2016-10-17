#pragma once
#include <string>
#include <iostream>
#include <Windows.h>
#include "MyString.h"
#include <time.h>
#include <conio.h>

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
	virtual void Call() = 0;
	virtual void Game() = 0;
	void Run();
	void Work();
	void Test();
	//void Short(void);
	void Ring();
	//void PrintInfo();
	const char * m_text;

protected:
	bool phoneRunning;
};
class AppleIhpone : public CellularPhone
{
public:
	AppleIhpone() {};
	void Start() { std::cout << "OverPriced garbage\n"; Sleep(500); }
	void Update() {
		std::cout << "This is an Apple Iphone.\n \n";
		Work();
	}

	void Call()
	{
		std::cout << "Would you like to make a call? (Press Y/Yes , N/No) \n";
		char response;
		std::cin >> response;
		std::cin.ignore();
		while (response != 'Y' && response != 'N')
		{
			std::cout << "Try Again Please \n";
			std::cin >> response;
			std::cin.ignore();
		}
		if (response == 'Y')
		{
			std::cout << "Who would you like to call? \n1. Steve Jobs \n2. Ronald Wayne \n3. Steve Wozniak \n \n";
			int choice = 0;
			std::cin >> choice;
			system("cls");
			if (choice == 1)
			{
				Ring();
				std::cout << "You've reached Steve Jobs. I'm currently unable to take your call.\n \n";
				system("pause");
			}
			else if (choice == 2)
			{
				Ring();
				std::cout << "Ronald Wayne: Hello, who is this and how did you get my personal number? \n \n";
				Sleep(200);
				std::cout << "			~How shall you respond?~ \n \n1. Tell him your name and explain everything. \n2. Curse him out for no reason.\n";
				std::cin >> choice;
				if (choice == 1)
				{
					Sleep(200);
					std::cout << "Enter name: ";
					std::string name;
					std::cin.ignore();
					std::getline(std::cin, name);
					Sleep(200);
					std::cout << name << ": " << "My name is " << name << " and I was just playing a game and ... \n";
					std::cout << "Ronald Wayne: I'm calling the police. *Hangs up* \n";
				}
				else if (choice == 2)
				{
					Sleep(200);
					std::cout << "Well, you should know how this one ends up... \n \n";
				}
			}
			else if (choice == 3)
			{
				Ring();
				std::cout << "Steve Wozniak: Hello, who is this and how did you get my personal number? \n \n";
				Sleep(200);
				std::cout << "			~How shall you respond?~ \n \n1. Tell him your name and explain everything. \n2. Curse him out for no reason.\n";
				std::cin >> choice;
				if (choice == 1)
				{
					Sleep(200);
					std::cout << "Enter name: ";
					std::string name;
					std::cin.ignore();
					std::getline(std::cin, name);
					Sleep(200);
					std::cout << name << ": " << "My name is " << name << " and I was just playing a game and ... \n";
					std::cout << "Steve Wozniak: I'm calling the police. *Hangs up* \n";
				}
				else if (choice == 2)
				{
					Sleep(200);
					std::cout << "Well, you should know how this one ends up... \n \n";
					system("pause");
				}

			}
		}
		else if (response == 'N')
			Work();
	}

	void Game()
	{
		system("cls");
		std::cout << "Would you like to play a game? (Press Y/Yes , N/No) \n";
		char response;
		std::cin >> response;
		std::cin.ignore();
		while (response != 'Y' && response != 'N')
		{
			std::cout << "Try Again Please \n";
			std::cin >> response;
			std::cin.ignore();
		}
		if (response == 'Y')
		{
			std::cout << "it worked \n ";
		}
		else if (response == 'N')
			Work();
	}

	void Shutdown() {
		std::cout << "You are now leaving apple.\n";
		Test();
	}

};

class SamsungGalaxy : public CellularPhone
{
public:
	SamsungGalaxy() {};
	void Start() { std::cout << "Decent OverPriced garbage\n"; Sleep(500); }

	void Update() {
		std::cout << "This is an Samsung Galaxy.\n \n";
		Work();
	}

	void Call()
	{
		std::cout << "Would you like to make a call? (Press Y/Yes , N/No) \n";
		char response;
		std::cin >> response;
		std::cin.ignore();
		while (response != 'Y' && response != 'N')
		{
			std::cout << "Try Again Please \n";
			std::cin >> response;
			std::cin.ignore();
		}
		if (response == 'Y')
		{
			std::cout << "Who would you like to call? \n1. Donray Williams \n2. God \n3. Some Sneakers \n \n";
			int choice = 0;
			std::cin >> choice;
			system("cls");
			if (choice == 1)
			{
				Ring();
				std::cout << "You've reached Donray Williams. I'm currently unable to take your call BECAUSE I'M OUT MAKING MONEY.\n \n";
				system("pause");
			}
			if (choice == 2)
			{
				Ring();
				std::cout << "You can't call God fool... \n";
				system("pause");
			}
			if (choice == 3)
			{
				Ring();
				std::cout << "Nigga.... \n";
				system("pause");
			}

		}
		else if (response == 'N')
			Work();
	}

	void Game()
	{

	}

	void Shutdown() {
		std::cout << "Come back 2 samsung. \n";
		Test();
	}
};

class SonyXperia : public CellularPhone
{
public:
	SonyXperia() {};
	void Start() { std::cout << "I have never heard of this phone\n"; Sleep(500); }

	void Update() {
		std::cout << "This is an Sony Xperia.\n \n";
		Work();
	}

	void Call()
	{
		std::cout << "Would you like to make a call? (Press Y/Yes , N/No) \n";
		char response;
		std::cin >> response;
		std::cin.ignore();
		while (response != 'Y' && response != 'N')
		{
			std::cout << "Try Again Please \n";
			std::cin >> response;
			std::cin.ignore();
		}
		if (response == 'Y')
		{
			std::cout << "Test \n";
		}
		else if (response == 'N')
			Work();
	}

	void Game()
	{

	}


	void Shutdown() {
		std::cout << "We also dont know what this phone is, lata. \n";
		Test();
	}
};

class FlipPhone : public CellularPhone
{
public:
	FlipPhone() {};
	void Start() { std::cout << "A Flip Phone....\n"; Sleep(500); }
	void Update() {
		std::cout << "Flippers\n \n";
		Work();
	}

	void Call()
	{
		std::cout << "Would you like to make a call? (Press Y/Yes , N/No) \n";
		char response;
		std::cin >> response;
		std::cin.ignore();
		while (response != 'Y' && response != 'N')
		{
			std::cout << "Try Again Please \n";
			std::cin >> response;
			std::cin.ignore();
		}
		if (response == 'Y')
		{
			std::cout << "Test \n";
		}
		else if (response == 'N')
			Work();
	}

	void Game()
	{

	}


	void Shutdown() {
		std::cout << "Insert angry Flip Phone style close. \n";
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
	Sleep(2000); phoneRunning = true;
	system("cls");
}

void CellularPhone::Ring()
{

	///Tried to randomize the call, failed

	//srand(time(NULL));
	//int workplz;
	//workplz = rand() % 3 + 1;
	//switch (workplz)
	//{
	//	case 1:

			///This works
			char m_text[255] = ("Ring ... Ring .... Ring \n");
			for (int i = 0; m_text[i] != '\0'; ++i)
			{
				std::cout << m_text[i];
				Sleep(120);
			}
			std::cout << std::endl;
		//case 2:
		//	char m_text[255] = ("Ring ... Ring .... Ring .... Ring \n");
		//	for (int i = 0; m_text[i] != '\0'; ++i)
		//	{
		//		std::cout << m_text[i];
		//		Sleep(120);
		//	}
		//	std::cout << std::endl;
		//case 3:
		//	char m_text[255] = ("Ring ... U suck .... Ring .... Ring \n");
		//	for (int i = 0; m_text[i] != '\0'; ++i)
		//	{
		//		std::cout << m_text[i];
		//		Sleep(120);
		//	}
		//	std::cout << std::endl;
	}

	///Attempteed to slow text down, failed 

	//void CellularPhone::PrintInfo()
	//{
	//	for (int i = 0; m_text[i] != '\0'; ++i)
	//	{
	//		std::cout << m_text[i];
	//		Sleep(12);
	//	}
	//	std::cout << std::endl;
	//};

	///Tried to clear some space, failed 

	//void CellularPhone::Short()
	//{
	//	std::cout << "Would you like to make a call? (Press Y/Yes , N/No) \n";
	//	char response;
	//	std::cin >> response;
	//	std::cin.ignore();
	//	while (response != 'Y' && response != 'N')
	//	{
	//		std::cout << "Try Again Please \n";
	//		std::cin >> response;
	//		std::cin.ignore();
	//	}
	//}

	//-----------------------------------------------------------------------------