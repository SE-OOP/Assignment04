#include <iostream>
#include "Rectangle.h"
#include "Point.h"

using namespace std;
Rectangle::Rectangle(Point &a,Point &b,Point &c,Point &d) // Define the constructor of Rectangle
{
     setPointA(a);
     setPointB(b);
     setPointC(c);
     setPointD(d);
}

void Rectangle::setPointA(Point &a) //define function to set PointA
{
    A = a;
}

void Rectangle::setPointB(Point &b)
{
    B = b;
}

void Rectangle::setPointC(Point &c)
{
    C = c;
}

void Rectangle::setPointD(Point &d)
{
    D = d;
}

Point Rectangle::getPointA()const //define function to get PointA
{
    return A;
}

Point Rectangle::getPointB()const
{
    return B;
}

Point Rectangle::getPointC()const
{
    return C;
}

Point Rectangle::getPointD()const
{
    return D;
}

double Rectangle::Length() //define function to calculate length
{
    double length;
        if(A.getPointX() > B.getPointX())
            length = A.getPointX() - B.getPointX();
        else
            length = B.getPointX() - A.getPointX();
    return length;

}

double Rectangle::Width() //define function to calculate width
{
    double width;
        if(A.getPointY() > D.getPointY())
            width = A.getPointY() - D.getPointY();
        else
            width = D.getPointY() - A.getPointY();
    return width;

}

double Rectangle::Perimeter()  //define function to calculate perimeter
{
    double length1 = Length();
    double width1 = Width();
    double perimeter;
    perimeter = (length1 + width1) * 2;
    return perimeter;
}

double Rectangle::Area() //define function to calculate area
{
    double length1 = Length();
    double width1 = Width();
    double area;
    area = length1 * width1;
    return area;
}

void Rectangle::Square() //define function to judge is rectangle a square
{
     double a = Length();
     double b = Width();
    if(a == b)
        cout<<"Yes";
    else
       cout<< "No";
}
