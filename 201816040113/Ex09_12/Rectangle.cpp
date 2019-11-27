#include <iostream>
using namespace std;
#include <cmath>
#include "Point.h"
#include "Rectangle.h"

Rectangle::Rectangle(Point &P1,Point &P2,Point &P3,Point &P4)
:A(P1),B(P2),C(P3),D(P4)
{
    SetRectangle(P1,P2,P3,P4);
}




Rectangle::SetRectangle(Point &P1,Point &P2,Point &P3,Point &P4)//建立矩形
{
    double x1,x2;
    if(P1.getPointX()==P2.getPointX())
    {
        x1=fabs( P1.getPointY()-P2.getPointY() );
    }
    else if(P1.getPointX()==P3.getPointX())
    {
        x1=fabs( P1.getPointY()-P3.getPointY() );
    }
     else if(P1.getPointX()==P4.getPointX())
    {
        x1=fabs( P1.getPointY()-P4.getPointY() );
    }

    if(P1.getPointY()==P2.getPointY())
    {
        x2=fabs( P1.getPointX()-P2.getPointX() );
    }
    else if(P1.getPointY()==P3.getPointY())
    {
        x2=fabs( P1.getPointX()-P3.getPointX() );
    }
     else if(P1.getPointY()==P4.getPointY())
    {
        x2=fabs( P1.getPointX()-P4.getPointX() );
    }
    if(x1>x2)
    {
        Length=x1;
        Width=x2;
    }
    else
    {
        Length=x2;
        Width=x1;
    }

}
double Rectangle::getLength()//返回长度
{
    return Length;
}
double Rectangle::getWidth()//返回宽度
{
    return Width;
}

double Rectangle::perimeter()//计算周长
{
    return 2*(Length+Width);
}
double Rectangle::area()//计算面积
{
    return Length*Width;
}
int Rectangle::square()//判断是否为正方形，返回值为1或0
{
    if(Length==Width)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
