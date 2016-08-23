#include <iostream>
int main()
{
	//Exercise 1:
	for (int i = 100; i >= 0; i--)

		printf("%i", i);

	for (int i = 99; i >= 0; i--)

		std::cout << i << " ";

	for (int i = 100; i >= 1; i--)

		std::cout << i << " ";

	for (int i = 100; i >= 0; i -= 2)

		std::cout << i << " ";




	//Exercise 2:

	int i = 0;
	for (i = 0; i < 100; i++)

	{
		if (i % 3 == 0 && i % 5 == 0)

			std::cout << "FizzBuzz" << std::endl;

		else if (i % 5 == 0)

			std::cout << "Buzz" << std::endl;

		else if (i % 3 == 0)

			std::cout << "Fizz" << std::endl;

		else

			std::cout << i << std::endl;

	}

	//Exercise 3:

	int sum = 0;
	int i = 0;

	for (i = 0; i < 1000; i++)
	{

		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = i + sum;

			std::cout << sum << std::endl;
		}
	}


















	//Exercise 4:

	int i = 100;
	while (i >= 0)


	{
		std::cout << i << " ";
		i--;
	}

	

	int i = 99;
	while (i >= 0)

	{
		std::cout << i << " ";
		i--;
	}

	int i = 100;
	while (i >= 1)
	{

		std::cout << i << " ";
		i--;

	}

	int i = 100;
	while (i >= 0)


	std::cout << i << " ";
	i-=2;



	//Exercise 4:

	int i = 0;
	while (i < 100)

	{
		if (i % 3 == 0 && i % 5 == 0)

			std::cout << "FizzBuzz" << std::endl;

		else if (i % 5 == 0)

			std::cout << "Buzz" << std::endl;

		else if (i % 3 == 0)

			std::cout << "Fizz" << std::endl;

		else

			std::cout << i << " " << std::endl;
	i++;

	}
	
	//Exercise 4:
	

	int sum = 0;
	int i = 0;
	while (i < 1000)

	{

		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = i + sum;

			std::cout << sum << std::endl;
			
		}
		i++;
	}


	system("pause");
	return 0;


}

