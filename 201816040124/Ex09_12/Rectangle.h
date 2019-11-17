#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include"Point.h"
class Rectangle
{
public:
    Rectangle(double,double,double,double,double,double,double,double);//构造函数的声明

    double getlength();//length的get函数
    double getwidth();//width的get函数
    double perimeter();//计算周长
    double area();//计算面积
    bool square();
private:
    double length;
    double width;
};

#endif // RECTANGLE_H_INCLUDED
