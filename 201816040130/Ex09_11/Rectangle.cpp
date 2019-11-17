#include <iostream>
using namespace std;

#include "Rectangle.h"
Rectangle::Rectangle(double length,double width)
{
    setLength(length);  // initializes length
    setWidth(width); // // initializes width
}

void Rectangle::setLength(double rectangleLength) // function to set the length
{
  if(rectangleLength > 0.0 && rectangleLength < 20.0)
    length = rectangleLength;
}
void Rectangle::setWidth(double rectangleWidth)  // function to set the width
{
  if(rectangleWidth > 0.0 && rectangleWidth < 20.0)
    width = rectangleWidth;
}


double Rectangle::getLength()  //define function for the getLength
{
   return length;
}

double Rectangle::getWidth() //define function for the getWidth
{
   return width;
}

double Rectangle::Perimeter(double length,double width)  //define function for the perimeter
{
    double perimeter;
    perimeter = (length + width) * 2;
    return perimeter;
}
double Rectangle::Area(double length,double width) //define function for the Area
{
    double area;
    area = length * width;
    return area;
}
