#include "Rectangle.h"
#include "Point.h"
#include <math.h>
Rectangle::Rectangle(Point &x,Point &y,Point &z)
{
    point1=x;
    point2=y;
    point3=z;


}
double Rectangle::Relength()
{


    return fabs(point1.getxPoint()-point2.getxPoint());


}
double Rectangle::Rewidth()
{
    return fabs(point3.getyPoint()-point1.getyPoint());
}
double Rectangle::arear()
{
    return Relength()*Rewidth();
}
double Rectangle::perimeter()
{
    return 2*(Relength()+Rewidth());
}
bool Rectangle::square()
{
    if(Relength()==Rewidth())
        return true;
    else
        return false;
}
