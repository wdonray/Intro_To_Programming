#include <iostream>

int main()
{
	int problem;

	std::cin >> problem;

	int num[] = { 50,51,52,53,54,55,56,57,58,59,60 };
	switch (problem)
	{
	case 0:
	{
		for (int i = 0; i < 11; i++)

		{
			std::cout << num[i] << "" << std::endl;
		}
	}
		break;

	case 1:
	{
		int numbers[] = { 0,0,1,0,0,1,0,0,1,1 }; //Valid
		for (int i = 0; i < 10; i++)
		{
			std::cout << numbers[i] << "" << std::endl;
		}
		std::cout << std::endl;

		//int matrix[] ={ 1,2,3,4,5,6,7} Invalid  has more than 5 arrays
		//double radii[10] = ( 3.2, 4.7 }; Invalid needs scope operators 
		//int table[7] = { 2, , , 27, , 45, 39 }; Invalid needs numbers inside of each comma

		char codes[] = { 'A', 'X', '1','2','s' }; //Valid
		for (int i = 0; i < 5; i++)
		{
			std::cout << codes[i] << "" << std::endl;
		}

		//int blanks[]; Invalid incomplete 
		//int collection[-20] Invalid size of array must be greater than 0
	}	//int hours[3] = 8, 12, 16; Invalid not scoped 
		break;

	case 2:
	{
		int values[] = { 2,6,10,14 };
		
			//std::cout << values[2];
				//prints 10
			//std::cout << ++values[0];
				//prints 3
			//std::cout << values[1]++;
				//prints 6
			//int x = 2;
			//std::cout << values[++x];
				//prints 14
			//std::cout << values[4];
				//Given default number
	}
	break;

	case 3:
	{
			int array[] = { 10,9,8,7,6,5,4,3,2,1 };

				for (int i = 0; i < 10; i++)
				{
					std::cout << array[i] << "" << std::endl;
				}
	}
	break;

	case 4:
	{
		int num[5];

		std::cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];

		for (int i = 4; i >= 0 && i <= 4; i--)
			
		{
			std::cout << num[i] << "" << std::endl;
		}
	}
	break;

	case 5:
	{
		int num[10];
	
		for (int i = 0; i < 10; i++)

		{
			std::cin >> num[i];
	
		}
		
			for (int i = 0; i >= -10; i--)
			{
				for (int k = 0; k < 10; k++)
				{
					if (num[k] < num[k + 1])
					{
						int please;
						please = num[k];
						num[k] = num[k + 1];
						num[k + 1] = please;
					}

				}

			}
				
				{
					std::cout << num[0] << " " << num[9] << std::endl;
				}
		
	}
	break;

	case 6:
	{
		int a = 1;
		int last[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int h = 0; h < 3; h++)
			{

				last[i][h] = a;
				a++;

				std::cout << last[i][h] << std::endl;
			}
		}
		
	

	}
	break;
	}
	system("pause");
	return 0;
}

