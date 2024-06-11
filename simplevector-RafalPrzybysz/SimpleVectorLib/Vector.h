#pragma once
#include <ostream>

class Vector
{
private:
	double x;
	double y;

public:
	Vector(double x, double y);
	double getX() const;
	double getY() const;

	void setX(double const x);
	void setY(double const y);

	double magnitude() const;
	double direction() const;

	Vector operator+(Vector const & v) const;
	Vector operator-(Vector const& v) const;
};

std::ostream& operator << (std::ostream& stream, Vector v);

