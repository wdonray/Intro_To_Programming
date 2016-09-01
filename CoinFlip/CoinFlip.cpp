#include <iostream>
#include <time.h>

int main()
{

	srand(time(NULL));
	char toss = 1;
	int randNum;
	int num = rand();
	bool gameRunning = true;
	while (gameRunning)
	{
		std::cout << "Try and Guess my Toss! \n \n Enter 1 for heads... \n \n Enter 2 for tails... \n \n";
		std::cin >> toss;
		randNum = rand() % 2 + 1;
		switch (randNum)
		{
			case 1:
				std::cout << "It's Heads! " << std::endl;
				if (toss == randNum)
				{
					std::cout << "You WIN \n";
					gameRunning = false;
				}
				else
				{
					std::cout << "You Lose \n";
				}
				std::cout << std::endl;
				break;
			case 2:
				std::cout << "It's Tails! " << std::endl;
				if (toss == randNum)
				{
					std::cout << "You WIN \n";
					gameRunning = false;
				}
				else
				{
					std::cout << "You Lose \n";
				}
				std::cout << std::endl;
				break;
		}
	}
	system("pause");
	return num;
}

