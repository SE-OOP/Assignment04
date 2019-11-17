#ifndef POINT_H
#define POINT_H

#include <iostream>

using namespace std ;
class Point
{
public:
    Point(int=0, int=0) ;
    void setx(int) ;
    void sety(int) ;
    int getx() ;
    int gety() ;
    bool right () ;
    int distance(Point, Point) ;
private:
    int x ;
    int y ;

};
#endif
