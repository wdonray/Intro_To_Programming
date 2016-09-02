#include <iostream>
#include <time.h>
#include <windows.h>
struct Player
{
	int userGuess;
	char name[255];
	int otherGuess;
};

int main()
{
	Player Lilly = { 0, "Lilly", 0 };
	Player Lobster = { 0, "Lobster", 0 };
	srand(time(NULL));
	int roll = 0;
	bool gameRunning = true;
	while (gameRunning)
	{
		int userinput;
		std::cout << "How many times would you like to roll my dice? \n \n";
		std::cin >> userinput;

		int diceRoll = rand() % 6 + 1;
		std::cout << "What side do you think you will land on " << Lilly.name << "? Guess correctly or die. \n \n";
		std::cin >> Lilly.userGuess;
		std::cout << "And what about you? Mr. " << Lobster.name << "... \n \n";
		std::cin >> Lobster.otherGuess;

		std::cout << "It was : [" << diceRoll << "] \n \n";
		if (Lilly.userGuess == diceRoll || (Lilly.userGuess <= diceRoll && Lilly.userGuess > Lobster.otherGuess))
		{
			Sleep(1200);
			{
				std::cout << "Good Job " << Lilly.name << " shall live another day. \n \n";
			}
			std::cout << Lobster.name << " dies.\n \n";
			gameRunning = false;
			break;
		}
		else if (Lilly.userGuess > 6 || Lobster.otherGuess > 6)
		{
			std::cout << "Dude how many sides are on a dice cmon... RIP u ded \n \n";
			gameRunning = false;
			break;
		}
		else if (Lobster.otherGuess == diceRoll || (Lobster.otherGuess <= diceRoll && Lobster.otherGuess > Lilly.userGuess))
		{
			Sleep(1200);
			{
				std::cout << "Good Job " << Lobster.name << " shall live another day. \n \n";
			}
			std::cout << Lilly.name << " dies \n \n";
			gameRunning = false;
			break;
		}
		else if (Lobster.otherGuess == Lilly.userGuess && Lobster.otherGuess < diceRoll)
		{
			Sleep(1200);
			{
				std::cout << "You both Fail. RIP \n \n";
			}
			gameRunning = false;
			break;
		}
		else if (Lobster.otherGuess == Lilly.userGuess && Lobster.otherGuess <= diceRoll)
		{
			Sleep(1200);
			{
				std::cout << "You both Win.... \n \n";
			}
			gameRunning = false;
			break;
		}
		else
		{
			Sleep(1200);
			{
				std::cout << "You both have failed, good luck on the other side. \n \n";
			}
			gameRunning = false;
			break;
		}
	}
	system("pause");
	return 0;
}