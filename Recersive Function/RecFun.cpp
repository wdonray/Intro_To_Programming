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

int main()
{	for (int i = 0; i < 20; i++)	{		std::cout << Fibonacci(i) << " ";	}

	std::cout << "\n \n";

	std::cout << power(2, 6) << "\n";

	system("pause");
	return 0;
}
