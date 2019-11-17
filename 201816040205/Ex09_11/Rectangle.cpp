#include <iostream>
#include "Rectangle.h"

using namespace std;


Rectangle::Rectangle(double len,double wid)
{
    setLength(len);
    setWidth(wid);
}

void Rectangle::setLength(double len)
{
    if(len>=0&&len<=20)
    length=len;
}

void Rectangle::setWidth(double wid)
{
    if(wid>=0&&wid<=20)
    width=wid;
}

double Rectangle::getLength()
{
    return length;
}

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::perimeter()
{
    return 2*(getWidth()+getLength());
}

double Rectangle::area()
{
    return getWidth()*getLength();
}
