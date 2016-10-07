#include "Stack.h"


void Stack::pop()
{
	m_data[m_topindex] = '\0';
	m_topindex = m_data.length() - 1;
}

char Stack::top()
{
	return m_data[m_topindex];
}

void Stack::push(char work)
{
	m_data[m_topindex - 1] = work;
	m_topindex = m_data.length();
}

void Stack::initializeStack(std::string work)
{
	m_data = work;
	m_topindex = m_data.length() - 1;
}

bool Stack::isFullStack()
{
	return false;
}

bool Stack::isEmpty()
{
	if (m_topindex == -1)
	{
		return true;
	}
	else
		return false;
}