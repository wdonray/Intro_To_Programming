#pragma once
#include "iostream"
#include <string>
#include "Math.h"

#define PI 3.14159265359

class BaseShape
{
public:
	virtual void DebugPrint() = 0;
	float m_X, m_Y;
};
class Point : public BaseShape
{
public:
	Point() {};
	Point(float x, float y)
	{
		this->m_X = x;
		this->m_Y = y;
	}
	void DebugPrint() override
	{
		std::cout << "\nPoint Position: " << m_X << "," << m_Y << std::endl;
	}
};
class Rectangle : public BaseShape
{
public:
	Rectangle(float x, float y, float h, float w, std::string c)
	{
		this->m_X = x;
		this->m_Y = y;
		m_Height = h;
		m_Width = w;
		m_Color = c;
	}

	void DebugPrint() override
	{
		std::cout << "\nRectangle Position: " << m_X << "," << m_Y << "\nRectangle Height:" << m_Height << std::endl;
		std::cout << "\nRectangle Width \n" << m_Width << std::endl;
		std::cout << "\nColor: " << m_Color << std::endl;
	}
private:
	float m_Height, m_Width;
	std::string m_Color;
};
class Circle : public BaseShape
{
public:
	Circle(float x, float y, float r, std::string c)
	{
		this->m_X = x;
		this->m_Y = y;
		m_Radius = r;
		m_Color = c;
	}
	void DebugPrint() override
	{
		std::cout << "\nCircle Position: " << m_X << "," << m_Y << std::endl;
		std::cout << "\nCircle Radius: " << m_Radius << std::endl;
		std::cout << "\nCircle Area: " << Area() << std::endl;
		std::cout << "\nCircle Circumfrance: " << Circumference() << std::endl;
		std::cout << "\nColor: " << m_Color << std::endl;
	}
	float Circumference()
	{
		return 2 * PI*(m_Radius);
	}
	float Area()
	{
		return PI * (m_Radius * m_Radius);
	}
private:
	float m_Radius;
	std::string m_Color;
};
class Line : public BaseShape
{
public:
	Line(float x, float y, float x2, float y2, float length, std::string c)
	{
		this->m_X = x;
		this->m_Y = y;
		m_X2 = x2;
		m_Y2 = y2;
		m_Length = length;
		m_Color = c;
	}
	void DebugPrint() override
	{
		std::cout << "\nOne end of line Position: " << m_X << "," << m_Y << std::endl;
		std::cout << "\nOther end of line Position: " << m_X2 << "," << m_Y2 << std::endl;
		std::cout << "\nLength: " << m_Length << std::endl;
		std::cout << "\nColor: " << m_Color << std::endl;
	}
private:
	float m_X2, m_Y2, m_Length; // Two points correct?
	std::string m_Color;
};
class Triangle : public BaseShape
{
public:
	Triangle(float VX1, float VY1, float VX2, float VY2, float VX3, float VY3, std::string C)
	{
		m_V1 = Point(VX1, VY1);
		m_V2 = Point(VX2, VY2);
		m_V3 = Point(VX3, VY3);
		m_Color = C;
	}
	void DebugPrint() override
	{
		std::cout << "\nTriangle Point 1 "; m_V1.DebugPrint(); std::cout << std::endl;
		std::cout << "\nTriangle Point 2 "; m_V2.DebugPrint(); std::cout << std::endl;
		std::cout << "\nTriangle Point 3 "; m_V3.DebugPrint(); std::cout << std::endl;
		std::cout << "\nColor: " << m_Color << std::endl;
	}
private:
	Point m_V1, m_V2, m_V3; // Need each point of the triangle 
	std::string m_Color;
};