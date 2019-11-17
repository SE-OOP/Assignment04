#include <iostream>
using namespace std;

#include "Rectangle.h"
#include "Point.h"
int main()
{
   Point point1(0.0,1.0);
   Point point2(1.0,1.0);
   Point point3(1.0,0.0);
   Point point4(0.0,0.0);/* Create one Rectangle object  */


    Rectangle n(point1,point2,point3,point4,0.0,0.0,0.0,0.0,0.0,0.0);

   cout << "Length:"<< n.getLength()<<endl;
   /* Output the Length */
   cout << "Width:"<< n.getWidth()<<endl;
   /* Output the Width */

    n.rectangle();
    n.square();

   cout << "Perimeter:"<< n.getPerimeter()<<endl;
   /* Output the perimeter */

   cout << "Area:"<< n.getArea()<<endl;
   /* Output the area */


} // end main
