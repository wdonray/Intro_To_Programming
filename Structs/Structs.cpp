#include <iostream>
#include <time.h>
#include <windows.h>

struct Zombie
{
	int hp;
	bool alive;
	int spirit;
};
struct Ninja
{
	int hp;
	bool alive;
	int chi;
};
int Fight(Zombie &z, Ninja &n)
{
	int Ouch = rand() % 45 + 5;
	//Creates a random number between 5 - 50
	std::cout << "Zombie has attacked ninja!" << "\n \n";
	n.hp -= Ouch;
	if (n.hp <= 0)
	{
		std::cout << "The Ninja took " << Ouch << " Damage! [Hp is now] -> |" << "0" << "| \n \n";
	}
	else
	{
		std::cout << "The Ninja took " << Ouch << " Damage! [Hp is now] -> |" << n.hp << "| \n \n";
	}
	z.spirit -= 1;
	//Subtracts 1 spirit each turn
	std::cout << "The Zombie used 1 Spirit point [Spirit is now] -> |" << z.spirit << "| \n";
	std::cout << "----------------------------------------------------- \n";
	//Fighting is when a ninja or zombie does "damage" to the other
	//Damage is when health variable is decremented of either ninja or zombie
	//in order to do "damage" you must "attack"
	//"attack" is able to be performed if you have positive chi or spirit for a ninja and zombie 
	return 1;
	//If I return 0 will everything work fine / Why return 1?
}
//Problems
//Shows its -hp instead of just 0 - Fixed
int main()
{
	srand(time(NULL));
	Zombie chris = { 90, true, 5 };
	Zombie matthew = { 100, true, 15 };
	//States Hp amount, Alive is true,  spirit or chi amount
	Ninja regi = { 150, true, 25 };
	Ninja wilson = { 100, true, 20 };

	char input = '0'; //What does this mean?
	std::cout << "		-----------------------------------------------\n \n";
	std::cout << "		Hello NewComer and Welcome to Zombie Vs. Ninja!  \n \n";
	std::cout << "		----------------------------------------------- \n \n";
	std::cout << "		In this tutorial you will play as Chris[Zombie]						who is fighting Regi[Ninja]. \n \n";
	std::cout << "		~~~~~~~~~~~~~~~~~Instructions~~~~~~~~~~~~~~~~~~ \n";
	std::cout << "		Press 'a' Key to attack or 'q' to exit game...\n";
	std::cout << "		~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n \n";
	bool trigger = false;
	while (input != 'q') //Loops the entire process also makes it if you press Q it exits game 
	{

		std::cin >> input;
		system("cls");
		if (input == 'a') //Makes the input in which the user enters only work on the "a" key.
		{
			std::cout << "Thank you for choosing to continue! \n \n";
			std::cout << "~Chris[Zombie] fights Regi[Ninja]~" << "\n";
			std::cout << "----------------------------------------------------- \n";
			Fight(chris, regi); // Fights between the two
		}
		if (regi.hp < 50 && trigger == false)
		{
				trigger = true;
				Sleep(900);
				std::cout << "Keep \n \n";	
				Sleep(900);
				std::cout << "it \n \n";
				Sleep(900);
				std::cout << "up! \n \n";
		}
		if (regi.hp < 0) //If hp goes below 0 then it wil state the cout below
		{

			std::cout << "The Ninja has been defeated... The tutorial is now complete. \n\n" << "\a";
			Sleep(500);
			{
				std::cout << "Game Creator \n Donray Williams \n \nInstructor \n Matthew Williamson \n \nAudio Director \n";
				std::cout << " Windows OS \n \nGame Designed At \n AIE \n \n";
				// I Just spaced these apart to see better...
			}
			system("pause");
			break; //Then end the game / if it is now below 0 it will go on
		}

		if (chris.spirit <= 0)
		{
			std::cout << "~You are out of spirit. Please wait a turn to regen spirit~ \n \n";
			chris.spirit += 5; //If your spirit ever goes to 0 it will add 5 more 
			for (int i = 0; i < 3; i++) //Only loops 3 times 
			{
				Sleep(1000); //Waits before printing the "."
				{
					std::cout << ".";
				}
			}
			std::cout << "\n \n";
			std::cout << "~You are now at full spirit~ \n \n"; 
		}

		std::cout << "|Press 'a' Key to attack or 'q' to exit...|" << "\n \n";
	}
	return 0;
}