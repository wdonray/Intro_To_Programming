#pragma once
#include <string>
class Stack
{
public:
	void pop();
	char top();
	void push(char);
	void initializeStack(std::string);
	bool isFullStack();
	bool isEmpty();
private:
	std::string m_data;
	int m_topindex;
};