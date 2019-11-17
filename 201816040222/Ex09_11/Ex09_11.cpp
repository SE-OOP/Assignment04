#include <iostream>
using namespace std;

#include "Rectangle.h"

int main()
{
    Rectangle rectangle(1.0, 1.0);
    double a;
    double b;
    cout << "Please enter length and width:" << endl;
    cin >> a >> b;
    rectangle.setLength(a);
    rectangle.setWidth(b);
    cout << "The Perimeter is: "<< rectangle.getPerimeter() << endl;
    cout <<"The Area is :" << rectangle.getArea();
   return 0;
}
