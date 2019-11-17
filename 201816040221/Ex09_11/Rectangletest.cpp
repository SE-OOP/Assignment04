#include <iostream>


#include "Rectangle.h"

using namespace std;



int main()
{
     Rectangle rectangle1(3.3,9.5);

    Rectangle rectangle2(20.6,5.7);

    cout << "rectangle1: length= "<< rectangle1.getLength()<<" width= "<<rectangle1.getWidth()<<"rectangle1:perimeter="<<rectangle1.getperimeter()<<endl;

    cout << "rectangle2: length= "<< rectangle2.getLength()<<" width= "<<rectangle2.getWidth()<<"rectangle2:area"<<rectangle2.getarea()endl;

    return 0;
}


