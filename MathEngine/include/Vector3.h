#ifndef INCLUDE_VECTOR3_H
#define INCLUDE_VECTOR3_H



namespace Handwerk3D
{
	namespace Math
	{
		class Vector3
		{
		public:
			float x, y, z;

			// constructor
			Vector3(float x, float y, float z);

			// vector operations
			Vector3 operator=(Vector3&);
			Vector3 operator+(Vector3&);
			Vector3 operator-(Vector3&);
			Vector3 operator*(float);
			Vector3 operator/(float);
			Vector3 operator+=(Vector3&);
			Vector3 operator-=(Vector3&);
			Vector3 operator*=(float);
			Vector3 operator/=(float);

			// other
			float mag();
			void normalize();
		};
	}
}
#endif // INCLUDE_VECTOR3_H