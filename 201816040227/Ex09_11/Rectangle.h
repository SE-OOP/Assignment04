#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include <iostream>

using namespace std;

class Rectangle
{
    public:
        Rectangle ( double, double, double, double);/* Declare a constructor that has one parameter for each data member */
        void setLength(double);
        double getLength();
        void setWidth(double);
        double getWidth();
        void setPerimeter(double);
        double getPerimeter();
        void setArea(double);
        double getArea();
    private:
        double length;
        double width;
        double perimeter;
        double area;
};
#endif // RECTANGLE_H_INCLUDED
