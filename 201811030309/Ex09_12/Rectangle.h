#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include "Point.h"

class Rectangle
{
public:
    Rectangle(Point &);
    void square() const;
    double length();
    double width();
    double perimeter();
    double area();

private:
    Point p;
};


#endif // RECTANGLE_H_INCLUDED
