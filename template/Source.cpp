#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string>


//template <class T>
//
//class Bucket
//{
//public:
//	Bucket() {};
//	Bucket(int size) : m_size(size) {};
//	bool Add(T a);
//	int m_size;
//	T * items[m_size];
//};
//
//template <class T>
//
//bool Bucket <T>::Add(T a)
//{
//	items[0] = a;
//	return true;
//}
//
//class Item
//{
//public:
//	bool operator == (const Item& theItem)const;
//	Item(std::string name) : m_name(name) {};
//	std::string m_name;
//};
//
//bool Item::operator==(const Item& theItem) const
//{
//
//	if (this->m_name == theItem.m_name)
//		return true;
//	return false;
//}


/*
1. Min
DESCRIPTION: Returns the lower of two values.
INPUT : Two template arguments(a, b).
OUTPUT : The lower of the two values a and b
*/
template <typename T>
T Min(T a, T b)
{
	T work;
	(a < b) ? work = a : work = b;
	return work;
}
/*
2. Max
DESCRIPTION: Returns the higher of two values.
INPUT: Two template arguments (a, b).
OUTPUT: The higher of the two values a and b.
*/
template <typename T>
T Max(T a, T b)
{
	T work;
	(a > b) ? work = a : work = b;
	return work;
}
/*
3. Clamp
DESCRIPTION: Constrains a value within the range of two other values.
INPUT: Three template arguments (min, max, val).
OUTPUT: The value of the val constrained between min and max.
*/
template <class T>
T Clamp(T min, T max, T val)
{
	T work;
	(val < min) ? work = min : (val > max) ? work = max : work = val;
	return work;
}
/*
4. Min (specialised for char)
DESCRIPTION: As above but first checks if a and b represent alphabetical characters. If so,
the function will return the value that is alphabetically lower.
INPUT: Two template arguments (a, b).
OUTPUT: The alphabetically lower of the two values a and b.
*/
template <class T>
T Min(char a, char b)
{
	T work;
	if (a <= 90 && a >= 65)
	{
		a += 32;
		if (b <= 90 && b >= 65)
		{
			b += 32;
			(a < b) ? work = a - 32 : work = b - 32;
			return work;
		}
		(a < b) ? work = a - 32 : work = b;
		return work;
	}
	(a < b) ? work = a : work = b;
	return work;
}
/*
5. Max (specialised for char)
DESCRIPTION: As above but first checks if a and b represent alphabetical characters. If so,
the function will return the value that is alphabetically higher.
INPUT: Two template arguments (a, b).
OUTPUT: The alphabetically higher of the two values a and b
*/
template <class T>
T Max(char a, char b)
{
	T work;
	if (a <= 90 && a >= 65)
	{
		a += 32;
		if (b <= 90 && b >= 65)
		{
			b += 32;
			(a > b) ? work = a - 32 : work = b - 32;
			return work;
		}
		(a > b) ? work = a - 32 : work = b;
		return work;
	}
	(a > b) ? work = a : work = b;
	return work;
}
/*
1. Constructor
DESCRIPTION: Creates an array on the heap of the specified capacity. The new heap
memory should be zeroed using memset. You should store the value of
capacity and size for later use (size should start at 0).
INPUT: A single integer specifying the capacity for the data array.
OUTPUT: N/A.
*/

template <typename T>

class Store
{
public:
	Store<T>(int capacity) { m_data = new T[capacity]; memset(m_data, 0, 0); m_capacity = capacity; m_size = 0; }
	~Store<T>()
	{
		delete(m_data)
	}
	void Add(T item)
	{
		if (m_size < m_capacity)
		{
			m_data[m_size] = item;
			m_size++;
		}
	}
	void Expand()
	{
		m_capacity *= 2;
		T * test = new T[m_capacity];
		memcpy(test, m_data, sizeof(T) * m_size);
		memcpy(m_data, test, sizeof(T) * m_size);
		delete[] test;
	}
	void Print()
	{
		for (int i = 0; i < m_capacity; i++)
		{
			std::cout << m_data[i] << ",";
		}
	}
	T Operator(int index)
	{
		return m_data[index];
	}
private:
	int m_size;
	int m_capacity;
	T * m_data;
};

int main()
{
	//Bucket <int> b = Bucket <int>(20);
	//int test = 2;
	//b.Add(test);
	int a = Min<int>(7, 9);
	int b = Max<int>(10, 234);
	int c = Clamp<int>(0, 10, 5);
	char d = Min<char>('a', 'b');
	char e = Max<char>('A', 'b');
	Store<int> *test = new Store<int>(3);
	test->Add(5);
	test->Add(2);
	test->Add(1);
	test->Print();
	std::cout << std::endl;
	test->Expand();
	test->Add(7);
	test->Print();
	std::cout << std::endl;
	std::cout << test->Operator(3) << std::endl;
	system("pause");
	return 0;
}

