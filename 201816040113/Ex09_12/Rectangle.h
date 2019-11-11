#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include <iostream>
using namespace std;
#include "Point.h"
class Rectangle
{
public:
    Rectangle(Point &,Point &,Point &,Point &);
    SetRectangle(Point &,Point &,Point &,Point &);
    //设置和获取长宽
    double getLength();//计算长度
    double getWidth();//计算宽度
    double perimeter();//计算周长
    double area();//计算面积
    int square();//判断是否为正方形，返回值为-1或0
private:
    Point A,B,C,D;//四个坐标点
    double Length,Width;//长和宽
};

#endif // RECTANGLE_H_INCLUDED
