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
		if (i % 2 == 0)
			os << "\n";
		os << mat.matrix2[i / 2][i % 2] << " ";
	}
	return os;
}
std::ostream& operator<<(std::ostream& os, const Matrix3 mat)
{
	for (int i = 0; i < 9; i++)
	{
		if (i % 3 == 0)
			os << "\n";
		os << mat.matrix3[i] << " ";
	}
	return os;
}
std::ostream& operator<<(std::ostream& os, const Matrix4 mat)
{
	for (int i = 0; i < 16; i++)
	{
		if (i % 4 == 0)
			os << "\n";
		os << mat.matrix4[i / 4][i % 4] << " ";
	}
	return os;
}
int main()
{
	Vector2 a = Vector2(1, 3);
	Vector2 aa = Vector2(1, 3);
	Matrix2 b = Matrix2(2, 3, 4, 5);
	Matrix2 c = Matrix2(1, 2, 3, 4);

	Vector3 d = Vector3(3, 4, 5);
	Vector3 dd = Vector3(3, 4, 5);
	Matrix3 e = Matrix3(5, 6, 7, 8, 9, 1, 33, 44, 55);
	Matrix3 Rotate3D = Matrix3(1, 0, 0, 1, 0, 1, 1, 0, 0);

	Vector4 f = Vector4(7, 3, 2, 4);
	Vector4 ff = Vector4(7, 2, 2, 4);
	Matrix4 g = Matrix4(11, 21, 33, 44, 57, 69, 72, 8, 9, 10, 1, 2, 3, 4, 5, 8);
	Matrix4 Rotate4D = Matrix4(1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 1);

	//assert(*A + B == Vector3D<float>(4, 6, 8));

	std::fstream mf;
	mf.open("Test.txt", std::ios_base::out);
	if (mf.is_open())
	{
		mf << "Vector2 = Vector2 \nExpected Result: True / 1 \n";
		mf << "Result:" << (a == aa);
		mf << "\n\n";
		mf << "Vector2 + Vector2 \nExpected Result: <2 , 6> \n";
		mf << "Result:" << a + aa;
		mf << "\n\n";
		mf << "Vector2 - Vector2 \nExpected Result: <0 , 0> \n";
		mf << "Result:" << a - aa;
		mf << "\n\n";
		mf << "Vector2 * 2 \nExpected Result: <2 , 6> \n";
		mf << "Result:" << a * 2;
		mf << "\n\n";
		mf << "Matrix2 Magnitude \nExpected Result: 3.16228 / sqrt{10}  \n";
		mf << "Result:" << a.Magnitude();
		mf << "\n\n";
		mf << "Matrix2 Normalize \nExpected Result: <0.316228, 0.948683>  \n";
		mf << "Result:" << a.Normalize();
		mf << "\n\n";
		mf << "Matrix2 DotProduct \nExpected Result: 10  \n";
		mf << "Result:" << a.DotProduct(aa);
		mf << "\n\n";
		mf << "Matrix2 * Matrix2 \nExpected Result: (11, 16, 19, 28) \n";
		mf << "Result:" << b*c;
		mf << "\n\n";
		mf << "Matrix2 * Vector2 \nExpectked Result: <14 , 18> \n";
		mf << "Result:" << b*a;
		mf << "\n\n";

		mf << "Vector3 = Vector3 \nExpected Result: True / 1 \n";
		mf << "Result:" << (d == dd);
		mf << "\n\n";
		mf << "Vector3 + Vector3 \nExpected Result: <6, 8, 10> \n";
		mf << "Result:" << d + dd;
		mf << "\n\n";
		mf << "Vector3 - Vector3 \nExpected Result: <0 , 0, 0> \n";
		mf << "Result:" << d - dd;
		mf << "\n\n";
		mf << "Vector3 * 3 \nExpected Result: <9, 12, 15> \n";
		mf << "Result:" << d * 3;
		mf << "\n\n";
		mf << "Matrix3 Magnitude \nExpected Result: 7.07107 / sqrt{2} * 5  \n";
		mf << "Result:" << d.Magnitude();
		mf << "\n\n";
		mf << "Matrix3 Normalize \nExpected Result: <0.424264, 0.565685, 0.707107>  \n";
		mf << "Result:" << d.Normalize();
		mf << "\n\n";
		mf << "Matrix3 DotProduct \nExpected Result: 50  \n";
		mf << "Result:" << d.DotProduct(dd);
		mf << "\n\n";
		mf << "Matrix3 CrossPoduct \nExpexted Result: <0, 0, 5> \n";
		mf << "Result:" << d.CrossProduct(dd);
		mf << "\n\n";
		mf << "Matrix3 * Matrix3 \nExpected Result: (30, 36, 42, 66) \n";
		mf << "Result:" << e*e;
		mf << "\n\n";
		mf << "Matrix3 * Vector3 \nExpected Result: <212, 274, 300> \n";
		mf << "Result:" << e*d;
		mf << "\n\n";
		mf << "Matrix3 rotated 30 degrees around X axis \nExpected Result: \n1, 0, 0, 1, 0.5, 0.866025, 1, 0, 0\n";
		mf << "Result:" << Rotate3D.setRotateX((30 * pi) / 180);
		mf << "\n\n";
		mf << "Matrix3 rotated 35 degrees around Y axis \nExpected Result: \n0.819152, 0, 0.573577, 0.32242, 0.5, 1.28298, 0.819152, 0, 0.573577\n";
		mf << "Result:" << Rotate3D.setRotateY((35 * pi) / 180);
		mf << "\n\n";
		mf << "Matrix3 rotated 40 degrees around X axis \nExpected Result: \n 1, 0, 0, 1, 0.5, 0.866025, 1, 0, 0\n";
		mf << "Result:" << Rotate3D.setRotateZ((40 * pi) / 180);
		mf << "\n\n";

		mf << "Vector4 = Vector4 \nExpected Result: False / 0 \n";
		mf << "Result:" << (f == ff);
		mf << "\n\n";
		mf << "Vector4 + Vector4 \nExpected Result: <14, 5, 4, 8> \n";
		mf << "Result:" << f + ff;
		mf << "\n\n";
		mf << "Vector4 - Vector4 \nExpected Result: <0, 1, 0, 0> \n";
		mf << "Result:" << f - ff;
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
		mf << "Result:" << f.DotProduct(ff);
		mf << "\n\n";
		mf << "Matrix4 * Matrix4 \nExpected Result: \n(1747, 2186, 2128, 1070, 5232, 6710, 6961, 3268, 684, 897, 1028, 494, 330, 421, 432, 238) \n";
		mf << "Result:" << g*g;
		mf << "\n\n";
		mf << "Matrix4 * Vector4 \nExpected Result: \n<278, 390, 469, 368> \n";
		mf << "Result:" << g*f;
		mf << "\n\n";
		mf << "Matrix4 rotated 30 degrees around X axis \nExpected Result: \n 1, 1.36603, 0.366025, 1, 0, 0.866025 ,- 0.5, 1, 0, 1.36603, 0.366025, 0, 0, 0, 0, 1 \n";
		mf << "Result:" << Rotate4D.setRotateX((30 * pi) / 180);
		mf << "\n\n";
		mf << "Matrix4 rotated 35 degrees around Y axis \nExpected Result: \n 0.609208, 1.36603, 0.873407, 1, 0.286788, 0.866025, - 0.409576, 1, - 0.209944, 1.36603, 0.29983, 0, 0, 0, 0, 1 \n";
		mf << "Result:" << Rotate4D.setRotateY((35 * pi) / 180);
		mf << "\n\n";
		mf << "Matrix4 rotated 40 degrees around X axis \nExpected Result: \n1.34475, 0.654845, 0.873407, 1, 0.776363, 0.47907, - 0.409576, 1, 0.717238, 1.18139, 0.29983, 0, 0, 0, 0, 1 \n";
		mf << "Result:" << Rotate4D.setRotateZ((40 * pi) / 180);
		mf << "\n\n";
		mf.close();
	}
	else std::cout << "Unable to open file \n";
	system("pause");
	return 0;
}