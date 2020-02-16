#include "Vector3.h"

namespace Handwerk3D
{
	namespace Math
	{
		Vector3::Vector3(float x, float y, float z) :
			x(x), y(y), z(z)
		{
		}

		Vector3 Vector3::operator=(Vector3& other)
		{
			x = other.x;
			y = other.y;
			z = other.z;

			return other;
		}

		Vector3 Vector3::operator+(Vector3& other)
		{
			Vector3 result(x + other.x, y + other.y, z + other.z);
			return result;
		}

		Vector3 Vector3::operator-(Vector3& other)
		{
			Vector3 result(x - other.x, y - other.y, z - other.z);
			return result;
		}

		Vector3 Vector3::operator*(Vector3& other)
		{
			Vector3 result(x * other.x, y * other.y, z * other.z);
			return result;
		}

		Vector3 Vector3::operator/(Vector3& other)
		{
			Vector3 result(x / other.x, y / other.y, z / other.z);
			return result;
		}
	}
}