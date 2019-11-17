#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
    public:
        Rectangle(double,double);
        void setLength(double);
        double getLength();
        void setWidth(double);
        double getWidth();
        double getPerimeter(); // calculate perimeter
        double getArea(); // calculate area
    private:
        double length;
        double width;
};
#endif
