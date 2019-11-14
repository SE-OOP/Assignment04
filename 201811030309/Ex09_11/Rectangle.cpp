#include <iostream>
#include "Rectangle.h"

using namespace std;

//initialize default parameters;
Rectangle::Rectangle( double len, double wid)
    {
        setlength(len);
        setwidth(wid);
    }

//judge the length and set it
void Rectangle::setlength(double len)
{
    if(len>0.0&&len<=20.0)
        length=len;
    else
        cerr << "the length must in 0.0--20.0";
}

//judge the width and set it;
void Rectangle::setwidth(double wid)
{
    if(wid>0.0&&wid<=20.0)
        width=wid;
    else
        cerr << "the width must in 0.0--20.0";
}

//return the length of rectangle;
double Rectangle::getlength() const
{
    return length;
}

//return the width of rectangle;
double Rectangle::getwidth() const
{
    return width;
}

//return the perimeter;
double Rectangle::perimeter()
{
    return 2*(getlength()+getwidth());
}

//return the area of rectangle;
double Rectangle::area()
{
    return getlength()*getwidth();;
}
