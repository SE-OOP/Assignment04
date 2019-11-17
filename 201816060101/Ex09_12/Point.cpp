#include "Point.h"

Point::Point(double x, double y)
{
	setX(x);
	setY(y);
}

void Point::setX(const double x)
{
	this->x = x;
}

void Point::setY(const double y)
{
	this->y = y;
}

double Point::getX() const
{
	return x;
}

double Point::getY() const
{
	return y;
}
