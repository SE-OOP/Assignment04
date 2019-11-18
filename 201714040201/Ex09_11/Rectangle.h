//Rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H


//class Rectangle definition
class Rectangle
{
public:
    Rectangle(float =1.0,float =1.0);//default constructor
    void setLength(float );//set values of length
    float getLength()const;//return length value
    void setWidth(float );//set values of width
    float getWidth()const;// return width value
    void printPerimeter()const;//print perimeter in the format
    void printArea()const;//print area in the format
private:
    float length;//
    float width;
};//end class Rectangle

#endif
