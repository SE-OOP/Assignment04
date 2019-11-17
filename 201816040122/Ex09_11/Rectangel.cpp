#include <iostream>
using namespace std
#include "Rectangel.h"

Rectangel::Rectangel(double length,double width)
{
    if(length>=20||length<=0||width>=20||width<=0)
    {
        cout<<"You had set wrong value"<<endl;
    }
    else
    setRectangel(length,width);
};
void Rectangel::setRectangel(double a,double b)
{
   setRectangelLength(a);
   setRectangelWidth(b);
}
void Rectangel::setRectangelLength(double a)
{
    length=a;
}
void Rectangel::setRectangelWidth(double b)
{
    width=b;
}
double Rectangel::getRectangelLength()const
{
    return length;
}
double Rectangel::getRectangelWidth()const
{
    return width;
}
double Rectangel::Rerimeter()
{
    return 2*(length+width);
}
double Rectangel::Area()
{
    return length*width;
}
