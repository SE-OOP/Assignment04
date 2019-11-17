#include <iostream>
#include "Rectangle.h"
#include "Point.h"


using namespace std;

int main()
{
    Point p1(0,5),p2(6,5),p3(0,0),p4(6,0);
    cout<<"(0,5),(6,5),(0,0),(6,0)\n"  ;
    Rectangle rec(p1,p2,p3,p4);
    if (rec.firstQuadrant ())
    {
        cout<<"In the first quadrant and less than 20\n\n" ;
    }
    else
    {
        cout<<"Not in the first quadrant and less than 20\n\n" ;
    }//In the first quadrant and less than 20
    if (rec.rectangle ())
    {
        cout<<"it is a rectangle\n\n" ;
    }
    else
    {
        cout<<"It's not a rectangle\n\n" ;
    }// a rectangle
        if (rec.square ())
    {
        cout<<"It's a square\n\n" ;
    }
    else
    {
        cout<<"It's not a square\n\n" ;
    }//a square
    cout<<"length is "<<rec.Rectangular_length()<<"\n\n"<<"width is "<<rec.Rectangular_width()<<"\n\n"<<"perimeter is "<<rec.Rectangular_perimeter()<<"\n\n"<<"area is "<<rec.Rectangular_area()<<"\n\n" ;
    return 0;
}
