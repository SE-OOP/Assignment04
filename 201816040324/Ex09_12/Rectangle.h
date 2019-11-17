#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "Point.h"

using namespace std ;

class Rectangle
{
public:
    Rectangle (Point,Point,Point,Point) ;
    bool firstQuadrant () ;//第一象限且小于20
    bool rectangle () ;//是否为长放心
    void setPoint (Point,Point,Point,Point) ;
    int Rectangular_length() ;//长
    int Rectangular_width() ;//宽
    int Rectangular_perimeter() ;//周长
    int Rectangular_area() ;//面积
    bool square () ;
private:
    Point p1 ;//左上角
    Point p2 ;//右上角
    Point p3 ;//左下角
    Point p4 ;//右下角
};
#endif
