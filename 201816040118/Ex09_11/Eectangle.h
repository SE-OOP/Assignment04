#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
class Rectangle
{
public:
    explicit Rectangle(double=1,double=1);//声明构造函数并初始化为1
    void setPerimeter(double,double);//声明一个计算周长的函数
    double getPerimeter()const;//声明一个返回周长的函数
    void setArea(double,double);//声明一个计算面积的函数
    double getArea()const;//声明一个返回面积的函数
    void setLength(double);//声明一个计算长度的函数
    double getLength()const;//声明一个返回长度的函数
    void setWidth(double);//声明一个计算宽度的函数
    double getWidth()const;//声明一个返回宽度的函数
private:
    double length;
    double width;
    double perimeter;
    double area;//声明4个数据成员
};
#endif
