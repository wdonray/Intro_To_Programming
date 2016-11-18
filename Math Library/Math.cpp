#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string>
#include "Math.h"
#include <cassert>
#include <fstream>
const float pi = 3.1415926535897;
std::ostream& operator<<(std::ostream& os, const Vector2 vec)
{
	os << '<' << vec.VA[0] << ',' << vec.VA[1] << '>';
	return os;
}
std::ostream& operator<<(std::ostream& os, const Vector3 vec)
{
	os << '<' << vec.VA[0] << ',' << vec.VA[1] << ',' << vec.VA[2] << '>';
	return os;
}
std::ostream& operator<<(std::ostream& os, const Vector4 vec)
{
	os << '<' << vec.VA[0] << ',' << vec.VA[1] << ',' << vec.VA[2] << ',' << vec.VA[3] << '>';
	return os;
}
std::ostream& operator<<(std::ostream& os, const Matrix2 mat)
{
	for (int i = 0; i < 4; i++)
	{
		if (i % 4 == 0)
			os << "\n( ";
		os << mat.matrix2[i / 2][i % 2] << " ";
	}
	return os;
}
std::ostream& operator<<(std::ostream& os, const Matrix3 mat)
{
	for (int i = 0; i < 9; i++)
	{
		if (i % 9 == 0)
			os << "\n(";
		os << mat.matrix3[i] << " ";
	}
	return os;
}
std::ostream& operator<<(std::ostream& os, const Matrix4 mat)
{
	for (int i = 0; i < 16; i++)
	{
		if (i % 16 == 0)
			os << "\n(";
		os << mat.matrix4[i / 4][i % 4] << " ";
	}
	return os;
}
int main()
{
	Vector2 a1 = Vector2(1, 3);
	Vector2 a2 = Vector2(1, 2);
	Vector2 a3 = Vector2(1, 3);
	Vector2 a4 = Vector2(1, 4);
	Vector2 a5 = Vector2(7, 4);
	Matrix2 b1 = Matrix2(2, 3, 4, 5);
	Matrix2 b2 = Matrix2(2, 3, 7, 5);
	Matrix2 b3 = Matrix2(1, 6, 3, 4);
	Matrix2 b4 = Matrix2(2, 3, 4, 9);

	Vector3 d1 = Vector3(3, 4, 5);
	Vector3 d2 = Vector3(3, 6, 5);
	Vector3 d3 = Vector3(6, 4, 5);
	Vector3 d4 = Vector3(3, 4, 7);
	Vector3 d5 = Vector3(3, 9, 5);
	Matrix3 e1 = Matrix3(5, 56, 7, 8, 19, 1, 33, 44, 55);
	Matrix3 e2 = Matrix3(5, 6, 7, 18, 9, 1, 33, 44, 55);
	Matrix3 e3 = Matrix3(5, 6, 17, 8, 99, 1, 33, 44, 55);
	Matrix3 e4 = Matrix3(5, 16, 7, 8, 9, 1, 33, 44, 55);
	Matrix3 Rotate3D1 = Matrix3(1, 1, 0, 1, 0, 1, 1, 0, 0);
	Matrix3 Rotate3D2 = Matrix3(1, 0, 1, 1, 0, 1, 1, 0, 0);
	Matrix3 Rotate3D3 = Matrix3(1, 0, 0, 1, 0, 1, 1, 0, 0);
	Matrix3 Rotate3D4 = Matrix3(0, 1, 0, 1, 0, 1, 1, 0, 0);
	Matrix3 Rotate3D5 = Matrix3(1, 0, 0, 0, 0, 1, 1, 0, 0);

	Vector4 f = Vector4(7, 3, 2, 4);
	Matrix4 g = Matrix4(11, 21, 33, 44, 57, 69, 72, 8, 9, 10, 1, 2, 3, 4, 5, 8);
	Matrix4 Rotate4D = Matrix4(1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 1);

	std::fstream mf;
	mf.open("Test.txt", std::ios_base::out);
	if (mf.is_open())
	{
		mf << "----------------------------------------TEST FUNCTIONS--------------------------------\n";
		mf << "Vector2 = Vector2 \nExpected Result: 1 , 0 , 1 , 1 , 1\n";
		mf << "Result: " << (a1 == a1) << " , " << (a1 == a2) << " , " << (a2 == a2) << " , " << (a2 == a2) << " , " << (a3 == a3);
		mf << "\n\n";
		mf << "Vector2 + Vector2 \nExpected Result: <2,6> , <2,5> , <2,4> , <2,5> , <2,6>\n";
		mf << "Result: " << a1 + a1 << " , " << a1 + a2 << " , " << a2 + a2 << " , " << a2 + a3 << " , " << a3 + a3;
		mf << "\n\n";
		mf << "Vector2 - Vector2 \nExpected Result: <0,0> , <0,1> , <0,0> , <0,-1> , <0,0>\n";
		mf << "Result: " << a1 - a1 << " , " << a1 - a2 << " , " << a2 - a2 << " , " << a2 - a3 << " , " << a3 - a3;
		mf << "\n\n";
		mf << "Vector2 * 2 \nExpected Result: <2,6> , <2,4> , <2,6> , <2,8> , <14,8>\n";
		mf << "Result: " << a1 * 2 << " , " << a2 * 2 << " , " << a3 * 2 << " , " << a4 * 2 << " , " << a5 * 2;
		mf << "\n\n";
		mf << "Matrix2 Magnitude \nExpected Result: 3.16228 , 2.23607 , 3.16228 , 4.12311 , 8.06226\n";
		mf << "Result: " << a1.Magnitude() << " , " << a2.Magnitude() << " , " << a3.Magnitude() << " , " << a4.Magnitude() << " , " << a5.Magnitude();
		mf << "\n\n";
		mf << "Matrix2 Normalize \nExpected Result: <0.316228,0.948683> , <0.447214,0.894427> , <0.316228,0.948683> , <0.242536,0.970143> , <0.868243,0.496139>  \n";
		mf << "Result: " << a1.Normalize() << " , " << a2.Normalize() << " , " << a3.Normalize() << " , " << a4.Normalize() << " , " << a5.Normalize();
		mf << "\n\n";
		mf << "Matrix2 DotProduct \nExpected Result: 10 , 7 , 10 , 13 , 19\n";
		mf << "Result: " << a1.DotProduct(a1) << " , " << a1.DotProduct(a2) << " , " << a1.DotProduct(a3) << " , " << a1.DotProduct(a4) << " , " << a1.DotProduct(a5);
		mf << "\n\n";
		mf << "Matrix2 * Matrix2 \nExpected Result: ( 11 24 19 44 ) (25 21 43 37) (11 24 22 62) (16 33 44 93) (16 21 28 37)\n";
		mf << "Result: 2x2 " << b1*b3 << ")" << b1*b2 << ")" << b2*b3 << ")" << b4*b4 << ")" << b1*b1 << ")";
		mf << "\n\n";
		mf << "Matrix2 * Vector2 \nExpectked Result: <14,18> , <16,13> , <10,18> , <18,39> , <30,41>\n";
		mf << "Result: " << b1*a1 << ")" << b1*b2 << ")" << b2*b3 << ")" << b4*b4 << ")" << b1*b1 << ")";
		mf << "\n";
		mf << "------------------------------------------------------------------------------------------\n";
		mf << "Vector3 = Vector3 \nExpected Result: 1 , 0 , 1 , 1 , 1\n";
		mf << "Result: " << (d1 == d1) << " , " << (d1 == d2) << " , " << (d2 == d2) << " , " << (d2 == d2) << " , " << (d3 == d3);
		mf << "\n\n";
		mf << "Vector3 + Vector3 \nExpected Result: <6,8,10> , <6,10,10> , <6,12,10> , <9,10,10> , <12,8,10>\n";
		mf << "Result: " << d1 + d1 << " , " << d1 + d2 << " , " << d2 + d2 << " , " << d2 + d3 << " , " << d3 + d3;;
		mf << "\n\n";
		mf << "Vector3 - Vector3 \nExpected Result: <0,0,0> , <0,-2,0> , <0,0,0> , <-3,2,0> , <0,0,0>\n";
		mf << "Result: " << d1 - d1 << " , " << d1 - d2 << " , " << d2 - d2 << " , " << d2 - d3 << " , " << d3 - d3;
		mf << "\n\n";
		mf << "Vector3 * 3 \nExpected Result: <9,12,15> , <6,12,10> , <12,8,10> , <6,8,14> , <6,18,10>\n";
		mf << "Result: " << d1 * 3 << " , " << d2 * 2 << " , " << d3 * 2 << " , " << d4 * 2 << " , " << d5 * 2;
		mf << "\n\n";
		mf << "Matrix3 Magnitude \nExpected Result: 7.07107 , 8.3666 , 8.77496 , 8.60233 , 10.7238\n";
		mf << "Result: " << d1.Magnitude() << " , " << d2.Magnitude() << " , " << d3.Magnitude() << " , " << d4.Magnitude() << " , " << d5.Magnitude();
		mf << "\n\n";
		mf << "Matrix3 Normalize \nExpected Result: <0.424264,0.565685,0.707107> , <0.447214,0.894427> , <0.316228,0.948683> , <0.242536,0.970143> , <0.868243,0.496139>\n";
		mf << "Result: " << d1.Normalize() << " , " << a2.Normalize() << " , " << a3.Normalize() << " , " << a4.Normalize() << " , " << a5.Normalize();
		mf << "\n\n";
		mf << "Matrix3 DotProduct \nExpected Result: 50 , 58 , 59 , 60 , 70\n";
		mf << "Result: " << d1.DotProduct(d1) << " , " << d1.DotProduct(d2) << " , " << d1.DotProduct(d3) << " , " << d1.DotProduct(d4) << " , " << d1.DotProduct(d5);
		mf << "\n\n";
		mf << "Matrix3 CrossPoduct \nExpexted Result: <0,0,5> , <-10,0,15> , <0,-15,-10> , <8,6,5> , <-25,0,30>\n";
		mf << "Result: " << d1.CrossProduct(d1) << " , " << d1.CrossProduct(d2) << " , " << d1.CrossProduct(d3) << " , " << d1.CrossProduct(d4) << " , " << d1.CrossProduct(d5);
		mf << "\n\n";
		mf << "Matrix3 * Matrix3 \nExpected Result: (704 1652 476 225 853 130 2020 5332 3263 ) (1264 842 476 415 263 130 2070 3122 3263) (304 932 476 195 1043 370 2020 3212 3593)\n(384 532 436 145 253 120 2020 3092 3263) (704 1652 476 225 853 130 2020 5332 3263)\n";
		mf << "Result: " << e1*e1 << ")" << e1*e2 << ")" << e2*e3 << ")" << e4*e4 << ")" <<e1*e1 << ")";
		mf << "\n\n";
		mf << "Matrix3 * Vector3 \nExpected Result: <212, 274, 300> \n";
		mf << "Result: " << e1*d1 << ")" << e1*e2 << ")" << e2*e3 << ")" << e4*d4 << ")" << e1*e1 << ")";
		mf << "\n\n";
		mf << "Matrix3 rotated 30.7 degrees around X axis \nExpected Result: \n1, 0, 0, 0.349309, 0, 0.859852, 1.85985, 0, 0\n";
		mf << "Result: " << Rotate3D1.setRotateX((30.7 * pi) / 180);
		mf << "\n\n";
		mf << "Matrix3 rotated 35.2 degrees around Y axis \nExpected Result: \n1.88922, 0, 0, 0.349309, 0, 0.859852, 1.22877, 0, 0.495647\n";
		mf << "Result: " << Rotate3D1.setRotateY((35.2 * pi) / 180);
		mf << "\n\n";
		mf << "Matrix3 rotated 40 degrees around X axis \nExpected Result: \n1.2227, 0, -0.552702, 1.48196, 0, 0.658685, 1.49636, 0, 0.495647\n";
		mf << "Result: " << Rotate3D1.setRotateZ((40 * pi) / 180);
		mf << "\n";
		mf << "------------------------------------------------------------------------------------------\n";
		mf << "Vector4 = Vector4 \nExpected Result: False / 0 \n";
		mf << "Result:" << (f == f);
		mf << "\n\n";
		mf << "Vector4 + Vector4 \nExpected Result: <14, 5, 4, 8> \n";
		mf << "Result:" << f + f;
		mf << "\n\n";
		mf << "Vector4 - Vector4 \nExpected Result: <0, 1, 0, 0> \n";
		mf << "Result:" << f - f;
		mf << "\n\n";
		mf << "Vector4 * 4 \nExpected Result: <21, 9, 6, 12> \n";
		mf << "Result:" << f * 4;
		mf << "\n\n";
		mf << "Matrix4 Magnitude \nExpected Result: 8.83176 \n";
		mf << "Result:" << f.Magnitude();
		mf << "\n\n";
		mf << "Matrix4 Normalize \nExpected Result: <0.792594,0.339683,0.226455,0.452911>  \n";
		mf << "Result:" << f.Normalize();
		mf << "\n\n";
		mf << "Matrix4 DotProduct \nExpected Result: 75  \n";
		mf << "Result:" << f.DotProduct(f);
		mf << "\n\n";
		mf << "Matrix4 * Matrix4 \nExpected Result: \n(1747, 2186, 2128, 1070, 5232, 6710, 6961, 3268, 684, 897, 1028, 494, 330, 421, 432, 238) \n";
		mf << "Result:" << g*g;
		mf << "\n\n";
		mf << "Matrix4 * Vector4 \nExpected Result: \n<278, 390, 469, 368> \n";
		mf << "Result:" << g*f;
		mf << "\n\n";
		mf << "Matrix4 rotated 30 degrees around X axis \nExpected Result: \n1, 1, 1, 1, 0, 0.366025, - 0.5, 0.866025, 0, 1.36603, 0.866025, 0.5, 0, 0, 0, 1\n";
		mf << "Result:" << Rotate4D.setRotateX((30 * pi) / 180);
		mf << "\n\n";
		mf << "Matrix4 rotated 35 degrees around Y axis \nExpected Result: \n0.819152, 1.60267, 1.31588, 1.10594, 0, 0.366025, - 0.5, 0.866025, - 0.573577, 0.545406, 0.13583, - 0.164001, 0, 0, 0, 1\n";
		mf << "Result:" << Rotate4D.setRotateY((35 * pi) / 180);
		mf << "\n\n";
		mf << "Matrix4 rotated 40 degrees around X axis \nExpected Result: \n0.627507, 0.992441, 1.32942, 0.290529, 0.526541, 1.31057, 0.462812, 1.3743, - 0.573577, 0.545406, 0.13583, - 0.164001, 0, 0, 0, 1\n";
		mf << "Result:" << Rotate4D.setRotateZ((40 * pi) / 180);
		mf << "\n";
		mf << "------------------------------------------------------------------------------------------\n";
		mf.close();
	}
	else std::cout << "Unable to open file \n";
	system("pause");
	return 0;
}