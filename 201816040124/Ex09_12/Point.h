#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point
{
public:
    Point(double,double,double,double,double,double,double,double);//构造函数的声明
    void setPoint(double,double,double,double,double,double,double,double);//获取坐标值
    double l(double ,double,double,double);//求长度
private:
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
    double x4;
    double y4;
};
#endif // POINT_H_INCLUDED
