

//#include <Rectangle.h>
#include <iostream>

#include "Rectangle.h"



using namespace std;
Rectangle::Rectangle(float l,float w)

{

    setLength(l);

    setWidth(w);

}

void Rectangle::setLength(float l)

{

    if(length>0&&length<20){

        length=l;

    }

    else

    {

        length=1;

    }

}

void Rectangle::setWidth(float w)

{

    if(width>0&&width<20)

    {

        width=w;

    }

    else

    {

        width=1;

    }

}

float Rectangle::getLength()

{

    return length;

}

float Rectangle::getWidth()

{

    return width;

}
float getperimeter()
{
    return perimeter=(getlength()+getwidth())*2;
}
float getarea()
{
    return aeea=getlength()*getwidth();
}
