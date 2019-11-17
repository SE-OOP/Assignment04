#include "Rectangle.h"

Rectangle::Rectangle(const Point & pLU, const Point & pLD, const Point & pRU, const Point & pRD)
{
	setP(pLU, pLD, pRU, pRD);
}

bool Rectangle::setP(const Point & pLU, const Point & pLD, const Point & pRU, const Point & pRD)
{
	//Check if all of these points are in the first quadrant
	if (pLU.getX() <= 0 || pLU.getX() > 20) return 0;
	if (pLD.getX() <= 0 || pLD.getX() > 20) return 0;
	if (pRU.getX() <= 0 || pRU.getX() > 20) return 0;
	if (pRD.getX() <= 0 || pRD.getX() > 20) return 0;

	//Check if these points can form a rectangle
	if (pLU.getX() != pLD.getX()) return 0;
	if (pRU.getX() != pRD.getX()) return 0;
	if (pLU.getY() != pRU.getY()) return 0;
	if (pLD.getY() != pRD.getY()) return 0;

	setPLU(pLU);
	setPLD(pLD);
	setPRU(pRU);
	setPRD(pRD);
	return 1;
}

void Rectangle::setPLU(const Point & pLU)
{
	this->pLU = pLU;
}

void Rectangle::setPLD(const Point & pLD)
{
	this->pLD = pLD;
}

void Rectangle::setPRU(const Point & pRU)
{
	this->pRU = pRU;
}

void Rectangle::setPRD(const Point & pRD)
{
	this->pRD = pRD;
}

Point Rectangle::getPLU() const
{
	return pLU;
}

Point Rectangle::getPLD() const
{
	return pLD;
}

Point Rectangle::getPRU() const
{
	return pRU;
}

Point Rectangle::getPRD() const
{
	return pRD;
}

double Rectangle::getLength() const
{
	double a = pRU.getX() - pLU.getX();
	double b = pLU.getY() - pLD.getY();
	return a > b ? a : b;
}

double Rectangle::getWidth() const
{
	double a = pRU.getX() - pLU.getX();
	double b = pLU.getY() - pLD.getY();
	return a < b ? a : b;
}

double Rectangle::getPerimeter() const
{
	return 2 * (getLength() + getWidth());
}

double Rectangle::getArea() const
{
	return getLength() * getWidth();
}

bool Rectangle::checkSquare() const
{
	return getLength() == getWidth();
}

bool Rectangle::input()
{
	double x[4], y[4];
	cout << "Please enter the coordinates of the top left, bottom left, top right and bottom right points, separed by a space character: \n";
	for (int i = 0; i < 4; i++) {
		cin >> x[i] >> y[i];
	}
	bool f = setP(Point(x[0], y[0]), Point(x[1], y[1]), Point(x[2], y[2]), Point(x[3], y[3]));
	if (!f) cout << "Invalid value!\n";
	else cout << "Successful information entry!\n";
	return f;
}
