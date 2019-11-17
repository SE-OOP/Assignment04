#include <iostream>
#include "Point.h"
using namespace std;
//constructor two coordinate
Point::Point(double a, double b)
{
	if ((a > 0 && a <= 20) && (b >0 && b <= 20))
	{
		x = a;
		y = b;
	}
	else
		cout << "Point is out of range" << endl;
}

//fuction to retrieve x
double Point::getX()
{
	return x;
}

//fuction to retrieve y
double Point::getY()
{
	return y;
}
