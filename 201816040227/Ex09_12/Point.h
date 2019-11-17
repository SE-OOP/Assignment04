#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

#include <iostream>

using namespace std;
class Point
{
public:
    Point( double, double);
    Point();
    void setX( double);
    double getX();
    void setY( double);
    double getY();

private:
    double x;
    double y;

};


#endif // POINT_H_INCLUDED
