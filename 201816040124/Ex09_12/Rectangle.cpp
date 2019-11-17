#include<iostream>
#include"Point.h"
#include"Rectangle.h"
using namespace std;
Rectangle::Rectangle(double a,double b,double c,double d,double e,double f,double g,double h)
{
    Point p(a, b,c,d,e,f,g,h);
    if(p.l(a,b,c,d)<=p.l(c,d,e,f))
    {
        length=p.l(c,d,e,f);
        width=p.l(a,b,c,d);
    }
    else
    {
        width=p.l(c,d,e,f);
        length=p.l(a,b,c,d);
    }
}//构造函数结束

double Rectangle::getwidth()
{
    return width;
}//width的get函数结束
double Rectangle::area()
{
    return length*width;
}//area函数结束
double Rectangle::perimeter()
{
    return 2*(length+width);
}//perimeter函数结束
double Rectangle::getlength()
{
    return length;
}//length的get函数结束
//判断是否是正方形
bool Rectangle::square()
{
    if(length==width)
        return true;
    else
        return false;
}//square函数结束
