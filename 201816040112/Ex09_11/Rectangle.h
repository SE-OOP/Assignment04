#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

class Rectangle{

public:
    explicit Rectangle(double=1.0,double=1.0);
    void setlength(double);
    double getlength();
    void setwidth(double);
    double getwidth();
    double perimeter();
    double area();
private:
    double width;
    double length;

};


#endif // RECTANGLE_H_INCLUDED
