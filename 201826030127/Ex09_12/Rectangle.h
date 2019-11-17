#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include<iostream>
#include"point.h"
using namespace std;
class Rectangle
{
public:
    Rectangle(point,point,point,point);
    void  set(point,point,point,point);
    bool  sqare(point a,point b,point c,point d);
    double  permeter();
    double  area();
    void display();
    double getmeter();
    double getarea();
private:
    double length=0;
    double width=0;
    double meter=0;
    double ar=0;

};

#endif // RECTANGLE_H_INCLUDED
