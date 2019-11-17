#include <iostream>
using namespace std;
#include "math.h"
#include "Rectangle.h"
#include <windows.h>
#include <stdio.h>
#include <windef.h>
#include "Point.h"
Rectangle::Rectangle(double X1,double Y1,double X2,double Y2,double X3,double Y3,double X4,double Y4)
{
    setdate(X1, Y1, X2, Y2, X3, Y3, X4, Y4);
}
void Rectangle::setdate(double X1,double Y1,double X2,double Y2,double X3,double Y3,double X4,double Y4)
{
   while(X1>=0&&X1<=20.0)
    {
        x1=X1;
    }
    while(X1<0&&X1>20.0)
    {
        cout<<"out of range"<<endl;
    }
    while(Y1>=0&&Y1<=20.0)
    {
        y1=Y1;
    }
    while(Y1<0&&Y1>20.0)
    {
        cout<<"out of range"<<endl;

    }
    while(X2>=0&&X2<=20.0)
    {
        x2=X2;
    }
    while(X2<0&&X2>20.0)
    {
        cout<<"out of range"<<endl;

    }
    while(Y2>=0&&Y2<=20.0)
    {
        y2=Y2;
    }
    while(Y2<0&&Y2>20.0)
    {
        cout<<"out of range"<<endl;

    }
    while(X3>=0&&X3<=20.0)
    {
        x3=X3;
    }
    while(X3<0&&X3>20.0)
    {
        cout<<"out of range"<<endl;

    }
    while(Y3>=0&&Y3<=20.0)
    {
        y3=Y3;
    }
    while(Y3<0&&Y3>20.0)
    {
        cout<<"out of range"<<endl;

    }
    while(X4>=0&&X4<=20.0)
    {
        x4=X4;
    }
    while(X4<0&&X4>20.0)
    {
        cout<<"out of range"<<endl;

    }
    while(Y4>=0&&Y4<=20.0)
    {
        y4=Y4;
    }
    while(Y4<0&&Y4>20.0)
    {
        cout<<"out of range"<<endl;

    }
}
int Rectangle::check1()
{
    double p,q,r,t;
    int x=0,z=0,y=0,c=0;
   for(i=1,i++,i<=4)
    {
        while(xi<=x1&&xi<=x2&&xi<=x3&&xi<=x4)
        {
            p=xi;
        }
    }
    for(i=1,i++,i<=4)
    {
        while(yi>=y1&&yi>=y2&&yi>=y3&&yi>=y4)
        {
            q=yi;
        }
    }
    for(i=1,i++,i<=4)
    {
        while(xi>=x1&&xi>=x2&&xi>=x3&&xi>=y4)
        {
            r=xi;
        }
    }
    for(i=1,i++,i<=4)
    {
        while(yi<=y1&&yi<=y2&&yi<=y3&&yi<=y4)
        {
            t=yi;
        }
    }
    if(x1==p)
        x++;
    if(x2==p)
        x++;
    if(x3==p)
        x++;
    if(x4==p)
        x++;
    if(x1==r)
        z++;
    if(x2==r)
        z++;
    if(x3==r)
        z++;
    if(x4==r)
        z++;
    if(y1==q)
        y++;
    if(y2==q)
        y++;
    if(y3==q)
        y++;
    if(y4==q)
        y++;
    if(y1==t)
        c++;
    if(y2==t)
        c++;
    if(y3==t)
        c++;
    if(y4==t)
        c++;
    if(x==2&&y==2&&z==2&&c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void  Rectangle::setlength()
{
     length=sqrt((y1-y2)*(y1-y2)+(x1-x2)*(x1-x2));
}
double  Rectangle::getlength()
{
    double p,q,r,t,x,y;
   for(i=1,i++,i<=4)
    {
        while(xi<=x1&&xi<=x2&&xi<=x3&&xi<=x4)
        {
            p=xi;
        }
    }
    for(i=1,i++,i<=4)
    {
        while(yi<=y1&&yi<=y2&&yi<=y3&&yi<=y4)
        {
            t=yi;
        }
    }
   for(i=1,i++,i<=4)
    {
        while(xi>=x1&&xi>=x2&&xi>=x3&&xi>=y4)
        {
            r=xi;
        }
    }
    for(i=1,i++,i<=4)
    {
        while(yi>=y1&&yi>=y2&&yi>=y3&&yi>=y4)
        {
            q=yi;
        }
    }
    }
    x=r-p;
    y=q-t;
    length = max(x,y);
    return max(x,y);
}
void  Rectangle::setwidth()
{
    width= sqrt((y3-y2)*(y3-y2)+(x3-x2)*(x3-x2));
}
double  Rectangle::getwidth()
{
    double p,q,r,t,x,y;
    for(i=1,i++,i<=4)
    {
        while(xi<=x1&&xi<=x2&&xi<=x3&&xi<=x4)
        {
            p=xi;
        }
    }
    for(i=1,i++,i<=4)
    {
        while(yi<=y1&&yi<=y2&&yi<=y3&&yi<=y4)
        {
            t=yi;
        }
    }
    for(i=1,i++,i<=4)
    {
        while(xi>=x1&&xi>=x2&&xi>=x3&&xi>=y4)
        {
            r=xi;
        }
    }
    for(i=1,i++,i<=4)
    {
        while(yi>=y1&&yi>=y2&&yi>=y3&&yi>=y4)
        {
            q=yi;
        }
    }
    }
    x=r-p;
    y=q-t;
    width=min(x,y);
    return min(x,y);
}
double Rectangle::perimeter()
{
    double p,q,r,t,x,y;
    for(i=1,i++,i<=4)
    {
        while(xi<=x1&&xi<=x2&&xi<=x3&&xi<=x4)
        {
            p=xi;
        }
    }
    for(i=1,i++,i<=4)
    {
        while(yi<=y1&&yi<=y2&&yi<=y3&&yi<=y4)
        {
            t=yi;
        }
    }
    for(i=1,i++,i<=4)
    {
        while(xi>=x1&&xi>=x2&&xi>=x3&&xi>=y4)
        {
            r=xi;
        }
    }
    for(i=1,i++,i<=4)
    {
        while(yi>=y1&&yi>=y2&&yi>=y3&&yi>=y4)
        {
            q=yi;
        }
    }
    }
    x=r-p;
    y=q-t;
    return 2*(x+y);
}
double Rectangle::area()
{
    double p,q,r,t,x,y;
    for(i=1,i++,i<=4)
    {
        while(xi<=x1&&xi<=x2&&xi<=x3&&xi<=x4)
        {
            p=xi;
        }
    }
    for(i=1,i++,i<=4)
    {
        while(yi<=y1&&yi<=y2&&yi<=y3&&yi<=y4)
        {
            t=yi;
        }
    }
    for(i=1,i++,i<=4)
    {
        while(xi>=x1&&xi>=x2&&xi>=x3&&xi>=y4)
        {
            r=xi;
        }
    }
    for(i=1,i++,i<=4)
    {
        while(yi>=y1&&yi>=y2&&yi>=y3&&yi>=y4)
        {
            q=yi;
        }
    }
    }
    x=r-p;
    y=q-t;
    return x*y;
}
void Rectangle::display()
{
    cout<<x1<<y1<<"\n"<<x2<<y2<<"\n"<<x3<<y3<<"\n"<<x4<<y4<<endl;
}
void Rectangle::check2()
{
    if(length==width)
    {
        cout<<"This is a square"<<endl;
    }
    else
    {
        cout<<"This is not a square"<<endl;
    }
}
