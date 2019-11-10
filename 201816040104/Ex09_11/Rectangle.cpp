#include "Rectangle.h"
#include <stdexcept>
#include <iomanip>
#include <iostream>
using namespace std;
/*Call two set function in constructor*/
Rectangle::Rectangle(double len,double wid)
{
    setPerimeter(len,wid);
    setArea(len,wid);
}
void Rectangle::setLength(double len)
{
    if(len>0&&len<20)
    length=len;
    else
     throw invalid_argument("length must be 0-20");
}
void Rectangle::setWidth(double wid)
{
    if(wid>0&&wid<20)
    width=wid;
    else
     throw invalid_argument("width must be 0-20");
}


void Rectangle::setPerimeter(double length,double width)
{

        perimeter = ( length+ width ) * 2;

}

void Rectangle::setArea(double length,double width)
{

        area = length * width;
}
double Rectangle::getLength()
{
    return length;
}
double Rectangle::getWidth()
{
    return width;
}
double Rectangle::getPerimeter()
{
    return perimeter;
}

double Rectangle::getArea()
{
    return area;
}
