#include <iostream>
void Variables();

int main()
{
	Variables();
	system("pause");
	return 0;
}

void Variables()
{
	/*
	1. Find the value of each of the following expressions, or explain why it is not a valid
	expression.Try this without coding it first.
	*/
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "			Problem : 1 " << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << std::endl;

	int a;								//Calculates each awnser 
	a = 2 / 3 + 3 / 5;
	std::cout << "a ) " << a << std::endl;
	std::cout << std::endl;
	int b;
	b = 2 % 3 + 3 % 5;
	std::cout << "b ) " << b << std::endl;
	std::cout << std::endl;
	int c;
	c = 23 % 15 % -2;
	std::cout << "c ) " << c << std::endl;
	std::cout << std::endl;
	int d;
	d = 25 * 1 / 2;
	std::cout << "d ) " << d << std::endl;
	std::cout << std::endl;
	float e;							//Used float to get awnser with decimal 
	e = 25 * 1.0 / 2;
	std::cout << "e ) " << e << std::endl;
	std::cout << std::endl;
	int f;
	f = 25 * (1 / 2);
	std::cout << "f ) " << f << std::endl;
	std::cout << std::endl;
	int g;
	g = 235 / 8 + 7;
	std::cout << "g ) " << g << std::endl;
	std::cout << std::endl;
	float h;							//Used float to get awnser with decimal 
	h = 235 / 8.0 + 7;
	std::cout << "h ) " << h << std::endl;
	std::cout << std::endl;
	float i;							//Used float to get awnser with decimal 
	i = ((20 + 1) / 2 - 2.0) / (23 + 3)*0.2;
	std::cout << "i ) " << i << std::endl;
	std::cout << std::endl;
	/*
	2. Select suitable variable names you might use for:
	*/
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "			Problem : 2 " << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "a ) avgHeight" << std::endl;     //a) The average height of students in your class
	std::cout << std::endl;
	std::cout << "b ) hightTax" << std::endl;     //b) The tax rate for incomes over $65000
	std::cout << std::endl;
	std::cout << "c ) lowTax" << std::endl;		//c) The tax rate for incomes below $5000
	std::cout << std::endl;
	std::cout << "d ) steamTotal" << std::endl; //d) The total cost of all the games on your Steam library
	std::cout << std::endl;
	/*
	3. Select suitable data types to hold the following values:
	*/
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "			Problem : 3 " << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << " a ) Interger " << std::endl;
	std::cout << std::endl;
	std::cout << " b ) Float " << std::endl;
	std::cout << std::endl;
	std::cout << " c ) Character " << std::endl;
	std::cout << std::endl;
	std::cout << " d ) Interger " << std::endl;
	std::cout << std::endl;
	std::cout << " e ) Bool " << std::endl;
	std::cout << std::endl;
	/*
	4. Create a program that swaps two numbers.
	Ask the user for 2 numbers in the console window and store the result in variables called “a”
	and “b” print the result to screen. Write code that swaps the values for these variables, then
	print the variables “a” and “b” again.
	*/
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "			Problem : 4 " << std::endl;
	std::cout << "-----------------------------------------" << std::endl;

	int numa = 5;
	int numb = 7;	//First create 2 intergers with any 2 given numbers, then create a temporary one that holds the value of 0. 
	int tmp = 0;

	tmp = numb;
	numb = numa;	//Then create a simple swap statment that uses tmp to hold a value while you are swapping. 
	numa = tmp;

	std::cout << "Numa is now " << numa << std::endl << "Numb is now " << numb << std::endl; //Then print to console
	/*
	5. Consider the following code segment. Note: Do not implement it yet. 

	int i = 0;
	float f = 0;
	char ch = 'a';
	std::cin >> i >> ch >> f;
	std::cout << "i: " << i << "\nch: " << ch << "\nf: " << f << std::endl;

	What will be the output when the input is:
	*/
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "			Problem : 5 " << std::endl;
	std::cout << "-----------------------------------------" << std::endl;

	//std::cout << "a) 1 A 45 = i: 1 ch: A f: 45 " << std::endl << "b) 1A45 = 1 ch: A f: 45 " << std::endl << "c) 1 9 45 = 1 9 45" << std::endl << "d) 1 945 = " << std::endl << "e) B 45.6" << std::endl << "f) 1BC5.6" << std::endl;

	int i = 0;
	float f = 0;
	char ch = 'a';
	std::cin >> i >> ch >> f;
	std::cout << "i: " << i << "\nch: " << ch << "\nf: " << f << std::endl;
}