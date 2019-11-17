#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

class Rectangle
{
public:
    Rectangle(double=1,double=1);//初始化length和width并给予默认值
    double perimeter();//计算周长
    double area();//计算面积
    void setlength(double);//length的set函数
    double getlength();//length的get函数
    void setwidth(double);//width的set函数
    double getwidth();//width的get函数
private:
    double length;
    double width;
};

#endif // RECTANGLE_H_INCLUDED
