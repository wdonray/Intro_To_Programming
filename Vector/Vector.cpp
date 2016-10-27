#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string>
#include "Vector.h"

int main()
{
	Vector2D * A = new Vector2D(2, 5);
	Vector2D B = Vector2D(7, 8);
	A->add(B);
	A->Subtract(B);
	system("pause");
	return 0;
}