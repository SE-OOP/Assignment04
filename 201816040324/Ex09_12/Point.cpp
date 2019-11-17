#include <iostream>
#include <math.h>
#include "Point.h"
using namespace std ;
Point::Point(int ix1 , int iy1)
{
    setx(ix1) ;
    sety(iy1) ;
}
void Point::setx(int ix)
{
    x=ix ;
}
bool Point::right ()
{
    if (x>=0&&x<=20&&y>=0&&y<=20)
    {
        return true ;
    }

    else
    {
        return false ;
    }

}
void Point::sety(int iy)
{
    y=iy ;
}
int Point::getx()
{
    return x ;
}
int Point::gety()
{
    return y ;
}
int Point::distance(Point p1,Point p2)
{
   return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}
