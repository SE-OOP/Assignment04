#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include "Point.h"
class Rectangle
{
public:
     explicit Rectangle ( Point &,Point& ,Point &,Point &);//initial the function
     double getx();
     double gety();
     int judge(Point& ,Point& ,Point& ,Point& );
     double effectiveLength(Point& ,Point& ,Point& ,Point&);
     double effectiveWidth(Point& ,Point& ,Point& ,Point&);
     double effectivePerimeter(double,double);
     double effectiveArea(double,double);
     int judgeSquare(Point& ,Point& ,Point& ,Point&);
private:
     double length;
     double width;
     Point P1;
     Point P2;
     Point P3;
     Point p4;
};


#endif // RECTANGLE_H_INCLUDED
