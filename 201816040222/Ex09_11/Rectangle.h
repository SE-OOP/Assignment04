#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
class Rectangle
{
public:
    Rectangle(double =1.0, double=1.0);
    void setLength(double);
    void setWidth(double);
    double getPerimeter();
    double getArea();
private:
     double length;
     double width;
};


#endif // RECTANGLE_H_INCLUDED
