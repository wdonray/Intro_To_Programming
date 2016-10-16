#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string>


template <class T>

class Bucket
{
public:
	Bucket() {};
	Bucket(int size) : m_size(size) {};
	bool Add(T a);
	int m_size;
	T * items[m_size];
};

template <class T>

bool Bucket <T>::Add(T a)
{
	items[0] = a;
	return true;
}

class Item
{
public:
	bool operator == (const Item& theItem)const;
	Item(std::string name) : m_name(name) {};
	std::string m_name;
};

bool Item::operator==(const Item& theItem) const
{

	if (this->m_name == theItem.m_name)
		return true;
	return false;
}


int main()
{
	Bucket <int> b = Bucket <int>(20);
	int test = 2;
	b.Add(test);
	system("pause");
	return 0;
}

