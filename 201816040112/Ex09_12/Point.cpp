#include "Point.h"

Point::Point(double tx,double ty)
{
    setxPoint(tx);
    setyPoint(ty);
}
void Point::setxPoint(const double tx)
{
    if(tx>=0&&tx<=20)
        x=tx;
    else
        x=0;
}
void Point::setyPoint(const double ty)
{
    if(ty>=0&&ty<=20)
        y=ty;
    else
        y=0;
}
double Point::getxPoint()
{
    return x;
}
double Point::getyPoint()
{
    return y;
}
