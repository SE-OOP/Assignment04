using namespace std;
#include"Point.h"
// Rectangle class definition
class Rectangle
{
public:
    Rectangle( Point &,  Point &,  Point &,  Point &);
    void setlength(double);
    bool judge();
    void length();
    void  area();
    void perimeter();

    private:
        double width;
        double length;
    double area;
    double perimeter;
    Point p1;
    Point p2;
    Point P3;
    Point p4;


};
