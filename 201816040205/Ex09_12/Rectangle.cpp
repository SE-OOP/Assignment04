#include <iostream>
#include <cmath>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(Point& A,Point& B,Point& C, Point& D)
{
    setRectangle(A,B,C,D);
}

void Rectangle::setRectangle(Point& a, Point& b, Point& c, Point& d)
{
    if(a.x>0&&a.x<=20&&a.y>0&&a.y<=20)
    A=a;
    else
        cout<<"point A is error"<<endl;


    if(b.x>0&&b.x<=20&&b.y>0&&b.y<=20)
    B=b;
    else
        cout<<"point B is error"<<endl;

    if(c.x>0&&c.x<=20&&c.y>0&&c.y<=20)
    C=c;
    else
        cout<<"point C is error"<<endl;

    if(d.x>0&&d.x<=20&&d.y>0&&d.y<=20)
    D=d;
    else
        cout<<"point D is error"<<endl;

    if(pow(a.x-b.x,2)+pow(a.y-b.y,2)== pow(d.x-c.x,2)+pow(d.y-c.y,2)&&pow(a.x-d.x,2)+pow(a.y-d.y,2)== pow(b.x-c.x,2)+pow(b.y-c.y,2)&&pow(a.x-b.x,2)+pow(a.y-b.y,2)+pow(b.x-c.x,2)+pow(b.y-c.y,2)==pow(a.x-c.x,2)+pow(a.y-c.y,2))
        cout<<"This is a rectangle."<<endl;
        else
            cout<<"This is NOT a rectangle!"<<endl;


}

double Rectangle::length()
{
    if(pow(A.x-B.x,2)+pow(A.y-B.y,2)>=pow(B.x-C.x,2)+pow(B.y-C.y,2))
        return sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
    else
        return sqrt(pow(B.x-C.x,2)+pow(B.y-C.y,2));

}

double Rectangle::width()
{
    if(pow(A.x-B.x,2)+pow(A.y-B.y,2)>=pow(B.x-C.x,2)+pow(B.y-C.y,2))
        return sqrt(pow(B.x-C.x,2)+pow(B.y-C.y,2));
    else
        return sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
}

double Rectangle::area()
{

    return length()*width();
}

double Rectangle::perimeter()

{
    return (length()+width())*2;
}

bool Rectangle::square()
{
    if(length()==width())
        return true;
    else
        return false;
}


