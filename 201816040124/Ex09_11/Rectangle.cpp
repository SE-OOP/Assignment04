#include <iostream>

using namespace std;
#include"Rectangle.h"
Rectangle::Rectangle(double l,double w)
{
    setlength(l);
    setwidth(w);
}//构造函数结束
void Rectangle::setlength(double l)
{
    if(l>=0.0&&l<=20.0)
        length=l;
    else
        cout<<"length不符合条件"<<endl;
}//length的set函数结束
double Rectangle::getlength()
{
    return length;
}//length的get函数结束
void Rectangle::setwidth(double w)
{
    if(w>=0.0&&w<=20.0)
        width=w;
    else
        cout<<"width不符合条件"<<endl;
}//width的set函数结束
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
