#pragma once
#include <cassert>
template<class Type>
class linkedListInterator;
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
	void initializeList()
	{

	}
	void insertLast(const Type& node)
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
	}
	void insertFirst(const Type& node)
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
			newNode->link = first->link;
			first = newNode;
			first->info = node;
			count++;
		}
	}
	Type front()const
	{
		assert(count != 0);
		return last->info;
	}
	Type back()const
	{
		assert(count != 0);
		return first->info;
	}
	linkedListInterator<Type> begin()
	{
		return linkedListInterator<Type>(first);
	}
	linkedListInterator<Type> end()
	{
		return linkedListInterator<Type>(last);
	}
	const int length()
	{
		return count;
	}
	void print()
	{
	}
protected:
	int count;
	nodeType<Type> * first;
	nodeType<Type> * last;
};
template<class Type>
class linkedListInterator
{
private:
	nodeType<Type> *current;
public:
	linkedListInterator() {};
	linkedListInterator(nodeType<Type> *node) : current(node) {};
	Type operator *()
	{
		return current->info;
	}
	linkedListInterator<Type> operator++ ()
	{
		current = current->link;
		return *this;
	}
	bool operator ==(const linkedListInterator<Type>& a)
	{
		return (current == a->current) ? true : false;
	}
	bool operator !=(const linkedListInterator<Type>& a)
	{
		return (current != a->current) ? true : false;
	}
};
