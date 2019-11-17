#include <iostream>
using namespace std;

#include "Point.h" // Point class definition
Point::Point(double length1,double width1)
{
    setx(length1);
    sety(width1);
    //setPoint( x, y );
}
void Point::setx(double length1)
{
    if(length1>=0&&length1<=20)
    x=length1;

}
double  Point::getx()
{
  return x;
}
void Point::sety(double width1)
{
     if(width1>=0&&width1<=20)
    y=width1;

}
double  Point::gety()
{


  return y;
}
