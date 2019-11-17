#include <iostream>
#include"Rectangle.h"
using namespace std;

int main()
{
    Rectangle d(2.4, 1.1);
    double Length, Width, area, perimeter;
    cout << "Length: " <<  d.getLength() << endl;
    cout << "Width: "<< d.getWidth() << endl;
    cout << "perimeter: " << d.perimeter() <<endl;
    cout << "area: " << d.area() << endl;
}
