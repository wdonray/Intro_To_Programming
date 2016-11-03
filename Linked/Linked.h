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
		first = new nodeType<Type>;
		last = new nodeType<Type>;
		count = 0;
	}
	bool isEmptyList() const
	{
		return (first == nullptr) ? true : false;
	}
	void print() const
	{
		nodeType<Type> *current;
		current = first;
		while (current != NULL)
		{
			std::cout << current->info << " , ";
			current = current->link;
		}
	}
	void destroyList()
	{

	}
	bool search(const Type& nodeInfo)
	{
		linkedListInterator<Type> tmp = linkedListInterator<Type>(begin());
		while (*tmp != NULL)
		{
			if (*tmp == nodeInfo)
			{
				return true;
			}
			++tmp;
		}
		return false;
	}
	void deleteNode(const Type& nodeInfo)
	{
		linkedListInterator<Type> tmp = linkedListInterator<Type>(begin());
		while (*tmp != NULL)
		{
			if (*tmp == nodeInfo)
			{
			
			}
		--tmp;
		}
		return false;
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
			newNode->link = first;
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
		if (current == nullptr)
			return NULL;
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
