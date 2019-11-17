#include <iostream>
#include <math.h>
using namespace std;

#include "Rectangle.h"
#include "Point.h"

 Rectangle::Rectangle (Point a, Point b,Point c,Point d, double L1,double L2, double W1,double W2, double P, double A)
{
    setPoint(a,b,c,d);

    setLength(L1,L2);
    setWidth(W1,W2);
    setPerimeter(P);
    setArea(A);
}

void Rectangle::setPoint(Point a, Point b,Point c,Point d)
{
        Point1=a;
        Point2=b;
        Point3=c;
        Point4=d;
}
 void Rectangle::setLength(double len1 , double len2)
{
    len1=sqrt((Point1.getX()-Point2.getX())*(Point1.getX()-Point2.getX())+(Point1.getY()-Point2.getY())*(Point1.getY()-Point2.getY()));
    len2=sqrt((Point4.getX()-Point3.getX())*(Point4.getX()-Point3.getX())+(Point4.getY()-Point3.getY())*(Point4.getY()-Point3.getY()));
    if(len1==len2)
    {
        length=len1;
    }
    else
    {
        cout<<"It's not a rectangle !"<<endl;
    }


} /* Define a set function for the length data members and judging whether the opposite sides are equal or not */

double Rectangle::getLength()/* Define a get function for the length data member. */
{
    return length;
}

  void Rectangle::setWidth( double wid1, double wid2/*, double x1,double x2,double x3, double x4,double y1, double y2, double y3, double y4*/)
{
    wid2=sqrt((Point1.getX()-Point4.getX())*(Point1.getX()-Point4.getX())+(Point1.getY()-Point4.getY())*(Point1.getY()-Point4.getY()));
    wid1=sqrt((Point2.getX()-Point3.getX())*(Point2.getX()-Point3.getX())+(Point2.getY()-Point3.getY())*(Point2.getY()-Point3.getY()));
    if(wid1==wid2)
    {
        width=wid1;
    }
    else
    {
        cout<<"It's not a rectangle !"<<endl;
    }
} /* Define a set function for the width data member. */

double Rectangle::getWidth()/* Define a get function for the width data member. */
{
    return width;
}

void Rectangle::rectangle()
{


   if(sqrt(length*length + width*width)==sqrt((Point1.getX()-Point3.getX())*(Point1.getX()-Point3.getX())+(Point1.getY()-Point3.getY())*(Point1.getY()-Point3.getY())))

   {
      cout<<"It's a rectangle !"<<endl;
   }
   else
   {
      cout<<"It's not a rectangle !"<<endl;

   }
}
void Rectangle::square()
{
    if(sqrt(length*length + width*width)==sqrt((Point1.getX()-Point3.getX())*(Point1.getX()-Point3.getX())+(Point1.getY()-Point3.getY())*(Point1.getY()-Point3.getY()))&&length==width)
    {
      cout<<"It's a square !"<<endl;

    }
    else
    {
        cout<<"It's not a square !"<<endl;

    }
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
