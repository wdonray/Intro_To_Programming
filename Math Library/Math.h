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
		std::cout << x << " , " << y;
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
	void print()
	{
		std::cout << x << " , " << y << " , " << z;
		std::cout << std::endl;
	}
	float x, y, z;
};

class Vector4
{
public:
	Vector4() {};
	Vector4(float xpos, float ypos, float zpos, float wpos) : x(xpos), y(ypos), z(zpos), w(wpos)
	{
		VA[0] = xpos;
		VA[1] = ypos;
		VA[2] = zpos;
		VA[3] = wpos;
	}
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
	void print()
	{
		std::cout << x << " , " << y << " , " << z << " , " << w;
		std::cout << std::endl;
	}
	float VA[4];
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
	Matrix2(float a, float b, float c, float d) {
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
		return Matrix2(matrix[0][0] * a.matrix[0][0] + matrix[0][1] * a.matrix[1][0],
			matrix[0][0] * a.matrix[0][1] + matrix[0][1] * a.matrix[1][1],
			matrix[1][0] * a.matrix[0][0] + matrix[1][1] * a.matrix[1][0],
			matrix[1][0] * a.matrix[0][1] + matrix[1][1] * a.matrix[1][1]);
	}
	Vector2 operator * (const Vector2 &a)
	{
		return Vector2(a.x*matrix[0][0] + a.y*matrix[0][1], a.x*matrix[1][0] + a.y*matrix[1][1]);
	}
private:
	float matrix[2][2];
};

class Matrix3
{
public:
	Matrix3() {};
	Matrix3(float a[9])
	{
		for (int i = 0; i < 3; i++)
		{
			matrix3[i] = a[i];
		}
	}
	Matrix3(float a, float b, float c, float d, float e, float f, float g, float h, float i)
	{
		matrix3[0] = a;
		matrix3[1] = b;
		matrix3[2] = c;
		matrix3[3] = d;
		matrix3[4] = e;
		matrix3[5] = f;
		matrix3[6] = g;
		matrix3[7] = h;
		matrix3[8] = i;
	}
	void print()
	{
		for (int i = 0; i < 3; i++)
		{
			std::cout << matrix3[i] << "  ";
		}
		std::cout << std::endl;
	}
	Matrix3 operator * (const Matrix3 &a)
	{
		float p1 = (matrix3[0] * a.matrix3[0]) + (matrix3[1] * a.matrix3[3]) + (matrix3[2] * a.matrix3[6]);
		float p2 = (matrix3[0] * a.matrix3[1]) + (matrix3[1] * a.matrix3[4]) + (matrix3[2] * a.matrix3[7]);
		float p3 = (matrix3[0] * a.matrix3[2]) + (matrix3[1] * a.matrix3[5]) + (matrix3[2] * a.matrix3[8]);

		float p4 = (matrix3[3] * a.matrix3[0]) + (matrix3[4] * a.matrix3[3]) + (matrix3[5] * a.matrix3[6]);
		float p5 = (matrix3[3] * a.matrix3[1]) + (matrix3[4] * a.matrix3[4]) + (matrix3[5] * a.matrix3[7]);
		float p6 = (matrix3[3] * a.matrix3[2]) + (matrix3[4] * a.matrix3[5]) + (matrix3[5] * a.matrix3[8]);

		float p7 = (matrix3[6] * a.matrix3[0]) + (matrix3[0] * a.matrix3[3]) + (matrix3[8] * a.matrix3[6]);
		float p8 = (matrix3[6] * a.matrix3[1]) + (matrix3[1] * a.matrix3[4]) + (matrix3[8] * a.matrix3[7]);
		float p9 = (matrix3[6] * a.matrix3[2]) + (matrix3[2] * a.matrix3[5]) + (matrix3[8] * a.matrix3[8]);
		return Matrix3(p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}
	Vector3 operator * (const Vector3 &a)
	{
		float x = (matrix3[0] * a.x) + (matrix3[1] * a.y) + (matrix3[2] * a.z);
		float y = (matrix3[3] * a.x) + (matrix3[4] * a.y) + (matrix3[5] * a.z);
		float z = (matrix3[6] * a.x) + (matrix3[7] * a.y) + (matrix3[8] * a.z);
		return Vector3(x, y, z);
	}
private:
	float matrix3[9];
};

class Matrix4
{
public:
	Matrix4() {};
	Matrix4(float a[4][4])
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				matrix[i][j] = a[i][j];
			}
		}
	}
	Matrix4(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j, float k, float l, float m, float n, float o, float p) {
		matrix[0][0] = a;
		matrix[0][1] = b;
		matrix[0][2] = c;
		matrix[0][3] = d;
		matrix[1][0] = e;
		matrix[1][1] = f;
		matrix[1][2] = g;
		matrix[1][3] = h;
		matrix[2][0] = i;
		matrix[2][1] = j;
		matrix[2][2] = k;
		matrix[2][3] = l;
		matrix[3][0] = m;
		matrix[3][1] = n;
		matrix[3][2] = o;
		matrix[3][3] = p;
	}
	void print()
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				std::cout << matrix[i][j] << "  ";
			}
		}
		std::cout << std::endl;
	}
	Matrix4 operator * (const Matrix4 &a)
	{
		Matrix4 tmp = Matrix4(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		for (int i = 0; i < 64; i++)
		{
			tmp.matrix[(i / 16)][(i % 16) / 4] += matrix[(i / 16)][i % 4] * a.matrix[i % 4][(i % 16) / 4];
		}
		return tmp;
	}
	Vector4 operator * (const Vector4 &a)
	{
		Vector4 tmp = Vector4(0, 0, 0, 0);
		for (int i = 0; i < 16; i++)
		{
			tmp.VA[i / 4] += matrix[i / 4][i % 4] * a.VA[i % 4];
		}
		tmp.x = tmp.VA[0];
		tmp.y = tmp.VA[1];
		tmp.z = tmp.VA[2];
		tmp.w = tmp.VA[3];
		return tmp;
	}
private:
	float matrix[4][4];
};