#include <iostream>
using namespace std;
#include"Rectangel2.h"
#include"math.h"

Rectangel2::Rectangel2(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)
{

}
void Rectangel2::setDate(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)
{
    setDatex1(x1);
    setDatey1(y1);
   setDatex2(x2);
    setDatey2(y2);
    setDatex3(x3);
    setDatey3(y3);
    setDatex4(x4);
    setDatey4(y4);
}
void Rectangel2::setDatex1(double a)
{
    if(a<20&&a>0)
        x1=a;
    else
        cout<<"error input of x1"<<endl;
}

void Rectangel2::setDatey1(double a)
{
    if(a<20&&a>0)
        y1=a;
    else
        cout<<"error input of y1"<<endl;
}
void Rectangel2::setDatex2(double a)
{
    if(a<20&&a>0)
        x2=a;
    else
        cout<<"error input of x2"<<endl;
}

void Rectangel2::setDatey2(double a)
{
    if(a<20&&a>0)
        y2=a;
    else
        cout<<"error input of y2"<<endl;
}
void Rectangel2::setDatex3(double a)
{
    if(a<20&&a>0)
        x3=a;
    else
        cout<<"error input of x3"<<endl;
}

void Rectangel2::setDatey3(double a)
{
    if(a<20&&a>0)
        y3=a;
    else
        cout<<"error input of y3"<<endl;
}
void Rectangel2::setDatex4(double a)
{
    if(a<20&&a>0)
        x4=a;
    else
        cout<<"error input of x4"<<endl;
}

void Rectangel2::setDatey4(double a)
{
    if(a<20&&a>0)
        y4=a;
    else
        cout<<"error input of y4"<<endl;
}
double Rectangel2::getDatex1()const
{
    return x1;
}
double Rectangel2::getDatey1()const
{
    return y1;
}
double Rectangel2::getDatex2()const
{
    return x2;
}
double Rectangel2::getDatey2()const
{
    return y2;
}
double Rectangel2::getDatex3()const
{
    return x3;
}
double Rectangel2::getDatey3()const
{
    return y3;
}
double Rectangel2::getDatex4()const
{
    return x4;
}
double Rectangel2::getDatey4()const
{
    return y4;
}
double Rectangel2::Check()const//判断举行方法：证明至少3个角为直角
{
    int flag=0;
    //以（x1,y1）为起点，判断为直角
    if(((x2-x1)*(x3-x1)+(y2-y1)*(y3-y1)==0)||((x2-x1)*(x4-x1)+(y2-y1)*(y4-y1)==0)||((x3-x1)*(x4-x1)+(y3-y1)*(y4-y1)==0))
        flag+=1;
    //以（x2,y2）为起点，判断为直角
    if(((x1-x2)*(x3-x2)+(y1-y2)*(y3-y2)==0)||((x1-x2)*(x4-x2)+(y1-y2)*(y4-y2)==0)||((x3-x2)*(x4-x2)+(y3-y2)*(y4-y2)==0))
        flag+=1;
    //以（x3,y3）为起点，判断为直角
    if(((x1-x3)*(x2-x3)+(y1-y3)*(y2-y3)==0)||((x1-x3)*(x4-x3)+(y1-y3)*(y4-y3)==0)||((x2-x3)*(x4-x3)+(y2-y3)*(y4-y3)==0))
        flag+=1;
    //以（x4,y4）为起点，判断为直角
    if(((x1-x4)*(x2-x4)+(y1-y4)*(y2-y4)==0)||((x2-x4)*(x3-x4)+(y2-y4)*(y3-y4)==0)||((x1-x4)*(x3-x4)+(y1-y4)*(y3-y4)==0))
        flag+=1;
    //判断条件：至少有3个直角
    if(flag>=3)
     return true;
    else
     return false;
}
void Rectangel2::setSide()
{
    double a=0,b=0,c=0;
    double min;
    a=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    b=(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
    c=(x4-x1)*(x4-x1)+(y4-y1)*(y4-y1);
    if(a>b)
    {
        min=a;
        a=b;
        b=min;
    }
    if(b>c)
    {
        min=c;
        b=c;
        c=min;
    }
    if(a>b)
    {
        min=a;
        a=b;
        b=min;
    }
    length=sqrt(b);
    width=sqrt(a);
}
void Rectangel2::display()
{
    cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<" "<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
}

double Rectangel2::Perimeter()const
{
    return 2*(length+width);
}
double Rectangel2::Area()const
{
    return length*width;
}

