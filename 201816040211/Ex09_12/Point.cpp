#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

Point::Point(double length1,double width1)
     : length(length1),
       width(width1)
{

}


double Point::perimeter(double length,double width)
{
    return length*2+width*2;
}// end perimeter

double Point::area(double length, double width)
{
    return length*width;
}// end area

void Point::square(double length, double width)
{
    if(length==width)
      cout<<"this is square"<<endl;
    else
      cout<<"this is not square"<<endl;
}// end square
