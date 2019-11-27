using namespace std;
#include "Rectangle.h"
#include "Point.h"
#include<iostream>

Rectangle::Rectangle(Point &a,Point &b,Point &c,Point &d)
:A(a),B(b),C(c),D(d)
{

}

void Rectangle::square()
{
    if(A.getY()-B.getY()>C.getX()-B.getX())
    {
        length=A.getY()-B.getY();
        width=C.getX()-B.getX();
    }
    if(A.getY()-B.getY()<C.getX()-B.getX())
    {
        width=A.getY()-B.getY();
        length=C.getX()-B.getX();
    }
    if(A.getY()-B.getY()==C.getX()-B.getX())
    {
       throw invalid_argument("It is a square");
    }
}
double Rectangle::getPerimeter()
{
    return (length+width)*2;
}

double Rectangle::getArea()
{
    return length*width;
}

