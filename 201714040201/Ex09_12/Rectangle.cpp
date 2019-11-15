//Rectangle.cpp
//Rectangle class member-function definitions
#include<iostream>
#include<cmath>
#include"Rectangle.h"
#include"Point.h"

using namespace std;

//constructor function to initialize private data
Rectangle::Rectangle(const Point &First,const Point &Second,const Point &Third,const Point &Fourth)
{
    setFirst(First);
    setSecond(Second);
    setThird(Third);
    setFourth(Fourth);
    judgeRectangle();
}//end Rectangle constructor
//set first point coordinate
void Rectangle::setFirst(const Point &First)
{
    first=First;
}
//set second point coordinate
void Rectangle::setSecond(const Point &Second)
{
    second=Second;
}
//set third point coordinate
void Rectangle::setThird(const Point &Third)
{
    third=Third;
}
//set fourth point coordinate
void Rectangle::setFourth(const Point &Fourth)
{
    fourth=Fourth;
}
//judge is or not a rectangle
void Rectangle::judgeRectangle()
{
    if((first.getCoordinateX()==fourth.getCoordinateX())&&(third.getCoordinateX()==second.getCoordinateX()))
    {
        if((first.getCoordinateY()==second.getCoordinateY())&&(fourth.getCoordinateY()==third.getCoordinateY()))
        {
            getLength();
            getWidth();
            getPerimeter();
            getArea();
        }
    }
    else
        cout<<"can not make a rectangle."<<endl;
}
//get rectangle of length
double Rectangle::getLength()
{
    double x,y;
    x=second.getCoordinateX()-first.getCoordinateX();
    y=fourth.getCoordinateY()-first.getCoordinateY();
    if(x>y)
        return x;
    else
        return y;
}
//get rectangle of width
double Rectangle::getWidth()
{
    double x,y;
    x=second.getCoordinateX()-first.getCoordinateX();
    y=fourth.getCoordinateY()-first.getCoordinateY();
    if(x>y)
        return y;
    else
        return x;
}
//get rectangle of perimeter
double Rectangle::getPerimeter()
{
    return 2*getLength()*getWidth();
}
//get rectangle of area
double Rectangle::getArea()
{
    return getLength()*getWidth();
}
//judge is or not a square
void Rectangle::judgeSquare()
{
    double x,y;
    x=second.getCoordinateX()-first.getCoordinateX();
    y=fourth.getCoordinateY()-first.getCoordinateY();
    if(x==y)
        cout<<"it is a square"<<endl;
}
