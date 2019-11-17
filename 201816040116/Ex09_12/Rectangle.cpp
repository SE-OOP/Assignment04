#include<iostream>
using namespace std;
#include<cmath>
#include"Rectangle.h"
#include"Point.h"
Rectangle::Rectangle(Point xy1,Point xy2,Point xy3,Point xy4)
{
    setlaw(xy1,xy2,xy3,xy4);
}
void Rectangle::setlaw(Point xy1,Point xy2,Point xy3,Point xy4)
{
    Point zx,zs,yx,ys;
    double a=0.0,b=0.0,c=0.0,d=0.0,m,n;
    if((xy1.getx()<=xy2.getx())&&(xy1.getx()<=xy3.getx())&&(xy1.getx()<=xy4.getx())
            &&(xy1.gety()<=xy2.gety())&&(xy1.gety()<=xy3.gety())&&(xy1.gety()<=xy4.gety()))
    {
        zx=xy1;
        a=a+1;
    }
    else if((xy2.getx()<=xy1.getx())&&(xy2.getx()<=xy3.getx())&&(xy2.getx()<=xy4.getx())
            &&(xy2.gety()<=xy1.gety())&&(xy2.gety()<=xy3.gety())&&(xy2.gety()<=xy4.gety()))
    {
        zx=xy2;
        b=+1;
    }
    else if((xy3.getx()<=xy1.getx())&&(xy3.getx()<=xy2.getx())&&(xy3.getx()<=xy4.getx())
            &&(xy3.gety()<=xy1.gety())&&(xy3.gety()<=xy2.gety())&&(xy3.gety()<=xy4.gety()))
    {
        zx=xy3;
        c=c+1;
    }
    else
    {
        zx=xy4;
        d=d+1;
    }
    if((xy1.getx()<=xy2.getx())&&(xy1.getx()<=xy3.getx())&&(xy1.getx()<=xy4.getx())
            &&(xy1.gety()>=xy2.gety())&&(xy1.gety()>=xy3.gety())&&(xy1.gety()>=xy4.gety()))
    {
        zs=xy1;
        a=a+0.1;
    }
    else if((xy2.getx()<=xy1.getx())&&(xy2.getx()<=xy3.getx())&&(xy2.getx()<=xy4.getx())
            &&(xy2.gety()>=xy1.gety())&&(xy2.gety()>=xy3.gety())&&(xy2.gety()>=xy4.gety()))
    {
        zs=xy2;
        b=b+0.1;
    }
    else if((xy3.getx()<=xy1.getx())&&(xy3.getx()<=xy2.getx())&&(xy3.getx()<=xy4.getx())
            &&(xy3.gety()>=xy1.gety())&&(xy3.gety()>=xy2.gety())&&(xy3.gety()>=xy4.gety()))
    {
        zs=xy3;
        c=c+0.1;
    }
    else
    {
        zs=xy4;
        d=d+0.1;
    }
    if(a==1.0)
    {
        if(xy1.getx()==xy2.getx())
            m=xy2.getx()-xy1.getx();
        else if(xy1.getx()==xy3.getx())
            m=xy3.getx()-xy1.getx();
        else if(xy1.getx()==xy4.getx())
            m=xy4.getx()-xy1.getx();
    }
    else if(b==1.0)
    {
        if(xy2.getx()==xy1.getx())
            m=xy1.getx()-xy2.getx();
        else if(xy2.getx()==xy3.getx())
            m=xy3.getx()-xy2.getx();
        else if(xy2.getx()==xy4.getx())
            m=xy4.getx()-xy2.getx();
    }
    else if(b==1.0)
    {
        if(xy3.getx()==xy1.getx())
            m=xy1.getx()-xy3. getx();
        else if(xy3.getx()==xy2.getx())
            m=xy2.getx()-xy3.getx();
        else if(xy3.getx()==xy4.getx())
            m=xy4.getx()-xy3.getx();
    }
    else
    {
        if(xy4.getx()==xy1.getx())
            m=xy1.getx()-xy4.getx();
        else if(xy4.getx()==xy2.getx())
            m=xy2.getx()-xy4.getx();
        else if(xy4.getx()==xy3.getx())
            m=xy3.getx()-xy4.getx();
    }
    if(a==0.1)
    {
        if(xy1.gety()==xy2.gety())
            n=xy1.gety()-xy2.gety();
        else if(xy1.gety()==xy3.gety())
            n=xy1.gety()-xy3.gety();
        else if(xy1.gety()==xy4.gety())
            n=xy1.gety()-xy4.gety();
    }
    else if(b==0.1)
    {
        if(xy2.gety()==xy1.gety())
            n=xy2.gety()-xy1.gety();
        else if(xy2.gety()==xy3.gety())
            n=xy2.gety()-xy3.gety();
        else if(xy2.gety()==xy4.gety())
            n=xy2.gety()-xy4.gety();
    }
    else if(b==0.1)
    {
        if(xy3.gety()==xy1.gety())
            n=xy3.gety()-xy1.gety();
        else if(xy3.gety()==xy2.gety())
            n=xy3.gety()-xy2.gety();
        else if(xy3.gety()==xy4.gety())
            n=xy3.gety()-xy4.gety();
    }
    else
    {
        if(xy4.gety()==xy1.gety())
            n=xy4.gety()-xy1.gety();
        else if(xy4.gety()==xy2.gety())
            n=xy4.gety()-xy2.gety();
        else if(xy4.gety()==xy3.gety())
            n=xy4.gety()-xy3.gety();
    }
    length=max(m,n);
    if((length<0)||(length>2.0))
        cout<<"input error\n";
    width=min(m,n);
    if((width<0)||(width>2.0))
        cout<<"input error\n";
}
double Rectangle::getlength()
{
    return length;
}
double Rectangle::getwidth()
{
    return width;
}
double Rectangle::Perimeter(double length,double width)
{
    perimeter=2*(length+width);
    return perimeter;
}
double Rectangle::Area(double length,double width)
{
    area=length*width;
    return area;
}
void Rectangle::Square(double length,double width)
{
    if(length==width)
    cout<<"此矩形为正方形！\n";
    else
        cout<<"此矩形不为正方形！\n";
}
void Rectangle::display()
{
    cout<<"perimeter:"<<Perimeter(length,width)<<"\n";
    cout<<"area:"<<Area(length,width)<<"\n";
    Square(length,width);
}
