#include <iostream>
using namespace std;

#include "Point.h"

Point::Point(double x, double y )
{

    setPoint(x, y);
}

void Point::setPoint(double a, double b)
{
     x=a;
     y=b;
}
