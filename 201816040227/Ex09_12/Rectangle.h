#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include <iostream>
#include "Point.h"

using namespace std;

class Rectangle
{

    public:
        Rectangle ( Point, Point, Point, Point, double,double,double ,double,double,double);/* Declare a constructor that has one parameter for each data member */
        void setPoint(Point , Point , Point, Point);
        void setLength(double,double);
        double getLength();
        void setWidth(double,double);
        double getWidth();
        void setPerimeter(double);
        double getPerimeter();
        void setArea(double);
        double getArea();

        void rectangle();
        void square();
    private:
        Point Point1;
        Point Point2;
        Point Point3;
        Point Point4;
        double length;
        double width;
        double perimeter;
        double area;
};
#endif // RECTANGLE_H_INCLUDED
