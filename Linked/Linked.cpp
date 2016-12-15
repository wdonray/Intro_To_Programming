#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string>
#include "Linked.h"
void List(nodeType<int> * start)//, nodeType end)
{
	while (start != NULL)
	{
		std::cout << start->info;
		start = start->link;
	}
}
int main()
{
	linkedListType<int> * A = new linkedListType<int>();
	linkedListType<int> * B = new linkedListType<int>();
	A->insertLast(1);
	A->insertLast(3);
	A->insertLast(2);
	A->insertFirst(54);
	linkedListIterator<int> tmp = linkedListIterator<int>(A->begin());
	++tmp;
	A->front();
	//A->destroyList();
	A->deleteNode(54);
	A->print();
	bool test, test2, test3;
	(test = A->search(53)) ? std::cout << "\nTrue \n" : std::cout << "\nFalse \n";
	(test2 = A->isEmptyList()) ? std::cout << "\nTrue \n" : std::cout << "\nFalse \n";
	(B = A) ? std::cout << "\nA and B are now equal\n" : std::cout << "\nFalse \n \n";
	std::cout << "Length:" << A->length() << "\n\n";
	system("pause");
	return 0;
}