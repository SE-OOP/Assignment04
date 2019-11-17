#include<iostream>

class Rectangle2
{
	public:
		Rectangle2(double=0,double=0,double=0,double=0,double=0,double=0,double=0,double=0);
		void Coordinate(double,double,double,double,double,double,double,double);
		double Length();
		double Width();
		double Perimeter();
		double Area();
		void square();
	private:
		double x1;
		double y1;
		double x2;
		double y2;
		double x3;
		double y3;
		double x4;
		double y4;
		
};
