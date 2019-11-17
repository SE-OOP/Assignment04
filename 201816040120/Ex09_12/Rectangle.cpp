#include <iostream>
#include "Rectangle.h"
#include "Point.h"
#include "math.h"
using namespace std;
Rectangle :: Rectangle(Point &p1,Point &p2,Point &p3,Point &p4)
{
    effectiveLength(p1,p2,p3,p4);
    effectiveWidth(p1,p2,p3,p4);
};

int Rectangle:: judge(Point &p1,Point &p2,Point &p3,Point &p4)
{
    double x1,y1,x2,y2,x3,y3,x4,y4,r1,r2,r3;
    int a;
    x1= p1.getx();
    x2= p2.getx();
    x3= p3.getx();
    x4= p4.getx();
    y1= p1.gety();
    y2= p2.gety();
    y3= p3.gety();
    y4= p4.gety();
    r1= sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    r2= sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    r3= sqrt((x1-x4)*(x1-x4)+(y1-y4)*(y1-y4));

    if((x1==x2&&y1==y2)||(x1==x3&&y1==y3)||(x1==x4&&y1==y4)||(x2==x3&&y2==y3)||(x2==x4&&y2==y4)||(x3==x4&&y3==y4))
        a=0;
    if(r1*r1+r2*r2==r3*r3||r1*r1+r3*r3==r2*r2||r2*r2+r3*r3==r1*r1)
        a=1;
    return a;
}
int Rectangle::judgeSquare(Point &p1,Point &p2,Point &p3,Point &p4)
{
    double x1,y1,x2,y2,x3,y3,x4,y4,r1,r2,r3;
    int a;
    x1= p1.getx();
    x2= p2.getx();
    x3= p3.getx();
    x4= p4.getx();
    y1= p1.gety();
    y2= p2.gety();
    y3= p3.gety();
    y4= p4.gety();
    r1= sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    r2= sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    r3= sqrt((x1-x4)*(x1-x4)+(y1-y4)*(y1-y4));
    if(r1==r2||r1==r3||r2==r3)
    {
        a=1;
    }
    return a;
}
double Rectangle::effectiveLength(Point &p1,Point &p2,Point &p3,Point &p4)
{
    double temp;
    double x1,y1,x2,y2,x3,y3,x4,y4,r1,r2,r3;
    x1= p1.getx();
    x2= p2.getx();
    x3= p3.getx();
    x4= p4.getx();
    y1= p1.gety();
    y2= p2.gety();
    y3= p3.gety();
    y4= p4.gety();
    r1= sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    r2= sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    r3= sqrt((x1-x4)*(x1-x4)+(y1-y4)*(y1-y4));
    if(r1>r2) temp=r1,r1=r2,r2=temp;
    if(r2>r3) temp=r2,r2=r3,r3=temp;
    if(r1>r2) temp=r1,r1=r2,r2=temp;
    length = r2;
    return length;
}
double Rectangle::effectiveWidth(Point &p1,Point &p2,Point &p3,Point &p4)
{
    double temp;
    double x1,y1,x2,y2,x3,y3,x4,y4,r1,r2,r3;
    x1= p1.getx();
    x2= p2.getx();
    x3= p3.getx();
    x4= p4.getx();
    y1= p1.gety();
    y2= p2.gety();
    y3= p3.gety();
    y4= p4.gety();
    r1= sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    r2= sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    r3= sqrt((x1-x4)*(x1-x4)+(y1-y4)*(y1-y4));
    if(r1>r2) temp=r1,r1=r2,r2=temp;
    if(r2>r3) temp=r2,r2=r3,r3=temp;
    if(r1>r2) temp=r1,r1=r2,r2=temp;
    width = r1;
    return width;
}
double Rectangle::effectivePerimeter(double length , double width)
{

    return (length+width)*2;
}
double Rectangle::effectiveArea(double length , double width)
{

    return length*width;
}
