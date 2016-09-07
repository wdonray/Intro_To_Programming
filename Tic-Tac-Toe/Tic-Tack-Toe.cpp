#include <iostream>
#include <time.h>
#include <windows.h>

void TicTacToe();

int main()
{
	srand(time(NULL));
	TicTacToe();
	system("pause");
	return 0;
}
void TicTacToe()
{

	std::cout << "Welcome to Tic Tac Toe! You are x, computer is o \n \nthe game shall begin once you enter a placement number. \n \n";
	bool win = false;
	do
	{
		char theGrid[] = { 219,219,219,219,219,219,219,219,219, };
		while (win == false)
		{
			int userChoice;
			std::cin >> userChoice;
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
}