#include <iostream>
#include "Point.h"
#include "RectanglePro.h"
using namespace std;

int main()
{
	//constructor four points and a rectangle
	Point point1(1, 1), point2(5, 1), point3(5, 3), point4(1, 3);
	RectanglePro rectangle(point1, point2, point3, point4);

	//display messages of rectangle
	cout << "The length of rectangle is :" << rectangle.getLength() << endl;
	cout << "The width of rectangle is :" << rectangle.getWidth() << endl;
	cout << "The perimeter of rectangle is :" << rectangle.getPerimeter() << endl;
	cout << "The area of rectangle is :" << rectangle.getArea() << endl;
	return 0;
}
