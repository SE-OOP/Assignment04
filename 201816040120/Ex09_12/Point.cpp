#include <iostream>
#include "Point.h"
using namespace std;
Point :: Point(double x, double y)

{
    setPoint(x,y);

}
Point Point ::setPoint(double x, double y)
{
    Point p(0.0,0.0);
    this->x = x;
    this->y = y;
    return p;
}
double Point::getx()
{
    return x;
}
double Point::gety()
{
    return y;
}
