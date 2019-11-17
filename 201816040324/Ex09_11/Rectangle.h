#include <string>
using namespace std ;
class Rectangle
{
public:
    Rectangle (double=1,double=1) ;
    void setWidth(double) ;
    void setLength(double) ;
    double getWidth() ;
    double getLength() ;
    double perimeter() ;
    double area() ;
    void display() ;
private:
    double width ;
    double length ;
};
