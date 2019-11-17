#include <iostream>
#include "Rectangle.h"
#include<stdexcept>
using namespace std;
Rectangle::Rectangle(double length,double width)
{
    setLength(length);
    setWidth(width);
}
void Rectangle::setLength(double length)
{
    if(length<=0.0||length>=20.0)
    {
        throw invalid_argument("Length must be set a right value");

    }
    else
        this->length=length;
}
void Rectangle::setWidth(double width)
{
    if(width<=0.0||width>=20.0)
    {
        throw invalid_argument("Width must be set a right value");

    }
    else
        this->width=width;
}
double Rectangle::getLength()
{
    return length;
}
double Rectangle::getWidth()
{
    return width;
}
double Rectangle::getArea()
{
    return width*length;
}
double Rectangle::getPerimeter()
{
    return (width+length)*2;
}
