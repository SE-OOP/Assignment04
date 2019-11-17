//Ex09_11:RectangleTest.cpp
#include <iostream>
using namespace std;
#include "Rectangle.h"
int main()
{
    double l = 5.7, w = 7.5;
    Rectangle rec1(l, w), rec2(3.6, 21);//create two Rectangle objects
    /*display messages of every object*/
    cout << "The length of rec1 is " << rec1.getLength() << endl
         << "The width of rec1 is " << rec1.getWidth() << endl
         << "The perimeter of rec1 is " << rec1.perimeter(l, w) << endl
         << "The area of rec1 is " << rec1.area(l, w) << endl;

    return 0;
}
