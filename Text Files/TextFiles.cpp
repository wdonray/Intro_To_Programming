#include <iostream>
#include <fstream>
#include <string>
int main()
{
	std::ifstream file;
	file.open("MyLog.txt", std::ios_base::app);
	std::string test;
	std::string work;
	std::cin >> work; 
	if (!file.is_open())
	{
		return 1;
	}
	do
	{
		file >> test;
		std::cout << test << " ";
	} while (!file.eof());
	std::cout << work;
	std::cout << "\n";
	file.close();
	system("pause");
	return 0;
}