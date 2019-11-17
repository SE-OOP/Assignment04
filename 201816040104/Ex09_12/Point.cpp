#include <iostream>
using namespace std;
#include "math.h"
#include "Rectangle.h"
#include <windows.h>
#include <stdio.h>
#include <windef.h>
#include "Point.h"
Point::Point(double X1,double Y1,double X2,double Y2,double X3,double Y3,double X4,double Y4)
{
    setdate(X1, Y1, X2, Y2, X3, Y3, X4, Y4);
}
void Point::setdate(double X1,double Y1,double X2,double Y2,double X3,double Y3,double X4,double Y4)
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
