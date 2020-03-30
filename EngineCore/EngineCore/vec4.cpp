#include "vec4.h"


namespace engine {
	namespace maths {

		vec4::vec4()
		{
			x = 0.0f;
			y = 0.0f;
			z = 0.0f;
			w = 0.0f;
		}
		vec4::vec4(const float& x, const float& y)
		{
			this->x = 0.0f;
			this->y = 0.0f;
			this->z = 0.0f;
			this->w = 0.0f;
		}

		vec4& vec4::add(const vec4& other)
		{
			x += other.x;
			y += other.y;
			z += other.z;
			w += other.w;
			return *this;
		}

		vec4& vec4::subtract(const vec4& other)
		{
			x -= other.x;
			y -= other.y;
			z -= other.z;
			w -= other.w;
			return *this;
		}

		vec4& vec4::multiply(const vec4& other)
		{
			x *= other.x;
			y *= other.y;
			z *= other.z;
			w *= other.w;
			return *this;
		}

		vec4& vec4::divide(const vec4& other)
		{
			x /= other.x;
			y /= other.y;
			z /= other.z;
			w /= other.w;
			return *this;
		}

		//overloading operators like +
		//may have trouble with the vec4& having &
		vec4& operator+(vec4 left, const vec4& right)
		{
			return left.add(right);
		}

		vec4& operator-(vec4 left, const vec4& right)
		{
			return left.subtract(right);
		}
			   
		vec4& operator*(vec4 left, const vec4& right)
		{
			return left.multiply(right);
		}

		vec4& operator/(vec4 left, const vec4& right)
		{
			return left.divide(right);
		}

		vec4& vec4::operator+=(const vec4& other)
		{
			return add(other);
		}

		vec4& vec4::operator-=(const vec4& other)
		{
			return subtract(other);
		}

		vec4& vec4::operator*=(const vec4& other)
		{
			return multiply(other);
		}

		vec4& vec4::operator/=(const vec4& other)
		{
			return divide(other);
		}

		bool vec4::operator==(const vec4& other)
		{
			return x == other.x && y == other.y && x == other.x && w == other.w;
		}

		bool vec4::operator!=(const vec4& other)
		{
			return !(*this == other);
		}

		//allows the vector to be printed like a normal string just overloading the << operator
		std::ostream& operator<<(std::ostream& stream, const vec4& vector)
		{
			stream << "vec4: ( " << vector.x << ", " << vector.y << ", " << vector.z << ", " << vector.w << ")";
			return stream;
		}

	}
}
