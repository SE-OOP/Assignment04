#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include<string>
using namespace std;

class Rectangle
{
public:
    Rectangle (double,double,double,double,double,double,double,double);
    Rectangle setzuobiao(double,double,double,double,double,double,double,double);
    void setx1(double x1);
    double getx1();
    void sety1(double y1);
    double gety1();//第一个坐标

    void setx2(double x2);
    double getx2();
    void sety2(double y2);
    double gety2();//第二个坐标

    void setx3(double x3);
    double getx3();
    void sety3(double y3);
    double gety3();//第三个坐标

    void setx4(double x4);
    double getx4();
    void sety4(double y4);
    double gety4();//第四个坐标
    double length1(double x1, double x2);
    double width1(double y1, double y2);
private:
    double x1,y1;
    double x2,y2;
    double x3,y3;
    double x4,y4;
    double length;
    double width;
};
