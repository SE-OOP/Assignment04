#include <iostream>
using namespace std;

#include "Rectangle.h"

int main()
{
   Rectangle rectangle1; //create a Rectangle object named rectangle1
    cout << "The rectangle's perimeter is: " << rectangle1.Perimeter(11.2,11.4) << "\n"; //print the perimeter of the rectangle
    cout << "The rectangle's area is: " << rectangle1.Area(11.2,11.4) << endl; //print the area of the rectangle
    return 0;

}

