#include <iostream>
#include <math.h>
using namespace std;

#include "Point.h"
Point::Point(double xx, double yy )
{
    setX(xx);
    setY(yy);
}
Point::Point()
{
}
void Point::setX(double a)
{
    if(a<20.0 && a>0.0 )
    {

       x=a;


    }
}

double Point::getX()
{
    return x;
}

void Point::setY(double b)
{
    if(b<20.0 && b>0.0)
    {
       y=b;
    }

}

double Point::getY()
{
    return y;
}
