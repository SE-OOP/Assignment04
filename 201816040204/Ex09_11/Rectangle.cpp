#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(double L, double W)
{
     setLength(L);
     setWidth(W);
}
void Rectangle::setLength(double L)
{
    Length = L;
}
double Rectangle::getLength()
{
    return Length;
}
void Rectangle::setWidth(double W)
{
    Width = W;
}
double Rectangle::getWidth()
{
    return Width;
}
double Rectangle::area()
{
    double area;
    area = Length * Width;
    return area;
}
double Rectangle::perimeter()
{
    double perimeter;
    perimeter = 2 * Length + 2 * Width;
    return perimeter;

}
