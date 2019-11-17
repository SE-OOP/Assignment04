#include "Rectangle.h"

Rectangle::Rectangle(float wid, float leng)
{
    setlength(leng);
    setwidth(wid);
}

void Rectangle::setlength(float leng)
{
    if(leng>0&&leng<20)
        length = leng;
    else
        length =1;
}

void Rectangle::setwidth(float wid)
{
    if(wid>0&&wid<20)
        width = wid;
    else
        width =1;
}

float Rectangle::getlength()
{
    return length;
}

float Rectangle::getwidth()
{
    return width;
}

float Rectangle::getperimeter()
{
    return 2*(length+width);
}

float Rectangle::getarea()
{
    return width*length;
}
