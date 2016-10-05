#include <iostream>
#include <fstream>
#include <string>
int main()
{
	std::ofstream file;
	file.open("MyLog.txt", std::ios_base::app);	std::string test;	std::fstream file;	//std::getline(std::cin, test);	while (!file.eof())	{		getline(file, test);		std::cout << test << "\n";	}	//if (file.is_open())	//{	//	file << "Hello World" << std::endl;	//}	//else	//{	//	std::cout << "Something went wrong." << std::endl;	//}	file.close();
	system("pause");
	return 0;
}