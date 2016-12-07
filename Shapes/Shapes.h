#pragma once
#include "iostream"
#include <string>
#include "Math.h"

#define PI 3.14159265359

class BaseShape
{
public:
	virtual void DebugPrint() = 0;
	//float m_X, m_Y; //Cannot figure out how this works
};
class Point : public BaseShape
{
public:
	Point() {};
	Point(float X, float Y) : m_X(X), m_Y(Y) {}
	void DebugPrint() override
	{
		std::cout << "\nPoint Position: " << m_X << "," << m_Y << std::endl;
	}
private:
	float m_X, m_Y;
};
class Rectangle : public BaseShape
{
public:
	Rectangle(float X, float Y, float H, float W, std::string C) : m_X(X), m_Y(Y), m_Height(H), m_Width(W), m_Color(C) {}
	void DebugPrint() override
	{
		std::cout << "\nRectangle Position: " << m_X << "," << m_Y << "\nRectangle Height:" << m_Height << std::endl;
		std::cout << "\nRectangle Width \n" << m_Width << std::endl;
		std::cout << "\nColor: " << m_Color << std::endl;
	}
private:
	float m_X, m_Y, m_Height, m_Width;
	std::string m_Color;
};
class Circle : public BaseShape
{
public:
	Circle(float X, float Y, float R, std::string C) : m_X(X), m_Y(Y), m_Radius(R), m_Color(C) {}
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
	float m_X, m_Y, m_Radius;
	std::string m_Color;
};
class Line : public BaseShape
{
public:
	Line(float X, float Y, float X2, float Y2, float L, std::string C) : m_X(X), m_Y(Y), m_X2(X2), m_Y2(Y2), m_Length(L), m_Color(C) {}
	void DebugPrint() override
	{
		std::cout << "\nOne end of line Position: " << m_X << "," << m_Y << std::endl;
		std::cout << "\nOther end of line Position: " << m_X2 << "," << m_Y2 << std::endl;
		std::cout << "\nLength: " << m_Length << std::endl;
		std::cout << "\nColor: " << m_Color << std::endl;
	}
private:
	float m_X, m_Y, m_X2, m_Y2, m_Length; // Two points correct?
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