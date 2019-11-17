#include <iostream>
using namespace std;
#include"Rectangle.h"
Rectangle::Rectangle(double length, double width )
{
   setLength( length );
   setWidth( width );
}

void Rectangle::setLength( double length1 )
{
   if (length1>=0.0&&length1<=20.0)
   {
       length =length1;
   }
   else
   {
       length=1.0;
   }
}

void Rectangle::setWidth(double width1)
{
    if (width1>=0.0&&width1<=20.0)
    {
        width = width1;
    }
    else
    {
        width=1.0;
    }
}
double Rectangle::getPerimeter()
{
    return  (length+width)*2.0;
}
double Rectangle::getArea()
{
    return  width*length ;
}


#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
class Rectangle
{
public:
    Rectangle(double =1.0, double=1.0);
    void setLength(double);
    void setWidth(double);
    double getPerimeter();
    double getArea();
private:
     double length;
     double width;
};
