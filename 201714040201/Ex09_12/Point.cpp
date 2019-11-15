//Point.cpp
//Point class member-function definitions
#include<iostream>
#include"Point.h"

using namespace std;

//constructor function to initialize private data
Point::Point(double X,double Y)
{
    setCoordinate( X , Y);
}//end Point constructor

//set x and y value
void Point::setCoordinate(double X,double Y)
{
    if((X>0&&X<20)&&(Y>0&&Y<20))
    {
        x=X;
        y=Y;
    }
}
//get a point x value
double Point::getCoordinateX()
{
    return x;
}
//get a point y value
double Point::getCoordinateY()
{
    return y;
}
