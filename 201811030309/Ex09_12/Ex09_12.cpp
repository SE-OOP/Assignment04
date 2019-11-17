#include <iostream>
#include "Point.h"
#include "Rectangle.h"

using namespace std;

int main()
{
    Point point1;
    Rectangle rectangle1(point1);
    cout << "the length is: " << rectangle1.length() <<endl;
    cout << "the width is: " << rectangle1.width() <<endl;
    cout << "the perimeter is: " << rectangle1.perimeter() <<endl;
    cout << "the area is: " << rectangle1.area() <<endl;
    rectangle1.square();

    cout << "\n\nafter setxy is: " <<endl;
    double x1, x2, y1, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    point1.setxy(x1,y1,x2,y2,x3,y3,x4,y4);
    Rectangle rectangle2(point1);
    cout << "the length is: " << rectangle2.length() <<endl;
    cout << "the width is: " << rectangle2.width() <<endl;
    cout << "the perimeter is: " << rectangle2.perimeter() <<endl;
    cout << "the area is: " << rectangle2.area() <<endl;
    rectangle2.square();

}
