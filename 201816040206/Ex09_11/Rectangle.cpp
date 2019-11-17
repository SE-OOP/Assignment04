#include <iostream>
#include <string>
#include "Rectangle.h"
using namespace std;
    Rectangle::Rectangle(double a,double b)
    :Length(a),Width(b)
    {

    }
    void Rectangle::setLength(double a)
    {
      Length=a;
    }
    void Rectangle::setWidth(double b)
    {
      Width=b;
    }
    double Rectangle::getLength()
    {
    return Length;
    }

    double Rectangle::getWidth()
    {
    return Width;
    }
    int Rectangle::flag(double a)
{
    if(a>0.0 && a < 20.0)
        return 1;
        else
            return 2;
}
    double Rectangle::perimeter(double a, double b)
    {
    return 2*(a+b);
    }
   double Rectangle::area(double a, double b)
   {
    return a*b;
   }


