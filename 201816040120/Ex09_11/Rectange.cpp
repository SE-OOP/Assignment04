#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle :: Rectangle (double l , double w )
{
    setLength(l);
    setWidth(w);
};
double Rectangle::setPerimeter(double l, double w)
{
    return (l+w)*2;
}
double Rectangle::setArea(double l, double w)
{
    return l*w;
}
void Rectangle::setLength(double l)
{
    if(l>=0.0&&l<=20.0)
       length  = l;
    else
        length = 1.0;
}
void Rectangle::setWidth(double w)
{
    if(w>=0.0&&w<=20.0)
        width = w;
    else
        width = 1.0;
}
double Rectangle::getLength()
{
    return length;
}
double Rectangle::getWidth()
{
    return width;
}
