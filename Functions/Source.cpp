#include <iostream>
#include <cstdlib>
#include <time.h>

float smallnum2();
float Half4(float);
int CoinToss5();
int SumTo7(int);
int Array8(int[], int);
int MinInArray9(int[], int);
void MultiplyByIndex10(int[], int[], int);
 

/*
1.  What is the output of this program?
#include <iostream>
	void PrintInteger(int variable)
	{
		std::cout << variable << std::endl;
	}
	int main()
	{
		int the_variable = 1;
		PrintInteger(the_variable);
		{
			PrintInteger(the_variable);
			int the_variable = 2;
			PrintInteger(the_variable);
			{
				PrintInteger(the_variable);
				int the_variable = 3;
				PrintInteger(the_variable);
			}
			PrintInteger(the_variable);
		}
		PrintInteger(the_variable)
		 The output is 1 , 1 , 2 , 2, 3, 2, 1
*/

int main()
{
/*
	 Question 7
	int result = SumTo7(3); //result = 1 + 2 + 3 = 6
	std::cout << result << std::endl;
	result = SumTo7(15); //result should now be 120
	std::cout << result << std::endl;

	Question 8
	int integer_array[] = { 7, 3, 2, 4, 9 };
	int sum = Array8(integer_array, 5); //result = 25
	std::cout << sum << std::endl;	Question 9 	int integer_array[] = { 10, 15, 7, 4, 13, 19, 8 };
	int sum = MinInArray9(integer_array, 7); //result = 4
	std::cout << sum << std::endl;*/	int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
	int output_array[7] = {};
	MultiplyByIndex10(integer_array, output_array, 7);
	//output_array should be {0, 15, 14, 12, 52, 95, 48};

	system("pause");
	return 0;
}
/*
2. Write a function that returns the smaller of two floats that are passed to it :
You should make a program that asks the user for two different numbers such that it
outputs :
Pass the two numbers into a function and output what the function returns :
*/
float smallnum2()

{
	float first;
	float sec;

	std::cout << " Enter value 1: ";
	{
		std::cin >> first;
	}
	std::cout << " Enter value 2: ";
	{
		std::cin >> sec;
	}
	if (first > sec)
	{
		std::cout << "The smaller number is: " << sec << std::endl;
		return sec;
	}
	else if (first < sec)
	{
		std::cout << "The smaller number is: " << first << std::endl;
		return first;
	}
}
/*
3. Add another function with the same name as the one you wrote in question 2, but with
three floats instead of two.What is this language feature called ?

C Language?

*/
/*4. The following statement calls a function named Half. The Half function returns a value that
is half that of the argument. Write the function. */

float Half4(float num)

{
	float Half = .5;
	float result = 0;

	result = num / 2;

	return result;

}
/*
5. Write a function named CoinToss that simulates the tossing of a coin.
The function should use the standard library rand() function in order to generate a
display of either “heads” or “tails”.The rand() can be added by adding
to the top of your program.It returns a random number between 0 and 32767.
Demonstrate the function in a program that asks the user how many times they want to
toss the coin, and then simulates the tossing of the coin that number of times.
*/

int CoinToss5()

{
	srand(time(NULL));
	int throws;
	int randNum;
	int num = rand();
	{
		std::cout << "Hello and welcome to Coin Toss simulator! " << std::endl << "Now how many times shall I flip your coin? " << std::endl;

		std::cin >> throws;
	}
	{
		for (int i = 0; i < throws; i++)
		{
			randNum = rand() % 2 + 1;
			switch (randNum)
			{
			case 1:
				std::cout << "~It's Heads! " << std::endl;
				std::cout << std::endl;
				break;
			case 2:
				std::cout << "~It's Tails! " << std::endl;
				std::cout << std::endl;
				break;
			}
		}
		return num;
	}
}


/* 6. Find the error in each of the following functions and explain how to fix them
----------------------------------
int sum (int x, int y)
{
int result;
result = x + y;
}
----------------------------------
int sum (int n)
{
if (0 == n)
return 0;
else
n = n + n;
}
----------------------------------
A. No return!

B. No return in else statement.

C. Return is no inside of main fuction.

*/

/*
7. Write a function called SumTo that accepts an integer parameter N and returns the sum of
all integers from 1 to N, including N.
Use this code to test the function :

#include <iostream>
//Your function called SumTo goes here
int main()
{
int result = SumTo(3); //result = 1 + 2 + 3 = 6
std::cout << result << std::endl;
result = SumTo(15); //result should now be 120
std::cout << result << std::endl;
}
*/

int SumTo7(int N)
{
	int sum = 0;

	for (int x = 1; x <= N; x++)
	{
		sum += x;
	}
	return sum;
}
/*
8. Write a function that takes as its parameters an array of integers and the size of the array
and returns the sum of the values in the array.
Use this code to test the function :

#include <iostream>
//Your function called SumArray goes here
int main()
{
int integer_array[5] = {7, 3, 2, 4, 9};
int result = SumArray(integer_array, 5); //result = 25
std::cout << result << std::endl;
}
*/
/**
8. Write a function that takes as its parameters an array of integers and the size of the array
and returns the sum of the values in the array.
Use this code to test the function :
*/
int  Array8(int integer_array[], int size)
{

	int sum = 0;
	//						  0  1  2  3  4
	//int integer_array[5] = {7, 3, 2, 4, 9};
	
	for (int x = 0; x < size; x++)
		sum += integer_array[x];
	

	return sum;
}
/*
9. Write a function that takes as its parameter an array of integers and the size of the array
and returns the minimum of the values in the array.
Use this code to test the function :
*/
int MinInArray9(int integer_array[], int size)

{
	int sum = 0;
	int x = 0;
	sum = integer_array[x];

	for (int x = 0; x < size; x++)
	{
		if (sum > integer_array[x])

			sum = integer_array[x];
	}
		return sum;
}
/*
10. Write a function that takes as its parameter an array called input_array of integers, the
array size and a second array of the same size called output_array.Fill each element in the
second array to be the value in the same index of input_array multiplied by its index in the
array.
Use this code to test your function :*/

void MultiplyByIndex10(int integer_array[], int output_array[], int size)

{
	int x = 0;
	int sum;

	for (int x = 0; x < size; x++)
	{
		sum = integer_array[x] * x;
		output_array[x] = sum;
		std::cout << sum << std::endl;
	}
}




