#include "Point.h"
class Rectangle
{
public:
   Rectangle(Point&,Point&,Point&,Point&); // constructor initializes four points
    void setPointA(Point&);  //function to set pointA
    void setPointB(Point&);
    void setPointC(Point&);
    void setPointD(Point&);
    Point getPointA()const; //function to get pointA
    Point getPointB()const;
    Point getPointC()const;
    Point getPointD()const;
    double Length(); //declare function to calculate length
    double Width(); //declare function to calculate width
    double Perimeter(); //declare function to calculate perimeter
    double Area(); //declare function to calculate area
    void Square();
private:
    Point A;
    Point B;
    Point C;
    Point D;
};
