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
	bool win = false;
	do
	{
		char theGrid[] = { 219,219,219,219,219,219,219,219,219 };
		while (win == false)
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
			for (int x = 3; x < 6; x++)
			{
				if (theGrid[x] == 'X' && theGrid[x - 3] == 'X' && theGrid[x + 3] == 'X')
					win = true;
			}
			for (int x = 1; x < 8; x += 3)
			{
				if (theGrid[x] == 'X' && theGrid[x - 1] == 'X' && theGrid[x + 1] == 'X')
					win = true;
			}
			if (theGrid[4] == 'X' && theGrid[0] == 'X' && theGrid[8] == 'X')
				win = true;
			if (theGrid[4] == 'X' && theGrid[2] == 'X' && theGrid[6] == 'X')
				win = true;
			for (int x = 3; x < 6; x++)
			{
				if (theGrid[x] == 'O' && theGrid[x - 3] == 'O' && theGrid[x + 3] == 'O')
					win = true;
			}
			for (int x = 1; x < 8; x += 3)
			{
				if (theGrid[x] == 'O' && theGrid[x - 1] == 'O' && theGrid[x + 1] == 'O')
					win = true;
			}
			if (theGrid[4] == 'O' && theGrid[0] == 'O' && theGrid[8] == 'O')
				win = true;
			if (theGrid[4] == 'O' && theGrid[2] == 'O' && theGrid[6] == 'O')
				win = true;
			std::cout << std::endl;
		}
	} while (win == false);
}