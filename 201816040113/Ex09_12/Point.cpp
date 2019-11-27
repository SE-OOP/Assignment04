#include "Point.h"
using namespace std;

Point::Point(double x,double y)//setpoint
{
    setPointX(x);
    setPointY(y);
}

void Point::setPointX(double x)//设置单点的横坐标
{
    if(x<0.0||x>20.0)
    {
        X=-1;
    }
    else
    {
        X=x;
    }
}
double Point::getPointX()
{
    return X;
}
void Point::setPointY(double y)//设置单点的纵坐标
{
    if(y<0.0||y>20.0)
    {
        Y=-1;
    }
    else
    {
        Y=y;
    }
}
double Point::getPointY()
{
    return Y;
}
