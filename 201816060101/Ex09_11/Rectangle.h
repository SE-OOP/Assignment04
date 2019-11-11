#include <iostream>
using namespace std;

class Rectangle {
public:
	Rectangle();	//Declare constructor
	void setLength(const double length);	//Declare setLength function
	void setWidth(const double width);	//Declare setWidth function
	double getLength() const;	//Declare getLength function
	double getWidth() const;	//Declare getWidth function
	double getPerimeter() const;	//Declare getPerimeter function
	double getArea() const;	//Declare getArea function
	void print() const;	//Declare print function
private:
	double length, width;	//Declare member variables
};
