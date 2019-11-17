#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(double length1,double width1)
   : length(length1),
     width(width1)
{

}

void Rectangle::setlength(double length2)
{
    if(length2>0.0 && length2<=20.0)
    length=length2;
    else
    throw invalid_argument("length must be 0.0-20.0");
}//得到长度
double Rectangle::getlength()
{
    return length;
}//返回长度

void Rectangle::setwidth(double width2)
{
    if(width2>0.0 && width2<=20.0)
    width=width2;
    else
    throw invalid_argument("width must be 0.0-20.0");
}//得到宽度

double Rectangle::getwidth()
{
    return width;
}//返回宽度

double Rectangle::perimeter(double length,double width)
{
    return length*2+width*2;
}//计算周长

double Rectangle::area(double length,double width)
{
    return length*width;
}//计算面积
