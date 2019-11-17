#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include "Point.h"
using namespace std;

class Rectangle
{
public:
    Rectangle(Point&,Point&,Point&,Point&);
    void setRectangle(Point&,Point&,Point&,Point&);
    double length();
    double width();
    double perimeter();
    double area();
    bool square();

private:
   Point A;
   Point B;
   Point C;
   Point D;

};



#endif // RECTANGLE_H_INCLUDED

