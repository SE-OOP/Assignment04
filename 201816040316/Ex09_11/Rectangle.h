#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, width;
public:
    Rectangle():lengh(1);width(1);
    float perimeter();
    float area();
    void setLength(float l);
    void setWidth(float w);
    float getLength(){return length};
    float getWidth(){return width}  ;
};

#endif // RECTANGLE_H_INCLUDED
