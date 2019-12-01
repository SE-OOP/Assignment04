// Exercise 9.18 Solution: Ex09_12.cpp
#include <iostream>
#include <stdexcept>
#include "Rectangle.h" // include definition of class Rectangle
using namespace std;

int main()
{
   Point w( 1.0, 1.0 );  
   Point x( 5.0, 1.0 );
   Point y( 5.0, 3.0 );  
   Point z( 1.0, 3.0 );
   Point j( 0.0, 0.0 ); 
   Point k( 1.0, 0.0 );
   Point m( 1.0, 1.0 );  
   Point n( 0.0, 1.0 );

   Rectangle r1( z, y, x, w );
   cout << "Rectangle 1:\n";
   cout << "length = " << r1.length();
   cout << "\nwidth = " << r1.width();
   r1.perimeter();
   r1.area();
   cout << "The rectangle " 
      << ( r1.square() ? "is" : "is not" )
      << " a square.\n";

   Rectangle r2( j, k, m, n );
   cout << "\nRectangle 2:\n";
   cout << "length = " << r2.length();
   cout << "\nwidth = " << r2.width();
   r2.perimeter();
   r2.area();
   cout << "The rectangle " 
      << ( r2.square() ? "is" : "is not" )
      << " a square.\n";

   try
   {
      Rectangle r3( w, x, m, n );
   }
   catch ( invalid_argument &e )
   {
      cout << "\nNot a valid Rectangle" << endl;
   }

   try
   {
      Point v( 99.0, -2.3 );
   }
   catch ( invalid_argument &e )
   {
      cout << "Not a valid Point" << endl;
   }
} // end main


/**************************************************************************
 * (C) Copyright 1992-2010 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/


