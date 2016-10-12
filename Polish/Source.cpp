#include <iostream>
#include <string>
#include "Stack.h"

int main()
{
	Stack mathStack = Stack::Stack(3);
	std::cout << "Enter equation\n";
	std::string equation;
	std::getline(std::cin, equation);
	for (int i = 0; i < 3; i++)
	{
		mathStack.push(equation[i]);
		if (mathStack.top() == '+')
		{
			mathStack.pop();
			int temptop = mathStack.top();
			mathStack.pop();
			int ans = temptop + mathStack.top() - 48;
			mathStack.pop();
			mathStack.push(ans);
		}
		if (mathStack.top() == '-')
		{
			mathStack.pop();
			int temptop = mathStack.top();
			mathStack.pop();
			int ans = temptop - mathStack.top();
			mathStack.pop();
			mathStack.push(ans);
		}
		if (mathStack.top() == '*')
		{
			mathStack.pop();
			int temptop = mathStack.top();
			mathStack.pop();
			int ans = temptop + mathStack.top();
			mathStack.pop();
			mathStack.push(ans);
		}
		if (mathStack.top() == '/')
		{
			mathStack.pop();
			int temptop = mathStack.top();
			mathStack.pop();
			int ans = temptop + mathStack.top();
			mathStack.pop();
			mathStack.push(ans);
		}


	}
	std::cout << mathStack.top() << "\n";
	system("pause");
	return 0;
}