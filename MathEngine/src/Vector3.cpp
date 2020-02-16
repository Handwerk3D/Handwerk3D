#include <cmath>

#include "Vector3.h"

namespace Handwerk3D
{
	namespace Math
	{
		// constructor
		Vector3::Vector3(float x, float y, float z) :
			x(x), y(y), z(z)
		{
		}

		// Vector operations
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

		Vector3 Vector3::operator*(float operand)
		{
			Vector3 result(x * operand, y * operand, z * operand);
			return result;
		}

		Vector3 Vector3::operator/(float operand)
		{
			Vector3 result(x / operand, y / operand, z / operand);
			return result;
		}

		Vector3 Vector3::operator+=(Vector3& other)
		{
			return *this = *this + other;
		}

		Vector3 Vector3::operator-=(Vector3& other)
		{
			return *this = *this - other;
		}

		Vector3 Vector3::operator*=(float operand)
		{
			return *this = (*this) * operand;
		}
		
		Vector3 Vector3::operator/=(float operand)
		{
			return *this = (*this) / operand;
		}

		// other
		float Vector3::mag()
		{
			return std::sqrt(x * x + y * y + z * z);
		}

		void Vector3::normalize()
		{
			float mag = this->mag();
			*this /= mag;
		}
	}
}