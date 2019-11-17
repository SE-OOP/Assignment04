#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
class  Rectangle
{public:
    Rectangle(double=1,double=1);//constructor
    void setAll(double,double);//function to set length and width
    double perimeter();//return perimeter
    double area();//return area
    void setLength(double);//function to set length
    double getLength();//function to get length
    void setWidth(double);//function to set width
    double getWidth();//function to get width
private:
    double Length;
    double Width;
};

#endif // RECTANGLE_H_INCLUDED
