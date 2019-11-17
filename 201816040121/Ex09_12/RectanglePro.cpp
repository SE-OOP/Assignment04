#include <iostream>
#include <math.h>
#include "Point.h"
#include "RectanglePro.h"
using namespace std;

//calculator the distance between two points
double distance(double a, double b, double c, double d)
{
	return sqrt((a - b) * (a - b) + (c - d) * (c - d));
}

//constructor four coordinates
RectanglePro::RectanglePro(Point& cn1, Point& cn2, Point& cn3, Point& cn4)
	:c1( cn1 ),
	 c2( cn2 ),
	 c3( cn3 ),
	 c4( cn4 )
{
	setPoint();
}

//fuction to set the point
void RectanglePro::setPoint()
{
	double x1, x2, x3, x4;
	double y1, y2, y3, y4;
	x1 = c1.getX();
	x2 = c2.getX();
	x3 = c3.getX();
	x4 = c4.getX();
	y1 = c1.getY();
	y2 = c2.getY();
	y3 = c3.getY();
	y4 = c4.getY();
	double AB, BC, CD, DA, AC, BD;
	AB = distance(x1, x2, y1, y2);
	BC = distance(x2, x3, y2, y3);
	CD = distance(x3, x4, y3, y4);
	DA = distance(x4, x1, y4, y1);
	AC = distance(x1, x3, y1, y3);
	BD = distance(x2, x4, y2, y4);
	if ((AB * AB + BC * BC) == AC * AC || (BC * BC + CD * CD) == BD * BD)
	{
		cout << "This is a rectangle." << endl;
	}
}

//fuction to retrieve length
double RectanglePro::getLength()
{
	double AB, BC, CD, DA;
	double x1, x2, x3, x4;
	double y1, y2, y3, y4;
	x1 = c1.getX();
	x2 = c2.getX();
	x3 = c3.getX();
	x4 = c4.getX();
	y1 = c1.getY();
	y2 = c2.getY();
	y3 = c3.getY();
	y4 = c4.getY();
	AB = distance(x1, x2, y1, y2);
	BC = distance(x2, x3, y2, y3);
	CD = distance(x3, x4, y3, y4);
	DA = distance(x4, x1, y4, y1);
	if (AB != BC)
	{
		if (AB > BC)
			return AB;
		else
			return BC;
	}
	else
	{
		if (AB > CD)
			return AB;
		else
			return CD;
	}
}


//fuction to retrieve width
double RectanglePro::getWidth()
{
	double AB, BC, CD, DA;
	double x1, x2, x3, x4;
	double y1, y2, y3, y4;
	x1 = c1.getX();
	x2 = c2.getX();
	x3 = c3.getX();
	x4 = c4.getX();
	y1 = c1.getY();
	y2 = c2.getY();
	y3 = c3.getY();
	y4 = c4.getY();
	AB = distance(x1, x2, y1, y2);
	BC = distance(x2, x3, y2, y3);
	CD = distance(x3, x4, y3, y4);
	DA = distance(x4, x1, y4, y1);
	
	if (AB != BC)
	{
		if (AB < BC)
			return AB;
		else
			return BC;
	}
	else
	{
		if (AB < CD)
			return AB;
		else
			return CD;
	}
}

//fuction to retrieve perimeter
double RectanglePro::getPerimeter()
{

	double AB, BC, CD, DA;
	double x1, x2, x3, x4;
	double y1, y2, y3, y4;
	x1 = c1.getX();
	x2 = c2.getX();
	x3 = c3.getX();
	x4 = c4.getX();
	y1 = c1.getY();
	y2 = c2.getY();
	y3 = c3.getY();
	y4 = c4.getY();
	AB = distance(x1, x2, y1, y2);
	BC = distance(x2, x3, y2, y3);
	CD = distance(x3, x4, y3, y4);
	DA = distance(x4, x1, y4, y1);

	double perimeter;
	perimeter = (AB + BC + CD + DA);
	return perimeter;
}

//fuction to retrieve area
double RectanglePro::getArea()
{
	double AB, BC, CD, DA;
	double x1, x2, x3, x4;
	double y1, y2, y3, y4;
	x1 = c1.getX();
	x2 = c2.getX();
	x3 = c3.getX();
	x4 = c4.getX();
	y1 = c1.getY();
	y2 = c2.getY();
	y3 = c3.getY();
	y4 = c4.getY();
	AB = distance(x1, x2, y1, y2);
	BC = distance(x2, x3, y2, y3);
	CD = distance(x3, x4, y3, y4);
	DA = distance(x4, x1, y4, y1);

	double area;
	if (AB != BC)
	{
		area = AB * BC;
	}
	else
		area = AB * CD;
	return area;
}

//fuction to judge shape
bool RectanglePro::square()
{
	double AB, BC, CD, DA;
	double x1, x2, x3, x4;
	double y1, y2, y3, y4;
	x1 = c1.getX();
	x2 = c2.getX();
	x3 = c3.getX();
	x4 = c4.getX();
	y1 = c1.getY();
	y2 = c2.getY();
	y3 = c3.getY();
	y4 = c4.getY();
	AB = distance(x1, x2, y1, y2);
	BC = distance(x2, x3, y2, y3);
	CD = distance(x3, x4, y3, y4);
	DA = distance(x4, x1, y4, y1);

	if ((AB == BC) && (AB == CD) && (AB == DA))
		return true;
	else
		return false;
}
