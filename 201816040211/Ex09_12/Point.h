#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

#include<string>
using namespace std;

class Point
{
public:
    Point (double, double);
    double perimeter(double length,double width);
    double area(double length, double width);
    void square(double , double );
private:
    double x1, y1,x2,y2;
    double length;
    double width;
};

#endif // POINT_H_INCLUDED
