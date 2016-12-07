#pragma once
#include "iostream"
#include <string>
#include "Math.h"
float pi = 3.14159265359;
class BaseShape
{
public:
	virtual void DebugPrint() = 0;
};
class Point : public BaseShape
{
public:
	Point() {};
	Point(float XX, float YY) : X(XX), Y(YY) {}
	void DebugPrint() override
	{
		std::cout << "\nPoint Position: " << X << "," << Y << std::endl;
	}
private:
	float X, Y;
};
class Rectangle : public BaseShape
{
public:
	Rectangle(float XX, float YY, float H, float W, std::string C) : X(XX), Y(YY), Height(H), Width(W), Color(C) {}
	void DebugPrint() override
	{
		std::cout << "\nRectangle Position: " << X << "," << Y << "\nRectangle Height:" << Height << std::endl;
		std::cout << "\nRectangle Width \n" << Width << std::endl;
		std::cout << "\nColor: " << Color << std::endl;
	}
private:
	float X, Y, Height, Width;
	std::string Color;
};
class Circle : public BaseShape
{
public:
	Circle(float XX, float YY, float D, std::string C) : X(XX), Y(YY), Diameter(D), Color(C) {}
	void DebugPrint() override
	{
		std::cout << "\nCircle Position: " << X << "," << Y << std::endl;
		std::cout << "\nCircle Diameter: " << Diameter << std::endl;
		std::cout << "\nCircle Area: " << Area() << std::endl;
		std::cout << "\nCircle Circumfrance: " << Circumfrance() << std::endl;
		std::cout << "\nColor: " << Color << std::endl;
	}
	float Circumfrance()
	{
		return 2 * pi*(Diameter / 2);
	}
	float Area()
	{
		return pi*((Diameter / 2) * (Diameter / 2));
	}
private:
	float X, Y, Diameter;
	std::string Color;
};
class Line : public BaseShape
{
public:
	Line(float XX, float YY, float XX2, float YY2, float L, std::string C) : X(XX), Y(YY), X2(XX2), Y2(YY2), Length(L), Color(C) {}
	void DebugPrint() override
	{
		std::cout << "\nOne end of line Position: " << X << "," << Y << std::endl;
		std::cout << "\nOther end of line Position: " << X2 << "," << Y2 << std::endl;
		std::cout << "\nLength: " << Length << std::endl;
		std::cout << "\nColor: " << Color << std::endl;
	}
private:
	float X, Y, X2, Y2, Length; // Two points correct?
	std::string Color;
};
class Triangle : public BaseShape
{
public:
	Triangle(float VX1, float VY1, float VX2, float VY2, float VX3, float VY3, std::string C)
	{
		V1 = Point(VX1, VY1);
		V2 = Point(VX2, VY2);
		V3 = Point(VX3, VY3);
		Color = C;
	}
	void DebugPrint() override
	{
		std::cout << "\nTriangle Point 1 - "; V1.DebugPrint(); std::cout << std::endl;
		std::cout << "\nTriangle Point 2 - "; V2.DebugPrint(); std::cout << std::endl;
		std::cout << "\nTriangle Point 3 - "; V3.DebugPrint(); std::cout << std::endl;
		std::cout << "\nColor: " << Color << std::endl;
	}
private:
	Point V1, V2, V3; // Need each point of the triangle 
	std::string Color;
};