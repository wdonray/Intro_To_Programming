#pragma once
template<class Type>
struct nodeType
{
public:
	int info;
	nodeType<Type> * link;
};
template<class Type>
class LinkedList
{
public:
	LinkedList() {
		first = new nodeType<Type>;
		last = new nodeType<Type>;
		count = 0;
	};
	bool Add(const Type& node)
	{
		nodeType<Type> * newNode;
		newNode = new nodeType<Type>;
		if (count == 0)
		{
			first->info = node;
			first->link = nullptr;
			last->info = node;
			last->link = nullptr;
			count++;
		}
		else
		{
			last->link = newNode;
			last = newNode;
			if (count == 1)
				first->link = newNode;
			last->info = node;
			last->link = nullptr;
			count++;
		}
		return true;
	}
	const Type front()
	{

	}
	const int length()
	{

	}
	void print()
	{
		nodeType<Type> * tmp = new nodeType<Type>;
		int c = 0;
		while (tmp != NULL)
		{

		}
	}
protected:
	int count;
	nodeType<Type> * first;
	nodeType<Type> * last;
};
