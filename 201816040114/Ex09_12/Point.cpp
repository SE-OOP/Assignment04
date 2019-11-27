#include "Point.h"
#include<iostream>
using namespace std;

Point::Point(double a,double b)
{
    setX(a);
    setY(b);
}

void Point::setX(double a)
{
    if(a>0&&a<20)
    {
        x=a;
    }
    else
    {
        throw invalid_argument("x must be 0-20");
    }
}

void Point::setY(double a)
{
    if(a>0&&a<20)
    {
        y=a;
    }
    else
    {
        throw invalid_argument("y must be 0-20");
    }
}

double Point::getX()
{
    return x;
}

double Point::getY()
{
    return y;
}
