#include<iostream>
#include "Rectangle1.h"
using namespace std;

Rectangle1::Rectangle1(double x ,double y)
{
	setLength(x);
	setWidth(y);
}

void Rectangle1::setLength(double x)
{
	if (x>0.0&&x<20.0)
	length=x;
}

double Rectangle1::getLength()
{
	return length;
}

void Rectangle1::setWidth(double y)
{
	if (y>0.0&&y<20.0)
	width=y;
}

double Rectangle1::getWidth()
{
	return width;
}

double Rectangle1::perimeter()
{
	double perimeter=(length+width)*2;
	return perimeter;
}

double Rectangle1::area()
{
	double area=length*width;
	return area;
}
