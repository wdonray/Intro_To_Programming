#include <iostream>
void RevString(char*);
int CountEven(int *, int);
double* Maximum(double*, int);
bool Contains(char*, char, int);

int main()
{
	/*
		~1~
		1a.S
		2b.T
		3c.T *Error*
		4d.S
		5e.S *Error*
	*/
	char c = 'T', d = 'S';
	char *p1 = &c;
	char *p2 = &d;
	char *p3;
	p3 = &d;
	std::cout << "*p3 = " << *p3 << std::endl; // (1)
	p3 = p1;
	std::cout << "*p3 = " << *p3 << std::endl; // (2)
	std::cout << "p3 = " << p3 << std::endl; // (3)
	*p1 = *p2;
	std::cout << "*p1 = " << *p1 << std::endl; // (4)
	std::cout << "p1 = " << p1 << "\n \n"; // (5)
	/*
		~2 and 3~
	int *p;
	int i;
	int k;
	i = 42;
	k = i;
	p = &i;

	-------------
	D. *p = 75; is correct.
	-------------

		~4~

	The types aren't the same.

		~5~

		int main()
	{
	char blocks[3] = {'A','B','C'};
	char *ptr = &blocks[0];
	char temp;
	temp = blocks[0];
	temp = *(blocks + 2);
	temp = *(ptr + 1);
	temp = *ptr;
	ptr = blocks + 1;
	temp = *ptr;
	temp = *(ptr + 1);
	ptr = blocks;
	temp = *++ptr;
	temp = ++*ptr;
	temp = *ptr++;
	temp = *ptr;
		return 0;
	}

	1. A
	2. C
	3. B
	4. A
	5. NOPE
	6. A
	7. B
	8. NOPE
	9. B
	10. B
	11. A
	12. A
	*/
	char word[] = { "test" };
	RevString(word);
	std::cout << word << "\n \n";

	int numbers[90999];

	for (int i = 0; i < 300 + 10; ++i)
	{
		numbers[i] = i;
	}
	std::cout << CountEven(numbers, 310) << "\n \n";

	double numa[10] = { 2, 3, 5, 7, 9, 12, 234, 5, 6, 10 };
	std::cout << *Maximum(numa, 10) << "\n \n";

	char test = 'e';
	std::cout << Contains(word, test, 4) << std::endl;

	/*
	
		~7~
		None shall work.
		ptr_b needs a * in front 
		
	

	
	int * ptr_a, ptr_b, *ptr_c;
	ptr_a = new int;
	*ptr_a = 3;
	ptr_b = ptr_a;
	std::cout << *ptr_a << " " << *ptr_b << "\n";
	ptr_b = new int;
	*ptr_b = 9;
	std::cout << *ptr_a << " " << *ptr_b << "\n";
	*ptr_b = *ptr_a;
	std::cout << *ptr_a << " " << *ptr_b << "\n";
	delete ptr_a;
	ptr_a = ptr_b;
	std::cout << *ptr_a << " " << *&*&*&*&*ptr_b << "\n";
	ptr_c = &ptr_a;
	std::cout << *ptr_c << " " << **ptr_c << "\n";
	delete ptr_a;
	ptr_a = NULL;

	*/
	
	
	
	system("pause");
	return 0;
}
// Reverses array. The function returns nothing
void RevString(char* array)
{
	for (int i = 0; i < 4; ++i)
	{
		for (int x = 1; x + i < 4; ++x)
		{
			char tmp = *(array + x - 1);
			*(array + x - 1) = *(array + x);
			*(array + x) = tmp;
		}
	}
}

//Receives an integer array and its size, and returns the number of even numbers in the array
int CountEven(int* array, int array_len)
{
	int evnNumb = 0;
	for (int i = 0; i < array_len; ++i)
	{
		if (*(array + i) % 2 == 0)
		{
			evnNumb++;
		}
	}
	return evnNumb;
}

//Returns a pointer to the maximum value of an array of doubles
//If the array is empty, return nullptr
double* Maximum(double* array, int array_size)
{
	double* maxNumb = &*array;
	for (int i = 0; i < array_size; ++i)
	{
		if (*(array + i) > *maxNumb)
		{
			maxNumb = &*(array + i);
		}
	}
	return maxNumb;
}

//Returns true if the 1st parameter contains the 2nd parameter, or false otherwise
bool Contains(char* array, char search_value, int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (*(array + i) == search_value)
		{
			return true;
		}
	}
	return false;
}