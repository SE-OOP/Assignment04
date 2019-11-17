#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

class Rectangle
{
public:
    explicit Rectangle (double  = 1.0 ,double = 1.0);//initial the function
    double setPerimeter(double l, double w);//calculate perimeter
    double setArea(double l, double w);//calculate area
    void setLength(double );//set length
    void setWidth(double );//set width
    double getLength();
    double getWidth();
private:
     double length;
     double width;
};

#endif // RECTANGLE_H_INCLUDED
