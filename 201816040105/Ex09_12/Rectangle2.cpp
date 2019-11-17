#include <iostream>
#include "Rectangle2.h"
using namespace std;

Rectangle2::Rectangle2(double a,double b,double c,double d,double e,double f,double g,double h)
{
	Coordinate(a,b,c,d,e,f,g,h);
}

void Rectangle2::Coordinate(double a,double b,double c,double d,double e,double f,double g,double h)
{
	if (a>=0.0&&a<20&&b>=0.0&&b<20.0)
	{
		x1=a;
		y1=b;
	}
	if (c>=0.0&&c<20&&d>=0.0&&d<20.0&&a==c)
	{
		x2=c;
		y2=d;
	}
	if (e>=0.0&&e<20&&f>=0.0&&f<20.0&&d==f)
	{
		x3=e;
		y3=f;
	}
	if (g>=0.0&&g<20&&h>=0.0&&h<20.0&&g==e&&h==b)
	{
		x4=g;
		y4=h;
	}
}

double Rectangle2::Length()
{
	double a,b;
	a=x4-x1;
	b=y1-y2;
	if (a>b)
	return a;
	else 
	return b;
}

double Rectangle2::Width()
{
	double a,b;
	a=x4-x1;
	b=y1-y2;
	if (a<b)
	return a;
	else 
	return b;
}

double Rectangle2::Perimeter()
{
	double a,b;
	a=Length();
	b=Width();
	double perimeter=(a+b)*2;
	return perimeter;
}
double Rectangle2::Area()
{
	double a,b;
	a=Length();
	b=Width();
	double area=a*b;
	return area;
}

void Rectangle2::square()
{
	double a,b;
	a=Length();
	b=Width();
	if (a=b)
	cout<<"Square"<<endl;
	else
	cout<<"Not Square"<<endl;
}
