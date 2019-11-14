#include <iostream>
#include "Point.h"
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(Point &q)
    :p(q)
{

}

//return the rectangle of length;
double Rectangle::length()
{
    double len;
    if(p.getx2()-p.getx1()>=p.gety4()-p.gety1())
        len=p.getx2()-p.getx1();
    else len=p.gety4()-p.gety1();
    return len;
}

//return the rectangle of width;
double Rectangle::width()
{
    double wid;
    if(p.getx2()-p.getx1()<p.gety4()-p.gety1())
        wid=p.getx2()-p.getx1();
    else wid=p.gety4()-p.gety1();
    return wid;
}

//judge it is a rectangle or a square;
void Rectangle::square() const
{
    if(p.getx2()-p.getx1()==p.gety4()-p.gety1())
        cout << "it is a square";
    else
        cout << "it is a rectangle";
}

//return the rectangle of perimeter;
double Rectangle::perimeter()
{
    return 2*(width()+length());
}

//return the rectanglr of area;
double Rectangle::area()
{
    return width()*length();
}
