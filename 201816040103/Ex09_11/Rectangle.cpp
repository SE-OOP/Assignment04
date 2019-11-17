#include <iostream>
#include "Rectangle.h" 
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

Rectangle::Rectangle(double lengthl,double widthl)
{
	setLength(lengthl);
	setWidth(widthl);
}

void Rectangle::setLength(double lengthl)
{
	if(lengthl > 0.0 && lengthl < 20.0)
		length = lengthl;
	else
		length = 0;
}

double Rectangle::getLength()
{
		return length;
}

void Rectangle::setWidth(double widthl)
{
	if(widthl > 0.0 && widthl < 20.0)
		width = widthl;
	else
		width = 0;
}

double Rectangle::getWidth()
{
		return width;
}

double Rectangle::perimeter()
{
	return (length + width +length + width) ;
		
}

double Rectangle::area()
{
	return (length * width); 
}

