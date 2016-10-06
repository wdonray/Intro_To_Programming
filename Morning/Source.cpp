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
////	}
////}
//int  Max(int*, int);
//
//int main()
//{
//	int array[] = { 1,2,3,4,5,6,7 };
//	int sum = Max(array, 7);
//	std::cout << sum << std::endl;
//	system("pause");
//	return 0;
//}
//int Max(int * array, int size)
//
//{
//	int sumlarge = array[0];
//	int sum2;
//	if (sumlarge > array[1])
//	{
//		sum2 = array[1];
//	}
//	for (int i = 1; i < size; i++)
//	{
//
//		if (array[i] > sumlarge)
//		{
//			sum2 = sumlarge;
//			sumlarge = array[i];
//
//		}
//		else if (array[i] > sum2)
//		{
//			sum2 = array[i];
//		}
//	}
//	return sumlarge + sum2;
//}
//class Cat
//{
//private:
//	char m_Name;
//public:
//	Cat() {}
//	void NameMe(char n)
//	{
//		m_Name = n;
//	}
//};
//int main()
//{
//	Cat WorkPlz[26];
//	int i = 0;
//	while (i < 26) //Not a for :D
//	{
//		if (i % 2 == 0)
//		{
//			WorkPlz[i].NameMe(i + 65); //Upper
//		}
//		else
//		{
//			WorkPlz[i].NameMe(i + 97); //Lower
//		}
//		i++;
//	}
//	system("pause");
//	return 0;
//}
//int morning(int *, int);
//int main()
//{
//	int numbers[5] = { 5,5,3,5,9 };
//	std::cout << morning(numbers, 5) << std::endl;
//	system("pause");
//	return 0;
//}
//int morning(int * array, int size)
//{
//
//	int b = 0;
//	int c = 0;
//	for (int i = 0; i < size; i++)
//	{
//		int a = 0;
//		for (int x = 0; x < size; x++)
//		{
//			if (array[i] == array[x])
//			{
//				a++;
//				if (a > b)
//				{
//					c = array[x];
//					b = a;
//				}
//			}
//		}
//	}
//	return c;
//}
void swap(int&, int&);

int main()
{
	int firstN = 200;
	int secondN = 300;
	swap(firstN, secondN);
	system("pause");
	return 0;
}

void swap(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}