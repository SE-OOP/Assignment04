#include "Point.h"
#include <iostream>
using namespace std;

class Rectangle {
public:
	Rectangle() { while (!input()); }
	Rectangle(const Point &pLU, const Point &pLD, const Point &pRU, const Point &pRD);
	bool setP(const Point &pLU, const Point &pLD, const Point &pRU, const Point &pRD);
	void setPLU(const Point &pLU);
	void setPLD(const Point &pLD);
	void setPRU(const Point &pRU);
	void setPRD(const Point &pRD);
	Point getPLU() const;
	Point getPLD() const;
	Point getPRU() const;
	Point getPRD() const;
	double getLength() const;		//Get the length of the rectangle
	double getWidth() const;		//Get the width of the rectangle
	double getPerimeter() const;	//Get the perimeter of the rectangle
	double getArea() const;			//Get the area of the rectangle
	bool checkSquare() const;		//check if the rectangle is a square
	bool input();
private:
	Point pLU, pLD, pRU, pRD;
};
