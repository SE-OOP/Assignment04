#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
class Rectangle
{
public:
    Rectangle( double=1.0, double=1.0 );//initialize default parameters;
    void setlength( double );//set the length of the rectangle;
    void setwidth( double );//set the width of the rectanglr;
    double getlength() const;//return the length;
    double getwidth() const;//return the width;
    double perimeter();//return the peremeter;
    double area();//return the area;

private:
    double length;
    double width;
};


#endif // RECTANGLE_H_INCLUDED
