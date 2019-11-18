//Ex09_11.cpp
#include<iostream>
#include "Rectangle.h"//include definition of class Rectangle from Rectangle.h

using namespace std;


int main()
{
    //create Rectangle objects
    Rectangle rectangle1;
    Rectangle rectangle2(10,15.5);

    //print Rectangle objects of perimeter and area
    rectangle1.printPerimeter();
    rectangle1.printArea();
    rectangle2.printPerimeter();
    rectangle2.printArea();
}//end main;
