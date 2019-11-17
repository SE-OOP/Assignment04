#include <iostream>
#include  "Point.h"

using namespace std;

Point::Point(double px,double py)
{
    setPointX(px);
    setPointY(py);
}

void Point::setPointX(double px) //function to set point's x
{
    if(px > 0 && px < 20)
        x = px;
}

void Point::setPointY(double py) //function to set point's y
{
    if(py > 0 && py <  20)
        y = py;
}

double Point::getPointX() //function to get point's x
{
    return x;
}

double Point::getPointY() //function to get point's y
{
    return y;
}
