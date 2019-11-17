#include "Rectangle.h"
#include<iostream>
#include <stdlib.h>
using namespace std;

Rectangle::Rectangle(double a,double b)
{
    setLength(a);
    setWidth(b);
}

void Rectangle::setLength(double a)
{
    length=a;
}

void Rectangle::setWidth(double a)
{
    width=a;
}

double Rectangle::Perimeter()
{
    perimeter=(length+width)*2;
    return  perimeter;
}

double Rectangle::Area()
{
    area=length*width;
    return  area;
}

void Rectangle::Range()
{
    if(length<=0.0||length>=20.0)
    {
        cout<<"The length over 20 or less than 0"<<endl;
        exit(0);
    }
    if(width<=0.0||width>=20.0)
    {
        cout<<"The width over 20 or less than 0"<<endl;
        exit(0);
    }
}
