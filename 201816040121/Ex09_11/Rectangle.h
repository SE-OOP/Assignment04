//Ex09_11:Rectangle.h
//Rectangle class definition.
#include <iostream>
using namespace std;

//Rectangle class definition
class Rectangle
{
public:
    //constructor length and width
    Rectangle(double l = 1.0, double w = 1.0);
    void setLength(double l);//fuction to set the length
    double getLength();//fuction to retrieve length
    void setWidth(double w);//fuction to set the width
    double getWidth();//fuction to retrieve width
    double perimeter(double l, double w);//calculator the perimeter
    double area(double l, double w);//calculator the area
private:
    double length;
    double width;
};
