#ifndef PECTANGLE_H_INCLUDED
#define PECTANGLE_H_INCLUDED
using namespace std;

class Rectangle
{
public:
    Rectangle(double,double);
    void setPerimeter(double,double);
    void setArea(double,double);
    double getPerimeter()const;
    double getArea()const;
private:
    double perimeter;
    double area;
};

#endif // PECTANGLE_H_INCLUDED
