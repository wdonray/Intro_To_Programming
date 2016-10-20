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
		std::string response;
		std::cin >> response;
		std::cin.ignore();
		while (response != "Y" && response != "N" && response != "Yes" && response != "No")
		{
			std::cout << "Try Again Please \n";
			std::cin >> response;
			std::cin.ignore();
		}
		if (response == "Y" || response == "Yes")
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
					system("pause");
				}
				else if (choice == 2)
				{
					Sleep(200);
					std::cout << "Well, you should know how this one ends up... \n \n";
					system("pause");
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
					system("pause");
				}
				else if (choice == 2)
				{
					Sleep(200);
					std::cout << "Well, you should know how this one ends up... \n \n";
					system("pause");
				}

			}
		}
		else if (response == "N" || response == "No")
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
			srand(time(NULL));
			std::cout << "Hello and welcome to my fake game on this fake phone.... \n \n";
			std::cout << "Try and guess the number I am thinking its between 1 - 10 \n";
			int randN;
			int guess;
			std::cout << "Enter Number: ";
			std::cin >> guess;
			randN = rand() % 10 + 1;
			if (randN == guess)
			{
				std::cout << "Correct \n \n";
				system("pause");
			}
			else
			{
				std::cout << "Incorrect it was : " << randN << "\n \n ";
				system("pause");
			}

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
				std::cout << "I mean just pray right? \n";
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
			std::cout << "Welcome to TIC TACK TOE enter in a number that start a placement for your X, once complete the grid shall appear. \n \n";
			bool win = false;
			do
			{
				char theGrid[] = { 219,219,219,219,219,219,219,219,219, };
				while (win == false)
				{
					int userChoice;
					//std::cin.ignore();
					std::cout << "Enter Placement: ";
					std::cin >> userChoice;
					///Tried to give an error message if you entered anything besides 1-9, failed.
					/*while (userChoice != 1 || userChoice != 2 || userChoice != 3 || userChoice != 4 || userChoice != 5 || userChoice != 6 || userChoice != 7 || userChoice != 8 || userChoice != 9)
					{
						std::cout << "Please enter a number frome 1 - 9 \n";
						std::cin >> userChoice;
					}*/
					system("cls");
					while (theGrid[userChoice - 1] == 'x' || theGrid[userChoice - 1] == 'o')
					{
						std::cin >> userChoice;
					}
					theGrid[userChoice - 1] = 'x';
					int pcChoice = rand() % 9 + 1;
					while (theGrid[pcChoice - 1] == 'x' || theGrid[pcChoice - 1] == 'o')
					{
						pcChoice = rand() % 9 + 1;
					}
					theGrid[pcChoice - 1] = 'o';
					for (int i = 1; i < 10; i++)
					{
						{
							std::cout << theGrid[i - 1] << " ";
						}
						if (i % 3 == 0)
						{
							std::cout << "\n \n";
						}
					}
					for (int x = 3; x < 6; x++)
					{
						if (theGrid[x] == 'x' && theGrid[x - 3] == 'x' && theGrid[x + 3] == 'x')
						{
							std::cout << "You Win. \n \n";
							win = true;
						}
					}
					for (int x = 1; x < 8; x += 3)
					{
						if (theGrid[x] == 'x' && theGrid[x - 1] == 'x' && theGrid[x + 1] == 'x')
						{
							std::cout << "You Win. \n \n";
							win = true;
						}
					}
					if (theGrid[4] == 'x' && theGrid[0] == 'x' && theGrid[8] == 'x')
					{
						std::cout << "You Win. \n \n";
						win = true;
					}
					if (theGrid[4] == 'x' && theGrid[2] == 'x' && theGrid[6] == 'x')
					{
						std::cout << "You Win. \n \n";
						win = true;
					}
					for (int x = 3; x < 6; x++)
					{
						if (theGrid[x] == 'o' && theGrid[x - 3] == 'o' && theGrid[x + 3] == 'o')
						{
							std::cout << "You Lose. \n \n";
							win = true;
						}
					}
					for (int x = 1; x < 8; x += 3)
					{
						if (theGrid[x] == 'o' && theGrid[x - 1] == 'o' && theGrid[x + 1] == 'o')
						{
							std::cout << "You Lose. \n \n";
							win = true;
						}
					}
					if (theGrid[4] == 'o' && theGrid[0] == 'o' && theGrid[8] == 'o')
					{
						std::cout << "You Lose. \n \n";
						win = true;
					}
					if (theGrid[4] == 'o' && theGrid[2] == 'o' && theGrid[6] == 'o')
					{
						std::cout << "You Lose. \n \n";
						win = true;
					}
				}
			} while (win == false);
			Work();
		}
		else if (response == 'N')
			Work();
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
			std::cout << "No Service??? This thing sucks... \n";
			system("pause");
		}
		else if (response == 'N')
			Work();
	}

	void Game()
	{
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
			system("cls");
			bool win = false;
			do
			{
				srand(time(NULL));
				std::cout << "You enter a game of Rock, Paper, Scissors. \n \n";
				std::cout << "You are VS some loser... \n \n";
				std::cout << "1 - Rock, 2 - Paper, 3 - Scissors \n \n";
				std::cout << "You get one chance, good luck soldier. \n";
				system("pause");
				system("cls");
				std::cout << "Enter Number: ";
				int userChoice;
				std::cin >> userChoice;
				while (!std::cin)
				{
					std::cout << "Not a valid index or play one more time to exit" << std::endl;
					std::cin.clear();
					std::cin.ignore();
					std::cin >> userChoice;
				}
				int pcChoice;
				pcChoice = rand() % 3 + 1;
				std::cout << "Computer chose: " << pcChoice << "\n \n";

				if (pcChoice == userChoice)
				{
					std::cout << "Tie \n \n";
					win = true;
				}
				else if (userChoice == 1 && pcChoice == 2)
				{
					std::cout << "You Lose" << std::endl;
					win = true;
				}
				else if (userChoice == 1 && pcChoice == 3)
				{
					std::cout << "You Win" << std::endl;
					win = true;
				}
				else if (userChoice == 2 && pcChoice == 1)
				{
					std::cout << "You Win" << std::endl;
					win = true;
				}
				else if (userChoice == 2 && pcChoice == 3)
				{
					std::cout << "You lose" << std::endl;
					win = true;
				}
				else if (userChoice == 3 && pcChoice == 1)
				{
					std::cout << "You Win" << std::endl;
					win = true;
				}
				else if (userChoice == 3 && pcChoice == 2)
				{
					std::cout << "You lose" << std::endl;
					win = true;
				}
			} while (win == false);
			Work();
		}
		else if (response == 'N')
			Work();
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
		std::cout << "No game yet \n ";
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