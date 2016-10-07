#include <iostream>
#include <string>
#include "Stack.h"

int main()
{
	stack<int> * Stack = new stack<int>(5);
	Stack->initializeStack();
	int i = 0;
	while (!Stack->isFullStack())
		Stack->push(i++);
	while (!Stack->isEmpty())
	{
		printf("top of stack is : %i \n", Stack->top());
		Stack->pop();
	}
	system("pause");
	return 0;
}