#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include"Point.h"
class Rectangle
{
public:
    Rectangle(Point ,Point ,Point , Point );
    void setRect(Point,Point,Point,Point);
    double getLength();
    double getWidth();
    bool judgeSquare(Point,Point,Point,Point);
    double getPerimeter();
    double getArea();
private:
    Point a;
    Point b;
    Point c;
    Point d;
};
#endif // RECTANGLE_H_INCLUDED
