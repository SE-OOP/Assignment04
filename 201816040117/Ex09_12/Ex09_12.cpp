#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Rectangle.h"
#include "Descartes.h"
using namespace std;
int main()
{
    Rectangle rectangle1(10,10,15,10,10,5,15,5);//construct object rectangle1
    cout<<"rectangle1 "<<"length: "<<rectangle1.getLength()<<" with: "<<rectangle1.getWidth()<<" perimeter: "
    <<rectangle1.perimeter()<<" area: "<<rectangle1.area()<<"\n";//output
    rectangle1.square();//judge if it's a square
  return 0;
}
