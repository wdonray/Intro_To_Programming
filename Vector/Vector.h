#pragma once
#include <math.h>
//template <class T>
class Vector2D
{
public:
	Vector2D() {};
	Vector2D(float xx, float yy) : x(xx), y(yy) {}
	Vector2D add(const Vector2D &A)
	{
		Vector2D tmp = Vector2D(x + A.x, y + A.y);
		return tmp;
	}
	Vector2D Subtract(const Vector2D &A)
	{
		Vector2D tmp = Vector2D(x - A.x, y - A.y);
		return tmp;
	}
	Vector2D ScalarMult(float Mult)
	{
		Vector2D tmp = Vector2D(x * Mult, y * Mult);
		return tmp;
	}
	float Magnitude()
	{
		return sqrt(x*x + y*y);
	}
	Vector2D Normalize()
	{
		Vector2D tmp = Vector2D(x / Magnitude(), y / Magnitude());
		return tmp;
	}
	float DotProduct(const Vector2D &A)
	{
		return x * A.x + y * A.y;
	}
private:
	float x, y;
};

class Vector3D
{
public:
	Vector3D() {};
	Vector3D(float xx, float yy, float zz) : x(xx), y(yy), z(zz) {}
	Vector3D add(const Vector3D &A)
	{
		Vector3D tmp = Vector3D(x + A.x, y + A.y, z + A.z);
		return tmp;
	}
	Vector3D Subtract(const Vector3D &A)
	{
		Vector3D tmp = Vector3D(x - A.x, y - A.y, z - A.z);
		return tmp;
	}
	Vector3D ScalarMult(float Mult)
	{
		Vector3D tmp = Vector3D(x * Mult, y * Mult, z *= Mult);
		return tmp;
	}
	float Magnitude()
	{
		return sqrt((x*x) + (y*y) + (z*z));
	}
	Vector3D Normalize()
	{
		Vector3D tmp = Vector3D(x / Magnitude(), y / Magnitude(), z / Magnitude());
		return tmp;
	}
	float DotProduct(const Vector3D &A)
	{
		return (x * A.x) + (y * A.y) + (z * A.z);
	}
	Vector3D CrossProduct(const const Vector3D &A)
	{
		Vector3D tmp = Vector3D(y*A.z - z*A.y, x*A.z - z*A.x, z*A.y - z*A.x);
		return tmp;
	}
private:
	float x, y, z;
};