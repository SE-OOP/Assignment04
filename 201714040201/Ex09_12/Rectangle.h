//Rectangle.h

//Rectangle class definition
//member function define in Rectangle.cpp
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include"Point.h"

class Rectangle{
public:
    Rectangle(const Point&,const Point&,const Point&,const Point&);//default constructor
    void setFirst(const Point &);//set first point coordinate
    void setSecond(const Point &);//set second point coordinate
    void setThird(const Point &Third);//set third point coordinate
    void setFourth(const Point &Fourth);//set fourth point coordinate
    void judgeRectangle();//judge is or not a rectangle
    void judgeSquare();//get rectangle of length
    double getLength();//get rectangle of width
    double getWidth();//get rectangle of perimeter
    double getPerimeter();//get rectangle of area
    double getArea();//judge is or not a square
private:
    Point first;
    Point second;
    Point third;
    Point fourth;
};//end class Rectangle

#endif // RECTANGLE_H
