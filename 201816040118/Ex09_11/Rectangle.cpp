#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Rectangle.h"
using namespace std;
Rectangle::Rectangle(double Length,double Width)//构造函数
{
     setLength(Length);
     setWidth(Width);
     setPerimeter(Length,Width);
     setArea(Length,Width);
}
void Rectangle::setPerimeter(double Length,double Width)//计算周长
{
    perimeter=(Length+Width)*2;
}
double Rectangle::getPerimeter()const//返回周长
{
    return perimeter;
}
void Rectangle::setArea(double Length,double Width)//计算面积
{
    area=Length*Width;
}
double Rectangle::getArea()const//返回面积
{
    return area;
}
void Rectangle::setLength(double Length)//计算长度并判断是否合法
{
    if(Length>0&&Length<20)
    length=Length;
}
double Rectangle::getLength()const//返回长度
{
    return length;
}
void Rectangle::setWidth(double Width)//计算宽度并判断是否合法
{
    if(Width>0&&Width<20)
    width=Width;
}
double Rectangle::getWidth()const//返回宽度
{
    return width;
}
