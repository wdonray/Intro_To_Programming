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
	A->Add(1);
	A->Add(3);
	A->Add(2);
	system("pause");
	return 0;
}