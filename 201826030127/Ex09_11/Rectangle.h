#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include<iostream>
using namespace std;
class Rectangle
{
public:
    Rectangle(double,double);
    void setlength(double);
    void setwidth(double);
     double getlength() const;
     double getwidth() const;
     double  perimeter() const;
     double  area()  const;

private:
    double length;
    double width;
};
