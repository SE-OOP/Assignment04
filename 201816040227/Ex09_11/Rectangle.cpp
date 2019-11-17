#include <iostream>
using namespace std;

#include "Rectangle.h"

Rectangle::Rectangle (double L, double W, double P, double A)
{
    setLength(L);
    setWidth(W);
    setPerimeter(P);
    setArea(A);
}
 void Rectangle::setLength( double a )
{
   if(a>0.0 && a<20)
        {
             length=a;
        }
       else
        {
            length=1.0;
        }
} /* Define a set function for the length data member. */

double Rectangle::getLength()/* Define a get function for the length data member. */
{
    return length;
}

  void Rectangle::setWidth( double a )
{
   if(a>0.0 && a<20)
        {
             width=a;
        }
       else
        {
            width=1.0;
        }
} /* Define a set function for the width data member. */

double Rectangle::getWidth()/* Define a get function for the width data member. */
{
    return width;
}

void Rectangle::setPerimeter(double)
{
   perimeter= 2*(length + width);
} /* Define a set function for the Perimeter data member. */

double Rectangle::getPerimeter()/* Define a get function for the Perimeter data member. */
{
    return perimeter;
}

void Rectangle::setArea( double)
{
   area= length * width;
} /* Define a set function for the area data member. */

double Rectangle::getArea()/* Define a get function for the area data member. */
{
    return area;
}
