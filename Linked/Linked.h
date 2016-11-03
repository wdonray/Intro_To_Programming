#pragma once
#include <cassert>
template<class Type>
class linkedListIterator;
template<class Type>
struct nodeType
{
public:
	int info;
	nodeType<Type> * link;
};
template<class Type>
class linkedListType
{
public:
	linkedListType() {
		first = new nodeType<Type>;
		last = new nodeType<Type>;
		count = 0;
	};
	void initializeList()
	{
		first = NULL;
		last = NULL;
		count = 0;
	}
	bool isEmptyList() const
	{
		return (first == nullptr) ? true : false;
	}
	const linkedListType<Type>& operator= (const linkedListType<Type>& otherList)
	{
		return otherList.first;
	}
	void print() const
	{
		nodeType<Type> *current;
		current = first;
		while (current != NULL)
		{
			std::cout << current->info << std::endl;
			current = current->link;
		}
	}
	void destroyList()
	{
		nodeType<Type> * iter = first;
		while (iter != NULL)
		{
			nodeType<Type> * tmp = iter;
			iter = iter->link;
			delete tmp;
		}
		first = NULL;
		last = NULL;
		count = 0;
	}
	bool search(const Type& nodeInfo)
	{
		linkedListIterator<Type> tmp = linkedListIterator<Type>(begin());
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
		/*	linkedListInterator<Type> tmp = linkedListInterator<Type>(begin());
			while (*tmp != NULL)
			{
				if (*tmp == nodeInfo)
				{
					first =
				}
				--tmp;
			}*/
	}
	~linkedListType<Type>()
	{
		destroyList();
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
	linkedListType(const linkedListType<Type> otherList)
	{
		copyList();
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
	linkedListIterator<Type> begin()
	{
		return linkedListIterator<Type>(first);
	}
	linkedListIterator<Type> end()
	{
		return linkedListIterator<Type>(last);
	}
	const int length()
	{
		return count;
	}
protected:
	int count;
	nodeType<Type> * first;
	nodeType<Type> * last;
private:
	void copyList(const linkedListType<Type>& otherList)
	{
		first = otherList.first;
	}
};
template<class Type>
class linkedListIterator
{
private:
	nodeType<Type> *current;
public:
	linkedListIterator() {};
	linkedListIterator(nodeType<Type> *node) : current(node) {};
	Type operator *()
	{
		if (current == nullptr)
			return NULL;
		return current->info;
	}
	linkedListIterator<Type> operator++ ()
	{
		current = current->link;
		return *this;
	}
	bool operator ==(const linkedListIterator<Type>& a)
	{
		return current == a.current;
	}
	bool operator !=(const linkedListIterator<Type>& a)
	{
		return current != a.current;
	}
};
