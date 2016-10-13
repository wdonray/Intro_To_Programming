#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <time.h>

class Application
{
public:
	Application() { gameRunning = true; };
	virtual void Start() = 0;
	virtual void Update() = 0;
	virtual void Shutdown() = 0;
	void Run();
protected:
	bool gameRunning;
};
class RockPaperScissors : public Application
{
public:
	RockPaperScissors() {};
	void Start()
	{
		std::cout << "You enter a game of Rock, Paper, Scissors. \n \n";
		std::cout << "You are VS some loser... \n \n";
		std::cout << "1 - Rock, 2 - Paper, 3 - Scissors \n \n";
		std::cout << "Type E after playing once to leave game.\n \n" ;
	}
	void Update();
	void Shutdown()
	{
		std::cout << "Game is now shutting down. \n \n";
	}
	void rps();
};
void RockPaperScissors::rps()
{
	bool win = false;
	while (win == false)
	{
		srand(time(NULL));
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
	}
	std::string leave;
	std::cin.ignore();
	std::cin >> leave;
	if (leave == "E")
	{
		gameRunning = false;
	}

}
void RockPaperScissors::Update()
{
	rps();
}
void Application::Run()
{
	while (gameRunning)
	{
		Update();
	}
}

class Math
{
public:
	static int add(int a, int b) { return a + b; };
};

