#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
class Rectangle
{
public:
    Rectangle(double,double,double,double,double,double,double,double); //构造函数的声明
    void Length(double,double);//声明计算长度的函数
    void Width(double,double);//声明计算宽度的函数
    void Perimeter(double,double);//声明计算周长的函数
    void Area(double,double);//声明计算面积的函数
    void Check(double,double,double,double,double,double,double,double);//检测坐标是否构成长方形
    void Square(double,double,double,double,double,double,double,double);//检测坐标是否构成正方形
    double Printf1();//获取x1的坐标值
    double Printf2();//获取x2的坐标值
    double Printf3();//获取x3的坐标值
    double Printf4();//获取x4的坐标值
    double Printf5();//获取y1的坐标值
    double Printf6();//获取y2的坐标值
    double Printf7();//获取y3的坐标值
    double Printf8();//获取y4的坐标值

private:
    double x1;
    double x2;
    double x3;
    double x4;
    double y1;
    double y2;
    double y3;
    double y4;//声明坐标数据成员
    double length;
    double width;
    double perimeter;
    double area;//声明数据成员
};
#endif
