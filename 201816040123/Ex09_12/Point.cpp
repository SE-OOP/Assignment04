#include "Point.h"
#include <iostream>
using namespace std;

Point::Point(double a,double b)
{
    setX(a);
    setY(b);
}
void Point::setX(double a)
{
    if(a>0&&a<20)
        x=a;
    else
    {
        cerr<<"该点越界"<<endl;
        exit(0);
    }
}
void Point::setY(double b)
{
    if(b>0&&b<20)
        y=b;
    else
    {
        cerr<<"该点越界"<<endl;
        exit(0);
    }
}
double Point::getX() const
{
    return x;
}
double Point::getY() const
{
    return y;
}
