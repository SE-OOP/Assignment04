#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle a(1.0, 1.0);
    double perimeter, area;
    perimeter=a.perimeter(a.getLength(),a.getWidth());
    area=a.area(a.getLength(),a.getWidth());
    cout << "该长方形的周长为: " << perimeter << endl;
    cout << "该长方形的面积为: " << area << endl;
}
