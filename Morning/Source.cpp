#include <iostream>
//void Reverse(char *, int);
//
//int main()
//{
//	char word[] = { "ABCD" };
//	int size = 4;
//	Reverse(word, size);
//	std::cout << word << "\n";
//	system("pause");
//	return 0;
//}
//
//void Reverse(char * word, int size)
//{
//	for (int i = 1; i <= size / 2; i++)
//	{
//		char tmp = word[i - 1];
//		word[i - 1] = word[size - i];
//		word[size - i] = tmp;
//	}
//}
int  Max(int*, int);

int main()
{
	int array[] = { 1,2,3,4,5,6,7 };
	int sum = Max(array, 7);
	std::cout << sum << std::endl;
	system("pause");
	return 0;
}
int Max(int * array, int size)

{
	int sumlarge = array[0];
	int sum2;
	if (sumlarge > array[1])
	{
		sum2 = array[1];
	}
	for (int i = 1; i < size; i++)
	{

		if (array[i] > sumlarge)
		{
			sum2 = sumlarge;
			sumlarge = array[i];

		}
		else if (array[i] > sum2)
		{
			sum2 = array[i];
		}
	}
	return sumlarge + sum2;
}