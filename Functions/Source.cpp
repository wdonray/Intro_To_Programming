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
int Number11(int[], int[], int[], int);
int Number12(int[], int);
int Number13(int[], int, int);
int Split(int[], int, int[], int[]);
int powerfunction();
int looketsay(int[], int);
void rps();

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
	std::cout << sum << std::endl;

	Question 9 
	int integer_array[] = { 10, 15, 7, 4, 13, 19, 8 };
	int sum = MinInArray9(integer_array, 7); //result = 4
	std::cout << sum << std::endl;

	Question 10
	int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
	int output_array[7] = {};
	MultiplyByIndex10(integer_array, output_array, 7);
	//output_array should be {0, 15, 14, 12, 52, 95, 48};
	
	Question 11
	int arrayin[5] = { 1, 2, 3 , 5 , 9 };
	int arrayout[5] = { 2, 3, 5, 8 , 10 };
	int arraythree[5] = {};
	Number11(arrayin, arrayout, arraythree, 5);
	

	Question 12 
	int array_input[] = { 3,2,4,7 };
	int sum = Number12(array_input, 4);

	Question  13
	int arrayin[4] = { 1, 2, 3, 4 };
	 Number13(arrayin, 4, 4);
	
	Question 14
	int arrayin[4] = { 1, 2, 3, 4 };
	int arrayout1[2] = {};
	int arrayout2[2] = {};
	Split( arrayin, 4, arrayout1, arrayout2);
	
	Question 15
	powerfunction();
	
	Question 16
	int arrayin[10] = { 1, 1, 1, 3, 5, 2, 6, 7, 3, 7, };
	looketsay(arrayin, 10);
	*/

	 rps();


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
	return 0;
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
				std::cout << "~ It's Heads! " << std::endl;
				std::cout << std::endl;
				break;
			case 2:
				std::cout << "~ It's Tails! " << std::endl;
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
Use this code to test your function :
*/

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
/*
11. Write a function that takes as its parameters two input arrays of integers, an integer for
their size and an output array.Set the value at each index to the sum of the corresponding
two elements of the input arrays at the same index.Assume the three arrays are of equal
length. Write own code for testing this function\

*/

int Number11(int arrayin[], int arrayout[], int arraythree[], int size) //Is this question stating that they all just equal each other? Just in an annoying way?

{
	int x = 0;
	int sum;
	
	for (int x = 0; x < size; x ++)
	{
		sum = arrayin[x] + arrayout[x]; 
		arraythree[x] = sum;
		std::cout << sum << std::endl;
	}
	return sum;
}

/*
12. Write a function that takes as its parameters an array called array_input of integers and the
size of the array and modifies the given array so that it contains a running sum of its
original values.For example, if the array originally had the values{ 3,2,4,7 }, after running
your function that array would instead contain{ 3,5,9,16 }, and if you ran it another time
passing the modified array in again, you'd have {3,8,17,33}. Write your own code for testing
this function
*/
int Number12(int array_input[], int s)

{
	int sum = 0; 
	for (int x = 0; x < 2; x++)
	{
		for (int y = 0; y < s; y++)
		{
			int sum = 0;
			sum += array_input[y] + array_input[y + 1];
			array_input[y + 1] = sum;
			std::cout << array_input[y] << std::endl;
		}
	}
	return 0;
}

/*
13. Write a function that searches for a particular number in an array.The function should
have three parameters : the array, the array size, and the number to be found.If the
number is in the array, the function should return the position of the number in the array.
If the number isn’t found, the function should return -1. In the case that the desired
number appears more than once in the array, the function should return the position of
the first occurrence.Write your own code to test this function.
*/

int Number13(int arrayin[], int a, int size )
{
	for (int i = 0; i < size; i++)

	{

		if (arrayin[i] = a);

		{
			return i;
		}

		return -1;
	}

}

