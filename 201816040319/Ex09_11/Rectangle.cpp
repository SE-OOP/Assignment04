#include <iostream>
#include "Rectangle.h"
#include <stdexcept>
using namespace std;

Rectangle::Rectangle()
    :length(0.0),width(0.0)
    {

    }
void Rectangle::setRectangle(double Length,double Width)
{
    if((Length<20.0&&Length>0.0)&&(Width>0.0&&Width<20.0))
    {
        length=Length;
        width=Width;
    }
  /*  else
       thow invalide_argument(
        "length,OR width was out of range");

*/}//end function rectangle

double Rectangle::perimenter()
{
    return (2*length+2*width);
}//end function perimenter;

double Rectangle::area()
{
    return length*width;
}
//end function area;
