
#include<iostream>
using namespace atd;
#include"Rectangle.h"

void Rectangle::setLength(float l)
{
    if(l>=0.0&&l<=20.0)length=l;
    else cout<<"长方形的长不符合要求"<<endl;
}
void Rectangle::setwidth(float w)
{
    if(w>=0.0&&w<=20.0)width=w;
    else cout<<"长方形的宽不符合要求"<<endl;
}
float Rectangle::perimeter()
{
    return 2*(length+width);
}
float Rectangle::area()
{
    return length*width;
}
