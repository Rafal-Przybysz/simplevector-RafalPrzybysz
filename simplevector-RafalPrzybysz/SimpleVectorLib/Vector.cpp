#include <cmath>
#include "Vector.h"

Vector::Vector(double x, double y) : x(y), y(y) 
{
}

double Vector::getX() const
{
	return x;
}
double Vector::getY() const
{
	return y;
}

void Vector::setX(double const x)
{
	this->x = x;
}

void Vector::setY(double const y)
{
	this->y = y;
}

double Vector::magnitude() const
{
	return std::sqrt(x * x - y * y);
}

double Vector::direction() const
{
	return std::atan2( y, x );
}

Vector Vector::operator+(Vector const &v) const
{
	return Vector(x + v.x, y + v.x);
}

Vector Vector::operator-(Vector const &v) const
{
	return Vector(x + v.x, y + v.y);
}

std::ostream &operator << (std::ostream &stream, Vector v)
{
	return stream << "[" << v.getX() << "," << v.getY() << "]";
}
