#include"Rectangle.h"
using namespace std;
#include<string.h>
Rectangle::Rectangle(double=1,double=1)
: length(1),width(1)
    {

    }
    void Rectangle::setlength(double a)
    {
        if((a-0.0>1e-10)&&(20.0-a>1e-10))
        length=a;
        else
            throw invalid_argument("WRONG ERROR");
    }
    void  Rectangle::setwidth(double b)
    {
        if((b-0.0>1e-10)&&(20.0-b>1e-10))
        width=b;
        else
            throw invalid_argument("WRONG ERROR");
    }
    double Rectangle::getlength()  const
    {
        return length;
    }
    double Rectangle::getwidth()  const
    {
        return width;
    }
    double Rectangle::perimeter() const
    {
        double meter=2*(getlength()+getwidth());
        return meter;
    }

    double  Rectangle::area()  const
    {
        double s;
        s=getlength()*getwidth();
        return s;
    }
