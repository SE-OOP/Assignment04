#include <string>
class Rectangle
{
public:
    Rectangle (double=1.0,double=1.0);
    void setLength(double);
    void setWidth(double);
    double getLength();
    double getWidth();
    int flag(double);
    double perimeter(double,double);
    double area(double,double);
private:
    double Length;
    double Width;
};
