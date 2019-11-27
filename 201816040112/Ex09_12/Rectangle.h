#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include "Point.h"
class Rectangle
{
public:
    explicit Rectangle(Point &,Point &,Point &);
    double Relength();
    double Rewidth();
    double perimeter();
    double arear();
    bool square();
private:
    Point point1;
    Point point2;
    Point point3;


};


#endif // RECTANGLE_H_INCLUDED
