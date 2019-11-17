#include <iostream>
#include "Rectangle.h"
#include "Point.h"

using namespace std;
int main()
{
   Point point1(2.0,3.0); //create four Point object
   Point point2(4.0,3.0);
   Point point3(2.0,5.0);
   Point point4(4.0,5.0);
   Rectangle rectangle1(point1,point2,point3,point4); //create a Rectangle object
   cout << "The rectangle's length is: " << rectangle1.Length() << "\n";
   cout << "The rectangle's width is: " << rectangle1.Width() << "\n";
   cout << "The rectangle's perimeter is: " << rectangle1.Perimeter() << "\n";
   cout << "The rectangle's area is: " << rectangle1.Area() << "\n";
   cout << "Is the rectangle a square? " ;
   rectangle1.Square() ;

    return 0;

}
