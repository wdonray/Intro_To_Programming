#include <iostream>

int main()
{
	//Number 1
	//	int y = 0;
	//	int x;
	//	
	//	if (y == 0) 
	//
	//	{
	//		x = 100;
	//	}
	// 
	//	std::cout << x;

	//Number 2

	//printf("Please input two whole numbers :)");

	//int y;
	//int x;

	//std::cin >> y >> x;

	//if (x > y)

	//{

	//	printf("%i", x);

	//}

	//else if (y > x)

	//	printf("%i", y);



	//Number 3 

	//int angle;
	//int bear;
	//int car;
	//int drive;
	//int exit;

	//std::cin >> angle >> bear >> car >> drive >> exit;

	//int sum = (angle + bear + car + drive + exit);

	//printf("%i", sum);

	//Number 4
	//int choice;
	//switch (choice)
	//{
	//case 1:
	//	std::cout << "1";
	//	break;
	//
	//case 2:
	//	std::cout << "2 or 3";
	//	break;

	//case 3:
	//	std::cout << "2 or 3";
	//	break;

	//case 4:
	//	std::cout << "4";
	//	break;

	//default:
	//	std::cout << "Invalid";
	//	break;
	//}

//Number 6

	int larry;
	int garry;
	int awns;
	char some;

	std::cin >> larry >> some >> garry;
	

	switch ((int)some)
	{
		case 43:
			awns = larry + garry;
				std::cout << awns << std::endl;
		break;

		case 45:
			awns = larry - garry;
			std::cout << awns << std::endl;
		break;

		case 42:
			awns = larry * garry;
			std::cout << awns << std::endl;
		break;

		case 47:
			awns = larry / garry;
			std::cout << awns << std::endl;
		break;

		case 37:

			awns = larry % garry;
			std::cout << awns << std::endl;

		break;

	}




	system("pause");
	return 0;
}