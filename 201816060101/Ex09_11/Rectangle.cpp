#include "Rectangle.h"

Rectangle::Rectangle()
{
	setLength(1);
	setWidth(1);
}

void Rectangle::setLength(const double length)
{
	if (length <= 0 || length >= 20) return;	//Check the valid of original data
	this->length = length;
}

void Rectangle::setWidth(const double width)
{
	if (width <= 0 || width >= 20) return;	//Check the valid of original data
	this->width = width;
}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getPerimeter() const
{
	return (getLength() + getWidth()) * 2;
}

double Rectangle::getArea() const
{
	return getLength() * getWidth();
}

void Rectangle::print() const
{
	cout << "The length of a is: " << getLength() << "\n";
	cout << "The width of a is: " << getWidth() << "\n";
	cout << "The perimeter of a is: " << getPerimeter() << "\n";
	cout << "The area of a is: " << getArea() << "\n";
}
