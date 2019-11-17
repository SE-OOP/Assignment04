#include"Rectangle.h"
#include"Point.h"
#include <iostream>
#include <cmath>
using namespace std;
#include "Rectangle.h"
#include "Point.h"
Rectangle::Rectangle(Point p1,Point p2,Point p3,Point p4)
{
    setRect(p1,p2,p3,p4);
}
bool Rectangle::judgeSquare(Point a,Point b,Point c,Point d)
{
    if(a.getY()==b.getY()&&a.getX()==c.getX()&&b.getX()==d.getX()&&c.getY()==d.getY())
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Rectangle::setRect(Point p1,Point p2,Point p3,Point p4)
{
    if(judgeSquare(p1,p2,p3,p4))
    {
        a=p1;
        b=p2;
        c=p3;
        d=p4;
    }
    else
    {
        throw invalid_argument( "It is not a rectangle" );
    }

}
//借鉴0109号
double Rectangle::getLength()
{
    double l1=a.getY()-d.getY();
    double l2=d.getX()-a.getX();
    return l1>l2?l1:l2;
}
double Rectangle::getWidth()
{
    double l1=a.getY()-d.getY();
    double l2=d.getX()-a.getX();
    return l1<l2?l1:l2;
}
double Rectangle::getPerimeter()
{
    return (getLength()+getWidth())*2;
}
double Rectangle::getArea()
{
    return getLength()*getWidth();
}
