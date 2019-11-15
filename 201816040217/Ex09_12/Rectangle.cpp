#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include "Rectangle.h"
#include "Point.h"
Rectangle::Rectangle(double pon1_x, double pon1_y, double pon2_x, double pon2_y, double pon3_x, double pon3_y, double pon4_x, double pon4_y)
{
    Point point1(pon1_x, pon1_y,pon2_x, pon2_y,pon3_x, pon3_y,pon4_x, pon4_y);
    double len = 1, wid = 1;
    //判单能否构成长方形
    if(point1.flag == 1)
    {
        len = point1.len1;
        wid = point1.wid1;
    }
    else
    {
        cout<<"Not a Rectangular\n";
    }

    setLength(len);
    setWidth(wid);
}
//set函数赋值，get函数获取
void Rectangle::setLength(double ans)
{
    if(ans > 0&&ans < 20)
        length = ans;

}
double Rectangle::getLength()
{
    return length;
}
void Rectangle::setWidth(double ans)
{
    if(ans > 0&&ans < 20)
        width = ans;

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

