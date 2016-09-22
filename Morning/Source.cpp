#include <iostream>
void Reverse(char *, int);

int main()
{
	char word[] = { "ABCD" };
	int size = 4;
	Reverse(word, size);
	std::cout << word << "\n";
	system("pause");
	return 0;
}

void Reverse(char * word, int size)
{
	for (int i = 1; i <= size / 2; i++)
	{
		char tmp = word[i - 1];
		word[i - 1] = word[size - i];
		word[size - i] = tmp;
	}
}