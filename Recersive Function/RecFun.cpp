#include <iostream>

int Fibonacci(int a)
{
	if (a <= 1)
		return 1;
	return Fibonacci(a - 1) + Fibonacci(a - 2);
}

int power(int x, int n)
{
	if (n == 0)
		return 1;
	if (n % 2 == 0)
	{
		if (n == 2)
			return x * x;
		return power(power(x, n / 2), 2);
	}
	else return x * power(x, n - 1);
}
void Hanoi(int size, int one, int two, int three)
{
	if (size != 0)
	{
		Hanoi(size - 1, one, three, two);
		
		std::cout << "\nMove disk " << size << " from peg " << one << " to peg " << three << "\n";

		Hanoi(size - 1, two, one, three);
	}
}
int main()
{	std::cout << "Problem 1 : ";	for (int i = 0; i < 20; i++)	{		std::cout << Fibonacci(i) << " ";	}

	std::cout << "\n \n";

	std::cout << "Problem 2 : " << power(2, 6) << "\n \n";

	int input;
	std::cout << "   |Tower Of Hanoi| \n \n";
	std::cout << "Enter number of disks: ";
	std::cin >> input;
	Hanoi(input, 1, 2, 3);

	system("pause");
	return 0;
}
