#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string>
#include "Vector.h"
#include <cassert>

int main()
{
	Vector3D<float> * A = new Vector3D<float>(3, 4, 5);
	Vector3D<float> B = Vector3D<float>(1, 2, 3);
	A->add(B);
	assert(*A + B == Vector3D<float>(4, 6, 8));
	//Vector2D * A = new Vector2D(2, 5);
	//Vector2D B = Vector2D(7, 8);
	//////////////////////////////////////////
	//Vector3D * Aa = new Vector3D(3, 5, 2.5);
	//Vector3D Bb = Vector3D(6, 9, 5.4);
	//assert(Aa->add(Bb) == Vector3D(9, 14, 7.9));
	//assert(A->add(B) == Vector2D(9,13));
	//assert(A->Subtract(B) == Vector2D(-5,-3));
	//assert(*A - B == Vector2D(-5, -3));
	system("pause");
	return 0;
}