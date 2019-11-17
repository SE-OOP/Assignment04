#include <iostream>
#include <iomanip>
#include "Rectange.h"

using namespace std;

Rectange::Rectange(double a,double b)
{
    setLength(a);
    setWidth(b);
}
void Rectange::setLength(double a)
{
    if(a<20&&a>0)
        length=a;
    else
    {
        cerr<<"长度越界"<<endl;
        exit(0);
    }
}
double Rectange::getLength()
{
    return length;
}
void Rectange::setWidth(double b)
{
    if(b<20&&b>0)
        width=b;
    else
    {
        cerr<<"宽度越界"<<endl;
        exit(0);
    }
}
double Rectange::getWidth()
{
    return width;
}
double Rectange::perimeter()
{
    return (length+width)*2;
}
double Rectange::area()
{
    return length*width;
}
void Rectange::disPlay()
{
    cout<<setw(10)<<getLength()<<setw(10)<<getWidth()<<setw(10)<<perimeter()<<setw(10)<<area();
    cout<<endl<<endl;
}
