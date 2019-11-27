#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
using namespace std;
#include "Point.h"
class Rectangle
{
public:
    Rectangle(Point &,Point &,Point &,Point &);
    void square();
    double getPerimeter();
    double getArea();
private:
    Point A,B,C,D;
    double length;
    double width;
    double perimeter;
    double area;
};



#endif // RECTANGLE_H_INCLUDED
