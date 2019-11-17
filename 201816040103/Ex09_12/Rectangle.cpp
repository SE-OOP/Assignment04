#include <iostream>
#include <string>
#include <cmath>
#include "Rectangle.h"
#include "Point.h"
using namespace std;

Rectangle::Rectangle(Point al,Point bl,Point cl,Point dl): a(al),b(bl),c(cl),d(dl){
	setLength(al,bl,cl,dl);
	setWidth(al,bl,cl,dl); 
}
void Rectangle::setLength(Point a1,Point b1,Point c1,Point d1)
{
	double m,n;
	if(a1.getX()==b1.getX())
	{
		m=fabs(a1.getY()-b1.getY());
		n=fabs(a1.getX()-c1.getX());
		length=max(m,n);
	}
	else if(a1.getX()==c1.getX())
	{
		m=fabs(a1.getY()-c1.getY());
		n=fabs(a1.getX()-b1.getX());
		length=max(m,n);
	}
	else if(a1.getX()==d1.getX())
	{
		m=fabs(a1.getY()-d1.getY());
		n=fabs(a1.getX()-b1.getX());
		length=max(m,n);
	}
}
double Rectangle::getLength()
{	
	return length;
}

void Rectangle::setWidth(Point a1,Point b1,Point c1,Point d1)
{
	double m,n;
	if(a1.getX()==b1.getX())
	{
		m=fabs(a1.getY()-b1.getY());
		n=fabs(a1.getX()-c1.getX());
		width=min(m,n);
	}
	else if(a1.getX()==c1.getX())
	{
		m=fabs(a1.getY()-c1.getY());
		n=fabs(a1.getX()-b1.getX());
		width=min(m,n);
	}
	else if(a1.getX()==d1.getX())
	{
		m=fabs(a1.getY()-d1.getY());
		n=fabs(a1.getX()-b1.getX());
		width=min(m,n);
	}
	
}

double Rectangle::getWidth()
{
	return width;
}

double Rectangle::perimeter()
{
	return (length + width +length + width) ;
		
}

double Rectangle::area()
{
	return (length * width); 
}

void Rectangle::square()
{
	if(length==width)
		cout<<"这是一个正方形"<<endl;
	else
		cout<<"这是一个长方形但不是一个正方形" <<endl; 
}


