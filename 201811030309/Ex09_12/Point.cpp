#include <iostream>
#include "Point.h"

using namespace std;

Point::Point(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
    setxy(x1, y1, x2, y2, x3, y3, x4, y4);
}

//judge the data of point and initialize them
void Point::setxy(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
    if(x1<=20.0&&x1>0.0&&y1>0.0&&y1<=20.0)
    {
        X1=x1;
        Y1=y1;
    }
    else
        throw invalid_argument("x or y must be in 0.0-20.0");
    if(x2<=20.0&&x2>0.0&&y2>0.0&&y2<=20.0)
    {
        X2=x2;
        Y2=y2;
    }
    else
        throw invalid_argument("x or y must be in 0.0-20.0");
    if(x3<=20.0&&x3>0.0&&y3>0.0&&y3<=20.0)
    {
        X3=x3;
        Y3=y3;
    }
    else
        throw invalid_argument("x or y must be in 0.0-20.0");
    if(x4<=20.0&&x4>0.0&&y4>0.0&&y4<=20.0)
    {
        X4=x4;
        Y4=y4;
    }
    else
        throw invalid_argument("x or y must be in 0.0-20.0");
    if(X1==X4&&X2==X3&&X2-X1==X3-X4&&Y1==Y2&&Y3==Y4)
        ;
    else
        throw invalid_argument("it is not a rectangle");

}

//return the point of x or y;
double Point::getx1() const
{
    return X1;
}
double Point::getx2() const
{
    return X2;
}
double Point::getx3() const
{
    return X3;
}
double Point::getx4() const
{
    return X4;
}
double Point::gety1() const
{
    return Y1;
}
double Point::gety2() const
{
    return Y2;
}
double Point::gety3() const
{
    return Y3;
}
double Point::gety4() const
{
    return Y4;
}
