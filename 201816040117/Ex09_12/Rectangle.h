#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include "Descartes.h"
class  Rectangle
{public:
    Rectangle(double a,double b,double c,double d,double e,double f,double g,double h);//constructor
    double perimeter();
    double area();
    double getLength();
    double getWidth();
    bool judge();
    void square();
private:
    Descartes coordinate1;
    Descartes coordinate2;
    Descartes coordinate3;
    Descartes coordinate4;
    double length;
    double width;
};

#endif // RECTANGLE_H_INCLUDED
