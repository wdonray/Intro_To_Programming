#include <iostream>
#include <cstdlib>
#include <time.h>
void Variables()
{

	/*
	1. Find the value of each of the following expressions, or explain why it is not a valid
	expression.Try this without coding it first.
	*/
	std::cout << "-----------------------------------------" << "\n";
	std::cout << "			Problem : 1 " << "\n";
	std::cout << "-----------------------------------------" << "\n \n";

	int a;								//Calculates each awnser 
	a = 2 / 3 + 3 / 5;
	std::cout << "a ) " << a << "\n \n";
	int b;
	b = 2 % 3 + 3 % 5;
	std::cout << "b ) " << b << "\n \n";
	int c;
	c = 23 % 15 % -2;
	std::cout << "c ) " << c << "\n \n";
	int d;
	d = 25 * 1 / 2;
	std::cout << "d ) " << d << "\n \n";
	float e;							//Used float to get awnser with decimal 
	e = 25 * 1.0 / 2;
	std::cout << "e ) " << e << "\n \n";
	int f;
	f = 25 * (1 / 2);
	std::cout << "f ) " << f << "\n \n";
	int g;
	g = 235 / 8 + 7;
	std::cout << "g ) " << g << "\n \n";
	float h;							//Used float to get awnser with decimal 
	h = 235 / 8.0 + 7;
	std::cout << "h ) " << h << "\n \n";
	float i;							//Used float to get awnser with decimal 
	i = ((20 + 1) / 2 - 2.0) / (23 + 3)*0.2;
	std::cout << "i ) " << i << "\n \n";
	/*
	2. Select suitable variable names you might use for:
	*/
	std::cout << "-----------------------------------------" << "\n";
	std::cout << "			Problem : 2 " << "\n";
	std::cout << "-----------------------------------------" << "\n \n";
	std::cout << "a ) avgHeight" << "\n \n";     //a) The average height of students in your class
	std::cout << "b ) hightTax" << "\n \n";     //b) The tax rate for incomes over $65000
	std::cout << "c ) lowTax" << "\n \n";		//c) The tax rate for incomes below $5000
	std::cout << "d ) steamTotal" << "\n \n"; //d) The total cost of all the games on your Steam library
											  /*
											  3. Select suitable data types to hold the following values:
											  */
	std::cout << "-----------------------------------------" << "\n";
	std::cout << "			Problem : 3 " << "\n";
	std::cout << "-----------------------------------------" << "\n \n";
	std::cout << " a ) Interger " << "\n \n";
	std::cout << " b ) Float " << "\n \n";
	std::cout << " c ) Character " << "\n \n";
	std::cout << " d ) Interger " << "\n \n";
	std::cout << " e ) Bool " << "\n \n";
	/*
	4. Create a program that swaps two numbers.
	Ask the user for 2 numbers in the console window and store the result in variables called “a”
	and “b” print the result to screen. Write code that swaps the values for these variables, then
	print the variables “a” and “b” again.
	*/
	std::cout << "-----------------------------------------" << "\n";
	std::cout << "			Problem : 4 " << "\n";
	std::cout << "-----------------------------------------" << "\n \n";

	int numa = 5;
	int numb = 7;	//First create 2 intergers with any 2 given numbers, then create a temporary one that holds the value of 0. 
	int tmp = 0;

	tmp = numb;
	numb = numa;	//Then create a simple swap statment that uses tmp to hold a value while you are swapping. 
	numa = tmp;

	std::cout << "Numa is now " << numa << "\n \n" << "Numb is now " << numb << "\n \n"; //Then print to console
																						 /*
																						 5. Consider the following code segment. Note: Do not implement it yet.

																						 int i = 0;
																						 float f = 0;
																						 char ch = 'a';
																						 std::cin >> i >> ch >> f;
																						 std::cout << "i: " << i << "\nch: " << ch << "\nf: " << f << std::endl;

																						 What will be the output when the input is:
																						 */
	std::cout << "-----------------------------------------" << "\n";
	std::cout << "			Problem : 5 " << "\n";
	std::cout << "-----------------------------------------" << "\n \n";

	std::cout << "a) 1 A 45 = i: 1 ch: A f: 45 " << "\n \n" << "b) 1A45 = i: 1 ch: A f: 45 " << "\n \n" << "c) 1 9 45 = i: 1 ch: 9 f: 45" << "\n \n" << "d) 1 945 = i: 1 ch: 9 f: 45 " << "\n \n" << "e) B 45.6 = i: 0 ch: a f: 0" << "\n \n" << "f) 1BC5.6 = i: 1 ch: B f: 0" << "\n \n";
	/*
	6. Ask the user for 5 while numbers. Output the average of these numbers.
	*/
	std::cout << "-----------------------------------------" << "\n";
	std::cout << "			Problem : 6 " << "\n";
	std::cout << "-----------------------------------------" << "\n \n";

	int p = 1;
	int o = 2;		//Set 5 intergers to equal any chosen 5 numbers 
	int u = 3;
	int t = 40;
	int r = 500;
	std::cout << "The total of all the numbers are : " << p + o + u + t + r << "\n \n";		//Then simply add all 5 together in cout 
																							/*
																							7. Write a program that determines the letter that lies halfway between two letters of the
																							alphabet as input by the user. For example, if the user inputs ‘A’ and ‘Z’, the output should
																							be ‘M’. Do you know how to deal with upper vs. lower case letters? Does it matter if the
																							letters are input in reverse order?
																							*/
	std::cout << "-----------------------------------------" << "\n";
	std::cout << "			Problem : 7 " << "\n";
	std::cout << "-----------------------------------------" << "\n \n";

	char first;
	char sec;
	char sum;

	std::cin >> first >> sec;

	sum = ((int)first + (int)sec) / 2;		//The (int) in front of the variables that are assinged char can now represent a
											//number that you find the middle by just defining the whole thing by 2.

	std::cout << "The middle letter is : " << sum << "\n \n";

	std::cout << "-----------------------------------------" << "\n";
	std::cout << "			F I N " << "\n";
	std::cout << "-----------------------------------------" << "\n \n";
}

float smallnum()
{
	float one;
	float two;
	std::cout << "Enter value one \n";
	std::cin >> one;
	std::cout << "Enter value two \n";
	std::cin >> two;
	if (one < two)
	{
		std::cout << one;
		return one;
	}
	else if (two < one)
	{
		std::cout << two;
		return two;
	}
	return 0;
}

float Half(float number)
{
	float sum = 0;
	sum = number / 2;
	return sum;
}

int CoinToss()
{
	srand(time(NULL));
	int throws;
	int rNum;
	std::cout << "How many times do you want to flip the coin? \n";
	std::cin >> throws;
	int num = rand();
	for (int i = 0; i < throws; i++)
	{
		rNum = rand() % 2 + 1;
		switch (rNum)
		{
			case 1:
				std::cout << "Its Heads!\n";
				break;
			case 2:
				std::cout << "Its Tails!\n";
				break;
		}
	}
	return num;
}
int main()
{
	//Variables();
	//smallnum();

	float number = 16.721f;
	float result = Half(number); //result is 8.3605

	CoinToss();
	system("pause");
	return 0;
}

