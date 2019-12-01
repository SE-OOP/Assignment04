// Exercise 9.11 Solution: Rectangle.cpp
// Member-function definitions for class Rectangle.
#include <stdexcept>
#include "Rectangle.h" // include definition of class Rectangle
using namespace std;

Rectangle::Rectangle( double w, double l )
{
   setWidth(w); // invokes function setWidth
   setLength(l); // invokes function setLength
} // end Rectangle constructor

void Rectangle::setWidth( double w ) 
{ 
   if ( w > 0 && w < 20.0 )
      width = w;
   else
      throw invalid_argument( "width must be > 0 and < 20.0" );
} // end function setWidth

void Rectangle::setLength( double l ) 
{ 
   if ( l > 0 && l < 20.0 )
      length = l;
   else
      throw invalid_argument( "length must be > 0 and < 20.0" );
} // end function setLength

double Rectangle::getWidth() 
{ 
   return width; 
} // end function getWidth

double Rectangle::getLength() 
{
   return length; 
} // end function getLength

double Rectangle::perimeter() 
{ 
   return 2 * ( width + length ); // returns perimeter	
} // end function perimeter

double Rectangle::area() 
{ 
   return width * length; // returns area
} // end function area

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


