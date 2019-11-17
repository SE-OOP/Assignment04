#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Rectangle.h"
#include "Descartes.h"
using namespace std;

Rectangle ::Rectangle(double a,double b,double c,double d,double e,double f,double g,double h)
{
    coordinate1.setXaY(a,b);
    coordinate2.setXaY(c,d);
    coordinate3.setXaY(e,f);
    coordinate4.setXaY(g,h);
    length=1;
    width=1;
}//constructor
double Rectangle::getLength()
{
    if(judge())
       length=coordinate2.getX()-coordinate1.getX();
    if((coordinate1.getY()-coordinate3.getY())>length)
        length=coordinate1.getY()-coordinate3.getY();
    return length;
}//function to get length
double Rectangle::getWidth()
{
    if(judge())
       width=coordinate1.Descartes::getY()-coordinate3.Descartes::getY();
    if((coordinate2.getX()-coordinate1.getX())<width)
        width=coordinate2.getX()-coordinate1.getX();
    return width;
}//function to get width
double Rectangle::perimeter()
{
    double temp;
    temp=getLength()*2+getWidth()*2;
    return temp;
}//function to get perimeter
double Rectangle::area()
{
    double temp;
    temp=getLength()*getWidth();
    return temp;
}//function to get width
bool Rectangle::judge()
{
    if(coordinate1.getX()==coordinate3.getX()&&coordinate2.getX()==coordinate4.getX()&&coordinate1.getY()==
       coordinate2.getY()&&coordinate3.getY()==coordinate4.getY())
       return true;
       return false;
}
void Rectangle::square()
{
    if(length==width)
        cout<<"It's a square";
    else
        cout<<"It's not a square";
}//judge if it's a square
