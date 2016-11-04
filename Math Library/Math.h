#pragma once
class Vector2
{
public:
	Vector2() {};
	Vector2(float xpos, float ypos) : x(xpos), y(ypos) {}
	bool operator == (const Vector2 &A)
	{
		return x == A.x && y == A.y;
	}
	Vector2 operator +(const Vector2 &A)
	{
		return Vector2(x + A.x, y + A.y);
	}
	Vector2 operator -(const Vector2 &A)
	{
		return Vector2(x - A.x, y - A.y);
	}
	Vector2 operator *(float Mult)
	{
		return Vector2(x * Mult, y * Mult);
	}
	float Magnitude()
	{
		return sqrt((x*x) + (y*y));
	}
	Vector2 Normalize()
	{
		return Vector2(x / Magnitude(), y / Magnitude());
	}
	float DotProduct(const Vector2 &A)
	{
		return (x * A.x) + (y * A.y);
	}
	void print()
	{
		for (int i = 0; i < 1; i++)
		{
			std::cout << x << " , " << y;
		}
		std::cout << std::endl;
	}
	float x, y;
};

class Vector3
{
public:
	Vector3() {};
	Vector3(float xpos, float ypos, float zpos) : x(xpos), y(ypos), z(zpos) {}
	bool operator == (const Vector3 &A)
	{
		return x == A.x && y == A.y && z == A.z;
	}
	Vector3 operator +(const Vector3 &A)
	{
		return Vector3(x + A.x, y + A.y, z + A.z);
	}
	Vector3 operator -(const Vector3 &A)
	{
		return Vector3(x - A.x, y - A.y, z - A.z);
	}
	Vector3 operator *(float Mult)
	{
		return Vector3(x * Mult, y * Mult, z *Mult);
	}
	float Magnitude()
	{
		return sqrt((x*x) + (y*y) + (z*z));
	}
	Vector3 Normalize()
	{
		return Vector3(x / Magnitude(), y / Magnitude(), z / Magnitude());
	}
	float DotProduct(const Vector3 &A)
	{
		return (x * A.x) + (y * A.y) + (z * A.z);
	}
	Vector3 CrossProduct(const const Vector3 &A)
	{
		return Vector3(y*A.z - z*A.y, x*A.z - z*A.x, z*A.y - z*A.x);
	}
	float VA[3];
	float x, y, z;
};

class Vector4
{
public:
	Vector4() {};
	Vector4(float xpos, float ypos, float zpos, float wpos) : x(xpos), y(ypos), z(zpos), w(wpos) {}
	bool operator == (const Vector4 &A)
	{
		return x == A.x && y == A.y && z == A.z && w == A.w;
	}
	Vector4 operator +(const Vector4 &A)
	{
		return Vector4(x + A.x, y + A.y, z + A.z, w + A.w);
	}
	Vector4 operator -(const Vector4 &A)
	{
		return Vector4(x - A.x, y - A.y, z - A.z, w - A.w);
	}
	Vector4 operator *(float Mult)
	{
		return Vector4(x * Mult, y * Mult, z *Mult, w *Mult);
	}
	float Magnitude()
	{
		return sqrt((x*x) + (y*y) + (z*z) + (w*w));
	}
	Vector4 Normalize()
	{
		return Vector4(x / Magnitude(), y / Magnitude(), z / Magnitude(), w / Magnitude());
	}
	float DotProduct(const Vector4 &A)
	{
		return (x * A.x) + (y * A.y) + (z * A.z) + (w * A.w);
	}
	float x, y, z, w;
};

class Matrix2
{
public:
	Matrix2() {};
	Matrix2(float a[2][2])
	{
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				matrix[i][j] = a[i][j];
			}
		}
	}
	Matrix2(float a, float b, float c, float d){
		matrix[0][0] = a;
		matrix[0][1] = b;
		matrix[1][0] = c;
		matrix[1][1] = d;
	}
	void print()
	{
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				std::cout << matrix[i][j] << "  ";
			}
		}
		std::cout << std::endl;
	}
	Matrix2 operator * (const Matrix2 &a)
	{
		return Matrix2(matrix[0][0] * a.matrix[0][0] + matrix[0][1] * a.matrix[1][0], matrix[0][0] * a.matrix[0][1] + matrix[0][1] * a.matrix[1][1], matrix[1][0] * a.matrix[0][0] + matrix[1][1] * a.matrix[1][0], matrix[1][0] * a.matrix[0][1] + matrix[1][1] * a.matrix[1][1]);
	}
	Vector2 operator * (const Vector2 &a)
	{
		return Vector2(a.x*matrix[0][0] + a.y*matrix[0][1] , a.x*matrix[1][0] + a.y*matrix[1][1]);
	}
private:
	float matrix[2][2];
};

class Matrix3
{
public:
	Matrix3() {};
	Matrix3(float a[3][3])
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrix3[i][j] = a[i][j];
			}
		}
	}
	Matrix3(float a, float b, float c, float d, float e, float f, float g, float h, float i)
	{
		matrix3[0][0] = a;
		matrix3[0][1] = b;
		matrix3[0][2] = c;
		matrix3[1][0] = d;
		matrix3[1][1] = e;
		matrix3[1][2] = f;
		matrix3[2][0] = g;
		matrix3[2][1] = h;
		matrix3[2][2] = i;
	}
	void print()
	{
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				std::cout << matrix3[i][j] << "  ";
			}
		}
		std::cout << std::endl;
	}
	Matrix3 operator * (const Matrix3 &a)
	{
		
	}
	Vector3 operator * (const Vector3 &a)
	{
	
	}
private:
	float matrix3[3][3];

};

class Matrix4
{

};