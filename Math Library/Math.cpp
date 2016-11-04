#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string>
#include "Math.h"
#include <cassert>

int main()
{
	//Vector4 A = Vector4(1, 2, 3, 4);
	//Vector4 B = Vector4(1, 2, 3, 4);
	//assert(A * 1 == Vector4(1, 2, 3, 4));
	//if (A == B)
	//	std::cout << "Vector 4 ==: Yes they are equal. \n";
	//else
	//	std::cout << "No \n ";
	float b[2][2] = { 1,2,3,4 };
	Vector2 n = Vector2(1, 2);
	Matrix2 a = Matrix2(b);
	Matrix2 k = { 1, 2, 3, 4 };
	Matrix2 test = (a*k);
	Vector2 test2 = (k*n);
	std::cout << "2D Matrix (1, 2, 3 ,4) * (1, 2, 3 ,4): ";
	test.print();
	std::cout << "2D Matrix/Vector (1, 2, 3, 4) * (1 , 2): ";
	test2.print();
	system("pause");
	return 0;
}