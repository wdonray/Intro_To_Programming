#pragma once
#include <math.h>
template <class T>
class Vector2D
{
public:
	Vector2D() {};
	Vector2D<T>(T xx, T yy) : x(xx), y(yy) {}
	bool operator == (const Vector2D<T> &A)
	{
		return x == A.x && y == A.y;
	}
	Vector2D<T> operator +(const Vector2D<T> &A)
	{
		return Vector2D(x + A.x, y + A.y);
	}
	Vector2D<T> operator -(const Vector2D<T> &A)
	{
		return Vector2D(x - A.x, y - A.y);
	}
	Vector2D<T> operator *(T Mult)
	{
		return Vector2D(x * Mult, y * Mult);
	}
	T Magnitude()
	{
		return sqrt((x*x) + (y*y));
	}
	Vector2D<T> Normalize()
	{
		return Vector2D(x / Magnitude(), y / Magnitude());
	}
	T DotProduct(const Vector2D<T> &A)
	{
		return (x * A.x) + (y * A.y);
	}
private:
	T x, y;
};
template <class T>
class Vector3D
{
public:
	Vector3D() {};
	Vector3D<T>(T xx, T yy, T zz) : x(xx), y(yy), z(zz) {}
	bool operator == (const Vector3D<T> &A)
	{
		return x == A.x && y == A.y && z == A.z;
	}
	Vector3D<T> operator +(const Vector3D<T> &A)
	{
		return Vector3D(x + A.x, y + A.y, z + A.z);
	}
	Vector3D<T> operator -(const Vector3D<T> &A)
	{
		return Vector3D(x - A.x, y - A.y, z - A.z);
	}
	Vector2D<T> operator *(T Mult)
	{
		return Vector2D(x * Mult, y * Mult, z *Mult);
	}
	T Magnitude()
	{
		return sqrt((x*x) + (y*y) + (z*z));
	}
	Vector3D<T> Normalize()
	{
		return Vector3D(x / Magnitude(), y / Magnitude(), z / Magnitude());
	}
	T DotProduct(const Vector3D<T> &A)
	{
		return (x * A.x) + (y * A.y) + (z * A.z);
	}
	Vector3D<T> CrossProduct(const const Vector3D<T> &A)
	{
		return Vector3D(y*A.z - z*A.y, x*A.z - z*A.x, z*A.y - z*A.x);
	}
private:
	T x, y, z;
};