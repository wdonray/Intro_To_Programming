#pragma once
template<class Type>
class LinkedListInterator;
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
		return last->info;
	}
	const int length()
	{
		LinkedListInterator<Type> * tmp = new LinkedListInterator<Type>(*first);
		int i = 0;
		while (tmp != NULL)
		{
			tmp++;
			i++;
		}
		return i;
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
class LinkedListInterator 
{
private:
	nodeType<Type> *current;
public:
	LinkedListInterator() {};
	LinkedListInterator(nodeType<Type> a): current(&a) {};
	Type operator *()
	{

	}
	LinkedListInterator<Type> operator++ ()
	{
		return LinkedListInterator current = current->link;
	}
	bool operator ==(const LinkedListInterator<Type>& a)
	{
		return (current->info == a->current->info) ? true : false;
	}
	bool operator !=(const LinkedListInterator<Type>&)
	{
		return (current->info != a->current->info) ? true : false;
	}

};
