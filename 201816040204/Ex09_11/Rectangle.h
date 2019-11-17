#include <iostream>
#include<string>
using namespace std;

class Rectangle
{
public:
    Rectangle( double, double);
    void setLength(double);
    void setWidth(double);
    double getLength();
    double getWidth();
    double perimeter();
    double area();
private:
    double Length;
    double Width;

};