/*
14. Write a function named Split that accepts one input array of integers, an integer for the
size of the input array, and two output arrays.All numbers in the input array that are
positive are copied into the first output array and all numbers in the input array that are
negative are copied into the second output array.The function should return how many
numbers were copied into the first output array.Write your own code to test this function.
*/

int Split(int arrayin[], int size, int arrayout1[], int arrayout2[] )

{
	for (int i = 0; i < size; i++)
	{
		if (arrayin[i] > 0)
		{
			arrayout1[i] = arrayin[i];
		}
		else (arrayin[i] < 0);
		{
			arrayout2[i] = arrayin[i];
		}
	
	}
	return 2;
}


/*
15. Write a function that calculates and then returns x to the power of y.
*/

int powerfunction()

{
	int x = 5;
	int y = 2;
	int sum = x;

	for (int i = 1; i < y; i++)
	{
		sum *= x;
	}
	std::cout << sum << std::endl;
	return sum;
}

/*
16. Write a function that takes in an array of integers, and the size of the array. The function
should print out the “look and say” sequence for the array. The look and say sequence
works by printing out how many of the same number there are in a row followed by that
number.

For example, if the array was {1, 1, 1, 1} the function would print out “4, 1” because there
are four ones.
If the array was {1, 2, 2, 2, 3, 4} the function would print out “1,1,3,2,1,3,1,4” because there
is “one 1, three 2s, one 3, one 4”.
If the array is {1,2,2,1,5,1,1,7,7,7,7,1,1,1,1,1,1,1,1} the function should print out
“1,1,2,2,1,1,1,5,2,1,4,7,8,1”
*/

int looketsay(int arrayin[], int num )

{
	int x = 1;
	for (int i = 0; i < num; i++)
	{
		while (arrayin[i] == arrayin[i + 1])
		{
			int x = 1;
			i++;
			x++;
		}
		std::cout << x << "," << arrayin[i] << std::endl;
	}
	return 0;
}

/*
17. Write a program that lets the user play the game of Rock, Paper, Scissors against the
computer. The program should work as follows:
1. When the program begins, a random number in the range of 1 - 3 is generated. If
the number is 1, then the computer has chosen rock. If the number is 2, then the
computer has chosen paper. So if the number is 3 then the computer has chosen
scissors.
2. The user enters their choice of “rock”, “paper” or “scissors”
3. The computer’s choice is displayed.
4. A winner is selected according to the following rules:
1. Rock beats scissors, scissors beats paper, paper beats rock
2. If there is a tie then the game must be replayed
5. Make sure to break the game up into functions to perform each task. Make sure to
look for any code that is repeated, and break it out into a function.
*/

void rps()

{
	srand(time(NULL));
	std::cout << "1 - Rock " << "2 - Paper " << "3 - Scissors " << std::endl;
	int choice;
	std::cin >> choice;
	int pcchoice;
	pcchoice = rand() % 3 + 1;
	
	switch (choice)
	{
	case 1:
	{
		switch (pcchoice)
		{
		case 1:
		{
			std::cout << "LOSER" << std::endl;
		}

		break;

		case 2:
		{
			std::cout << "WINNER" << std::endl;
		}

		break;

		case 3:
		{
			std::cout << "You tied... Try agian! " << std::endl;
		}
		}
		break;
	}





	case 2:
	{
		switch (pcchoice)
		{
		case 1:
		{
			std::cout << "LOSER" << std::endl;
		}

		break;

		case 2:
		{
			std::cout << "WINNER" << std::endl;
		}

		break;

		case 3:
		{
			std::cout << "You tied... Try agian! " << std::endl;
		}

		break;
		}
	}
	break;






	case 3:
	{
		switch (pcchoice)
		{
		case 1:
		{
			std::cout << "LOSER" << std::endl;
		}

		break;

		case 2:
		{
			std::cout << "WINNER" << std::endl;
		}

		break;

		case 3:
		{
			std::cout << "You tied... Try agian! " << std::endl;
		}

		break;
		}
	}
	break;

	}

}