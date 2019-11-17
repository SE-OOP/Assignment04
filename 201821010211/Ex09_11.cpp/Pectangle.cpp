#include <iostream>
#include"Rectangle.h"
using namespace std;

Rectangle::Rectangle(double l=0,double w=0)
    :length(l),width(w)
{
    setPrecision(length,width);
    setArea(length,width);
}
void Rectangle::setPrecision(length,width)
{

    if(l<20.0&&l>0.0&&w<20.0&&w>0.0)
    {
        length=l;
        width=w;
        precision=2*(length+width);
    }
    else
        cout<<"no";
}
void Rectangle::setArea(length,width)
{
    if(l<20.0&&l>0.0&&w<20.0&&w>0.0)
    {
        length=l;
        width=w;
        precision=length*width;
    }
    else
        cout<<"no"<<endl;
}
double Rectangle::getPrecision()const
{
    return precision;
}
double Rectangle::getArea()const
{
    return area;
}
