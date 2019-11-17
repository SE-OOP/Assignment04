#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Rectangle.h"

using namespace std;

Rectangle ::Rectangle(double l,double w)
{
    setAll(l,w);
}//constructor
void Rectangle::setAll(double l,double w)
{
    setLength(l);
    setWidth(w);
}//function to set length and width
void Rectangle::setLength(double l)
{
    if(l>0.0&&l<20.0)
        Length=l;
    else
        throw invalid_argument("length must be 0.0 - 20.0");
}//function to set length
double Rectangle::getLength()
{
    return Length;
}//function to get length
void Rectangle::setWidth(double w)
{
    if(w>0.0&&w<20.0)
        Width=w;
    else
        throw invalid_argument("width must be 0.0 - 20.0");
}//function to set width
double Rectangle::getWidth()
{
    return Width;
}//function to get width
double Rectangle::perimeter()
{
    double temp;
    temp=getLength()*2+getWidth()*2;
    return temp;
}//To calculate and return perimeter
double Rectangle::area()
{
    double temp;
    temp=getLength()*getWidth();
    return temp;
}//To calculate and return area


