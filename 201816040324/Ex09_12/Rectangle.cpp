#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std ;
Rectangle::Rectangle(Point po1,Point po2,Point po3,Point po4)
{
    setPoint (po1, po2, po3, po4) ;
}
void Rectangle::setPoint(Point poi1,Point poi2,Point poi3,Point poi4)
{
    p1=poi1 ;
    p2=poi2 ;
    p3=poi3 ;
    p4=poi4 ;
}
bool Rectangle::firstQuadrant ()
{
    //if (p1.x>=0&&p2.x>=0&&p3.x>=0&&p4.x>=0&&p1.y>=0&&p2.y>=0&&p3.y>=0&&p4.y>=0&&p1.x<=20&&p2.x<=20&&p3.x<=20&&p4.x<=20&&p1.y<=20&&p2.y<=20&&p3.y<=20&&p4.y<=20)
    if(p1.right()&&p2.right()&&p3.right()&&p4.right())
    {
        return true ;
    }
    else
        return false ;
}
 bool Rectangle::rectangle ()
 {
     int a, b, c, d ;
     Point x(0,0) ;
     a=x.distance(p1,p2) ;
     b=x.distance(p2,p3) ;
     c=x.distance(p3,p4) ;
     d=x.distance(p1,p4) ;
     if ((a==b&&d==c)||(a==c&&b==d)||(a==d&&b==c))
     {
         return true ;
     }
     else
     {
         return false ;
     }

 }
int Rectangle:: Rectangular_length()
 {
     int a, c,temp ;
     Point x ;
     a=x.distance(p1,p2) ;
     c=x.distance(p1,p3) ;
     if (a>c)
     {
         temp=a ;
     }
     else{
        temp=c ;
     }

     return temp ;

 }
int Rectangle:: Rectangular_width()
 {
     int a, c, temp ;
     Point x ;
     a=x.distance(p1,p2) ;
     c=x.distance(p1,p3) ;
     if (a<c)
     {
         temp=a ;
     }
     else{
        temp=c ;
     }
     return temp ;

 }
int Rectangle:: Rectangular_perimeter()
 {
     return 2*(Rectangular_length()+Rectangular_width() ) ;
 }
int Rectangle:: Rectangular_area()
 {
     return Rectangular_length()*Rectangular_width() ;
 }
bool Rectangle::square ()
 {
     int a, b, c, d ;
     Point x ;
     a=x.distance(p1,p2) ;
     b=x.distance(p1,p3) ;
     c=x.distance(p3,p4) ;
     d=x.distance(p2,p4) ;
     if (a==b&&b==c&&c==d&&d==a)
     {
         return true ;
     }
     else
     {
         return false ;
     }

 }
