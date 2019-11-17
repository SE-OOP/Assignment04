#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

class Rectangle
{
public:
    explicit Rectangle(double=1.0,double=1.0);
    void setLength(double);
    void setWidth(double);
    double Perimeter();
    double Area();
    void Range();
private:
    double length;
    double width;
    double perimeter;
    double area;
};



#endif // RECTANGLE_H_INCLUDED
