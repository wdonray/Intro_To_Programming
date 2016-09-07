#include <iostream>
#include <time.h>
#include<windows.h>

void TicTacToe();

int main()
{
	TicTacToe();
	system("return");
	return 0;
}
void TicTacToe()
{

	std::cout << "Welcome to Tic Tac Toe! You are X, computer is O \n \nthe game shall begin once you enter a placement number. \n \n";
	bool Win = false;
	do
	{
		char theGrid[] = { 219,219,219,219,219,219,219,219,219 };
		while (Win == false)
		{
			int userChoice;
			std::cin >> userChoice;
			while (theGrid[userChoice - 1] == 'X' || theGrid[userChoice - 1] == 'O')
			{
				std::cin >> userChoice;
			}
			theGrid[userChoice - 1] = 'X';
			int pcChoice = rand() % 9 + 1;
			while (theGrid[pcChoice - 1] == 'X' || theGrid[pcChoice - 1] == 'O')
			{
				pcChoice = rand() % 9 + 1;
			}
			theGrid[pcChoice - 1] = 'O';
			for (int i = 1; i < 10; i++)
			{
				{
					std::cout << theGrid[i - 1] << " ";
				}
				if (i % 3 == 0)
				{
					std::cout << std::endl;
				}
			}
			for (int j = 3; j < 6; j++)
			{
				if (theGrid[j] == 'X' && theGrid[j - 3] == 'X' && theGrid[j + 3] == 'X')
					Win = true;
			}
			for (int j = 1; j < 8; j += 3)
			{
				if (theGrid[j] == 'X' && theGrid[j - 1] == 'X' && theGrid[j + 1] == 'X')
					Win = true;
			}
			if (theGrid[4] == 'X' && theGrid[0] == 'X' && theGrid[8] == 'X')
				Win = true;
			if (theGrid[4] == 'X' && theGrid[2] == 'X' && theGrid[6] == 'X')
				Win = true;
			for (int j = 3; j < 6; j++)
			{
				if (theGrid[j] == 'O' && theGrid[j - 3] == 'O' && theGrid[j + 3] == 'O')
					Win = true;
			}
			for (int j = 1; j < 8; j += 3)
			{
				if (theGrid[j] == 'O' && theGrid[j - 1] == 'O' && theGrid[j + 1] == 'O')
					Win = true;
			}
			if (theGrid[4] == 'O' && theGrid[0] == 'O' && theGrid[8] == 'O')
				Win = true;
			if (theGrid[4] == 'O' && theGrid[2] == 'O' && theGrid[6] == 'O')
				Win = true;
			std::cout << std::endl;
		}
	} while (Win == false);
}