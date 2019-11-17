#include <iostream>
using namespace std;

#include "Rectangle.h"

int main()
{
    Rectangle rectangle(1.0, 1.0);
    double x1, x2, x3, x4, y1, y2, y3, y4;
    cout << "Please enter four point:" << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >>x4 >> y4;
    rectangle.setLength(x1,y1,x2,y2,x3,y3,x4,y4);
    rectangle.setWidth(x1,y1,x2,y2,x3,y3,x4,y4);
    cout <<"The length is:" << rectangle.getLength() << endl << "The width is :" << rectangle.getWidth() << endl;
    cout << "The Perimeter is: "<< rectangle.getPerimeter() << endl;
    cout <<"The Area is :" << rectangle.getArea();
   return 0;
}
