//Ex09_11:Rectangle.cpp
#include <iostream>
#include "Rectangle.h"

using namespace std;
//constructor length and width
Rectangle::Rectangle(double l, double w)
{
    setLength(l);
    setWidth(w);
}

//fuction to set length
void Rectangle::setLength(double l)
{
    if(l>0.0 && l<20.0)
    {
        length = l;
    }
    else
        cout << "length is out of range" << endl;
}

//fuction to retrieve length
double Rectangle::getLength()
{
    return length;
}

//fuction to set width
void Rectangle::setWidth(double w)
{
    if(w>0.0 && w<20.0)
    {
        width = w;
    }
    else
        cout << "width is out of range" << endl;
}

//fuction to retrieve width
double Rectangle::getWidth()
{
    return width;
}

//fuction to calculator the perimeter
double Rectangle::perimeter(double l, double w)
{
    return (2*l + 2*w);
}

//fuction to calculator area
double Rectangle::area(double l, double w)
{
    return l*w;
}
