#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string>
#include "Vector.h"

int main()
{
	Vector2D * A = new Vector2D(2, 5);
	Vector2D B = Vector2D(7, 8);
	Vector3D * Aa = new Vector3D(3, 5, 2.5);
	Vector3D Bb = Vector3D(6, 9, 5);
	//Aa->Normalize();
	Aa->add(Bb);
	A->add(B);
	A->Subtract(B);
	system("pause");
	return 0;
}