#include<iostream>
using namespace std;
#include"Rectangle.h"
Rectangle::Rectangle(double l,double w)
{
    setRectangle(l,w);
}
void Rectangle::setRectangle(double l,double w)
{
    setlength(l);
    setwidth(w);
}
void Rectangle::setlength(double l)
{   if((l>0)&&(l<2.0))
    length=l;
    else
    cout<<"input error\n";
}
void Rectangle::setwidth(double w)
{   if((w>0)&&(w<2.0))
    width=w;
    else
    cout<<"input error\n";
}
double Rectangle::getlength()
{   return length;  }
double Rectangle::getwidth()
{   return width;   }
double Rectangle::Perimeter(double l,double w)
{
    perimeter=2*(l+w);
    return perimeter;
}
double Rectangle::Area(double l,double w)
{
    area=l*w;
    return area;
}
void Rectangle::display()
{
    cout<<"perimeter:"<<Perimeter(length,width)<<"\n";
    cout<<"area:"<<Area(length,width)<<"\n";
}
