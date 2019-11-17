#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
class Rectangle
{
public:
    Rectangle(double, double);
    void setLength(double,double,double,double,double,double,double,double);
    void setWidth(double,double,double,double,double,double,double,double);
    double getLength();
    double getWidth();
    double getPerimeter();
    double getArea();
private:
     double x1;
     double y1;
     double x2;
     double y2;
     double x3;
     double y3;
     double x4;
     double y4;
     double length;
     double width;
};


#endif // RECTANGLE_H_INCLUDED
