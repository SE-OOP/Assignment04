#ifndef POINT_H
#define POINT_H

using namespace std;

class Point
{
	friend class Rectangle;
public:
	Point(double,double);
	void setXY(double,double);
	void setX(double);
	void setY(double);
	double getX();
	double getY();
private:
	double x;
	double y;		
};
#endif
