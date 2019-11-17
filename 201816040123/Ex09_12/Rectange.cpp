#include "Point.h"
#include "Rectange.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

Rectange::Rectange(const Point &a1,const Point &b1,const Point &c1,const Point &d1)
:a(a1),b(b1),c(c1),d(d1)
{
    srectange();
}
void Rectange::srectange()
{
    double l,w;
    double z1=(a.getX()+b.getX()+c.getX()+d.getX())/4;
    double z2=(a.getY()+b.getY()+c.getY()+d.getY())/4;
    double f1=(a.getX()-z1)*(a.getX()-z1)+(a.getY()-z2)*(a.getY()-z2);
    double f2=(b.getX()-z1)*(b.getX()-z1)+(b.getY()-z2)*(b.getY()-z2);
    double f3=(c.getX()-z1)*(c.getX()-z1)+(c.getY()-z2)*(c.getY()-z2);
    double f4=(d.getX()-z1)*(d.getX()-z1)+(d.getY()-z2)*(d.getY()-z2);
    if(f1==f2&&f1==f3&&f1==f4)
    {
        if(a.getX()==b.getX())
            l=fabs(a.getY()-b.getY());
        else if(a.getX()==c.getX())
            l=fabs(a.getY()-c.getY());
        else if(a.getX()==d.getX())
            l=fabs(a.getY()-d.getY());

         if(a.getY()==b.getY())
            w=fabs(a.getX()-b.getX());
        else if(a.getY()==c.getY())
            w=fabs(a.getX()-c.getX());
        else if(a.getY()==d.getY())
            w=fabs(a.getX()-d.getX());

         if(l>=w)
         {
             length=l;
             width=l;
         }
         else
           {
             length=w;
             width=l;
         }
    }
    else
    {
        cerr<<"不能构成长方形"<<endl;
        exit(0);
    }
}
double Rectange::getLength()
{
    return length;
}
double Rectange::getWidth()
{
    return width;
}
double Rectange::perimere()
{
    return (length+width)*2;
}
double Rectange::area()
{
    return length*width;
}
string Rectange::square()
{

    if(length==width)
        return "Yes";
    else
        return "No";
}
void Rectange::disPlay()
{
    cout<<setw(5)<<getLength()<<setw(5)<<getWidth()<<setw(5)
    <<perimere()<<setw(5)<<area()<<setw(15)<<square()<<endl<<endl;
}
