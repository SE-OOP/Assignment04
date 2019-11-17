#include <iostream>
using namespace std;

#include "Rectangle.h"
int main()
{
   Rectangle n( 2.0 , 3.0 , 0.0 , 0.0);/* Create one Rectangle object  */

   cout << "Length:"<< n.getLength()<<endl;
   /* Output the Length */

   cout << "Width:"<< n.getWidth()<<endl;
   /* Output the Width */

   cout << "Perimeter:"<< n.getPerimeter()<<endl;
   /* Output the perimeter */

   cout << "Area:"<< n.getArea()<<endl;
   /* Output the area */


} // end main
