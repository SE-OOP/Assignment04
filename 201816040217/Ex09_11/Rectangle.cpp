#include <iostream>
using namespace std;
#include "Rectangle.h"
//构造函数对len和wid赋值
Rectangle::Rectangle(double len, double wid)
{
    setLength(len);
    setWidth(wid);
}
//set函数赋值，get函数获取
void Rectangle::setLength(double ans)
{
    if(ans > 0&&ans < 20)
        length = ans;
    //else
       // length = 1;
}
double Rectangle::getLength()
{
    return length;
}
void Rectangle::setWidth(double ans)
{
    if(ans > 0&&ans < 20)
        width = ans;
   // else
       // width = 1;
}
double Rectangle::getWidth()
{
    return width;
}
//返回周长
double Rectangle::perimeter()
{
    double sum;
    sum = 2*(length + width);
    return sum;
}
//返回面积
double Rectangle::area()
{
    double sum;
    sum = length * width;
    return sum;
}
