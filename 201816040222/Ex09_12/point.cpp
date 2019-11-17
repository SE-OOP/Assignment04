#include <iostream>
#include <cmath>
using namespace std;
#include"Rectangle.h"
Rectangle::Rectangle(double length, double width )
{
   setLength(x1,y1,x2,y2,x3,y3,x4,y4 );
   setWidth(x1,y1,x2,y2,x3,y3,x4,y4);
}

void Rectangle::setLength(double x1,double y1,double x2,double  y2,double x3,double y3,double x4,double y4)
{
    double a1, a2, b1, b2, c1, c2, t;
    a1=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    a2=(x3-x4)*(x3-x4)+(y3-y4)*(y3-y4);
    b1=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
    b2=(x4-x2)*(x4-x2)+(y4-y2)*(y4-y2);
    c1=(x1-x4)*(x1-x4)+(y1-y4)*(y1-y4);
    c2=(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
    if (a1==a2&&b1==b2&&c1==c2)
    {
        if (a1<b1)
        {
            t=a1; a1=b1; b1=t;
        }
        if (a1<c1)
        {
            t=a1; a1=c1; c1=t;
        }
        if (b1<c1)
        {
            t=b1; b1=c1; c1=t;
        }
        length=sqrt(b1);
    }
    else
        length=1.0;
}
void Rectangle::setWidth(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)
{
    double a1, a2, b1, b2, c1, c2, t;
    a1=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    a2=(x3-x4)*(x3-x4)+(y3-y4)*(y3-y4);
    b1=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
    b2=(x4-x2)*(x4-x2)+(y4-y2)*(y4-y2);
    c1=(x1-x4)*(x1-x4)+(y1-y4)*(y1-y4);
    c2=(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
    if (a1==a2&&b1==b2&&c1==c2)
    {
        if (a1<b1)
        {
            t=a1; a1=b1; b1=t;
        }
        if (a1<c1)
        {
            t=a1; a1=c1; c1=t;
        }
        if (b1<c1)
        {
            t=b1; b1=c1; c1=t;
        }
        width=sqrt(c1);
    }
    else
        width=1.0;
}
double Rectangle::getLength()
{
    return length;
}
double Rectangle::getWidth()
{
    return width;
}
double Rectangle::getPerimeter()
{
    return  (length+width)*2.0;
}
double Rectangle::getArea()
{
    return  width*length ;
}
