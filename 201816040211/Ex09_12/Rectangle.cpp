#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(double X1,double Y1,double X2,double Y2,double X3,double Y3,double X4,double Y4)
{
    setzuobiao(X1,Y1,X2,Y2,X3,Y3,X4,Y4);
}

Rectangle::setzuobiao(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)
{
    setx1(x1);
    sety1(y1);
    setx2(x2);
    sety2(y2);
    setx3(x3);
    sety3(y3);
    setx4(x4);
    sety4(y4);
}
void Rectangle::setx1(double x1)
{
    if(x1>=0.0 && x1<=20.0)
    x1=x1;
    else
    throw invalid_arguement("x1 must be 0~20");
}// end setx1
double Rectangle::getx1(double x1)
{
    return x1;
}// end getx1

void Rectangle::sety1(double y1)
{
    if(y1>=0.0 && y1<=20.0)
    y1=y1;
    else
    throw invalid_arguement("y1 must be 0~20");
}// end sety1
double Rectangle::gety1()
{
    return y1;
}// set gety1

void Rectangle::setx2(double x2)
{
    if(x2>=0.0 && x2<=20.0)
    x2=x2;
    else
    throw invalid_arguement("x2 must be 0~20");
}// end setx2
double Rectangle::getx2()
{
    return x2;
}// end getx2

void Rectangle::sety2(double y2)
{
    if(y2>=0.0 && y2<=20.0)
    y2=y2;
    else
    throw invalid_arguement("y2 must be 0~20");
}// end sety2
double Rectangle::gety2()
{
    return y2;
}// end gety2

void Rectangle::setx3(double x3)
{
    if(x3>=0.0 && x3<=20.0)
    x3=x3;
    else
    throw invalid_arguement("x3 must be 0~20");
}// end setx3
double Rectangle::getx3()
{
    return x3;
}// end getx3

void Rectangle::sety3(double y3)
{
    if(y3>=0.0 && y3<=20.0)
    y3=y3;
    else
    throw invalid_arguement("y3 must be 0~20");
}// end sety3
double Rectangle::gety3()
{
    return y3;
}// end gety3

void Rectangle::setx4(double x4)
{
    if(x4>=0.0 && x4<=20.0)
    x4=x4;
    else
    throw invalid_arguement("x4 must be 0~20");
}// end setx4
double Rectangle::getx4()
{
    return x4;
}// end getx4

void Rectangle::sety4(double y4)
{
    if(y4>=0.0 && y4<=20.0)
    y4=y4;
    else
    throw invalid_arguement("y4 must be 0~20");
}// end sety4
double Rectangle::gety4()
{
    return y4;
}// end gety4

double Rectangle::length1(double x1, double x2)
{
    length=x2-x1;
    return length;
}//计算长度
double Rectanle::width1(double x1, double x2)
{
    width=y2-y1;
    return width;
}//计算宽度


