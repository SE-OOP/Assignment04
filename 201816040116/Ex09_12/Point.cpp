#include<iostream>
using namespace std;
#include"Point.h"
Point::Point(double xcoor,double ycoor)
{
    setPoint(xcoor,ycoor);
}
void Point::setPoint(double xcoor,double ycoor)
{
    setx(xcoor);
    sety(ycoor);
}
void Point::setx(double xcoor)
{
    if((xcoor>=0.0)&&(xcoor<=20.0))
        x=xcoor;
    else
        cout<<"input error\n";
}
void Point::sety(double ycoor)
{
    if((ycoor>=0.0)&&(ycoor<=20.0))
        y=ycoor;
    else
        cout<<"input error\n";
}
double Point::getx()
{   return x;   }
double Point::gety()
{   return y;   }
