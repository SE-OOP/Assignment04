#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Point.h"
using namespace std;
class Rectangle
{
public:
	Rectangle(Point,Point,Point,Point);
	void setLength(Point,Point,Point,Point);
	double getLength();
	void setWidth(Point,Point,Point,Point);
	double getWidth();
	double perimeter();
	double area();
	void square();
private:
	Point a,b,c,d;
	double length;
	double width; 
};
#endif
