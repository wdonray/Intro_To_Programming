#include <iostream>
#include <time.h>
#include<windows.h>

void rps();

int main()
{
	rps();
	system("pause");
	return 0;
}
void rps()
{
	std::cout << "You enter a game of Rock, Paper, Scissors. \n \n";
	std::cout << "You are VS some loser... \n \n";
	std::cout << "1 - Rock, 2 - Paper, 3 - Scissors \n";
	bool win = false;
	while (win == false)
	{
		srand(time(NULL));
		int userChoice;
		std::cin >> userChoice;
		int pcChoice;
		pcChoice = rand() % 3 + 1;
		std::cout << "Computer chose: " << pcChoice << "\n \n";

		if (pcChoice == userChoice)
		{
			std::cout << "Tie \n \n";
			break;
		}
		else if (userChoice == 1 && pcChoice == 2)
		{
			std::cout << "You Lose" << std::endl;
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
		}
		else if (userChoice == 3 && pcChoice == 1)
		{
			std::cout << "You Win" << std::endl;
			win = true;
		}
		else if (userChoice == 3 && pcChoice == 2)
		{
			std::cout << "You lose" << std::endl;
		}
	}
}