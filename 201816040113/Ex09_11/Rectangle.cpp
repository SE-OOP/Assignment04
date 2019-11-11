#include<iostream>
using namespace std;
#include "Rectangle.h"

Rectangle::Rectangle(double len,double wid)
{
    setRectangle(len,wid);
}

void Rectangle::setRectangle(double len,double wid)
{
    setLength(len);
    setWidth(wid);
}

void Rectangle::setLength(double L)
{
    if(L>0.0&&L<20.0)
    {
        Length=L;
    }
    else
    {
        Length=-1;//如果长度是无效值，则将其设置为-1
    }
}

double Rectangle::getLength()
{
    return Length;
}

void Rectangle::setWidth(double W)
{
     if(W>0.0&&W<20.0)
    {
        Width=W;
    }
    else
    {
        Width=-1;//如果宽度是无效值，则将其设置为-1
    }

}

double Rectangle::getWidth()
{
    return Width;
}

double Rectangle::perimeter()
{
    return 2*(Length+Width);
}

double Rectangle::area()
{
    return Length*Width;
}
