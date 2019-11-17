#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Rectangle.h"

using namespace std;
int main()
{

    Rectangle rectangle1;//to construct object rectangle1
    Rectangle rectangle2(9,6);//to construct object rectangle2
    cout<<"rectangle1  "<<"length: "<<rectangle1.getLength()<<" width: "<<rectangle1.getWidth()<<" perimeter: "
    <<rectangle1.perimeter()<<" area: "<<rectangle1.area()<<"\n";//output rectangle1
    cout<<"rectangle2  "<<"length: "<<rectangle2.getLength()<<" width: "<<rectangle2.getWidth()<<" perimeter: "
    <<rectangle2.perimeter()<<" area: "<<rectangle2.area()<<"\n";//output rectangle2
    rectangle1.setAll(17,9);//reset rectangle1
    rectangle2.setLength(16);//reset rectangle2
    cout<<"after changed:\n";//prompt
     cout<<"rectangle1  "<<"length: "<<rectangle1.getLength()<<" width: "<<rectangle1.getWidth()<<" perimeter: "
    <<rectangle1.perimeter()<<" area: "<<rectangle1.area()<<"\n";//output
    cout<<"rectangle2  "<<"length: "<<rectangle2.getLength()<<" width: "<<rectangle2.getWidth()<<" perimeter: "
    <<rectangle2.perimeter()<<" area: "<<rectangle2.area()<<"\n";//output
  return 0;
}
