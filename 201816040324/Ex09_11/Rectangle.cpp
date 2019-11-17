#include <iostream>
#include "Rectangle.h"
using namespace std ;
Rectangle::Rectangle(double w, double l)
{
    setWidth(w) ;
    setLength(l) ;
}
void Rectangle::setWidth(double x)
{
    if (x>0.0&&x<20.0)
    {
        width=x ;
    }
    else
    {
        throw invalid_argument("wrong") ;
    }
}
void Rectangle::setLength(double l)
{
    if (l>0.0&&l<20.0)
    {
        length=l ;
    }
    else
    {
        throw invalid_argument("wrong") ;
    }
}
double Rectangle::getLength()
{
    return length ;
}
double Rectangle::getWidth()
{
    return width ;
}
double Rectangle::area()
{
    return width*length ;
}
double Rectangle::perimeter()
{
    return 2*(width+length) ;
}
void Rectangle::display()
{
    cout<<"length is:"<<getLength()<<"\n"<<"width is:"<<getWidth()<<"\n"<<"area is:"<<area()<<"\n"<<"perimeter is:"<<perimeter()<<"\n" ;
}
