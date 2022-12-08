#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
class Rectangle
{
public:
    //构造函数
    Rectangle(double, double);
    //获取周长
    double perimeter();
    //获取面积
    double area();
    void setLength(double);
    double getLength();
    void setWidth(double);
    double getWidth();
private:
    //长和宽
    double length = 1,width = 1;

};

#endif // RECTANGLE_H_INCLUDED
