#include "Point.h"
#include <stdexcept>
#include<iostream>
using namespace std;

Point::Point(double x,double y)
{
    setX(x);
    setY(y);
}
Point::Point()
{

}
void Point::setX(double x)
{
    if(x<=0.0||x>=20.0)
    {
        throw invalid_argument("X must be set a right value");

    }
    else
        this->X=x;
}
void Point::setY(double y)
{
    if(y<=0.0||y>=20.0)
    {
        throw invalid_argument("Y must be set a right value");

    }
    else
        this->Y=y;
}
double Point::getX()
{
    return X;
}
double Point::getY()
{
    return Y;
}
