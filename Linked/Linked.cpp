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
	//nodeType<int> * head;
	//nodeType<int> a, b, c;
	//a.info = 0;
	//b.info = 2;
	//c.info = 4;
	//c.link = &b;
	//b.link = &a;
	//a.link = NULL;
	//head = &c;
	//List(head);
	LinkedList<int> * A = new LinkedList<int>();
	A->insertLast(1);
	A->insertLast(3);
	A->insertLast(2);
	A->insertFirst(54);
	A->print();
	linkedListInterator<int> tmp = linkedListInterator<int>(A->begin());
	++tmp;
	A->front();
	A->search(4);
	system("pause");
	return 0;
}