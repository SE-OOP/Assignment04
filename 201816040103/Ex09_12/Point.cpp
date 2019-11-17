#include <iostream>
#include "Point.h"

using namespace std;

Point::Point(double xl,double yl)
{
	setXY(xl,yl);
}
void Point::setXY(double xl,double yl)
{
	setX(xl);
	setY(yl);
}
void Point::setX(double xl)
{
	x=xl;
}
void Point::setY(double yl)
{
	y=yl;
} 
double Point::getX()
{
	return x;
 } 
 double Point::getY()
 {
 	return y;
 }
