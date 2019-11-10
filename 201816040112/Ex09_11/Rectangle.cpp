#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double x,double y)
{
    setlength(x);
    setwidth(y);
}
void Rectangle::setlength(double le)
{
    if(le>0&&le<20)
       length=le;
    else
       length=0;
}
double Rectangle::getlength()
{
    return length;
}
void Rectangle::setwidth(double wi)
{
    if(wi>0&&wi<20)
        width=wi;
    else
        width=0;
}
double Rectangle::getwidth()
{
    return width;
}
double Rectangle::perimeter()
{

    return 2*(getlength()+getwidth());
}
double Rectangle::area()
{

    return getlength()*getwidth();
}
