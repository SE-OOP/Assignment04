//Rectangle.cpp
#include<iostream>
#include"Rectangle.h"//include definition of class Rectangle from Rectangle.h

using namespace std;

Rectangle::Rectangle(float Length,float Width)//default constructor
{
    setLength(Length);
    setWidth(Width);
}
void Rectangle::setLength(float Length)//set values of length
{
    if(Length>0&&Length<20)//validate the length
        length=Length;
    else
        throw invalid_argument("width must be 0-20");
}
float Rectangle::getLength()const//return length value
{
    return length;
}
void Rectangle::setWidth(float Width)//set values of width
{
    if(Width>0&&Width<20)//validate the width
        width=Width;
    else
        throw invalid_argument("width must be 0-20");
}
float Rectangle::getWidth()const// return width value
{
    return width;
}
void Rectangle::printPerimeter()const//print perimeter in the format
{
    cout<<2*length*width<<endl;
}
void Rectangle::printArea()const//print area in the format
{
    cout<<length*width<<endl;
}
