#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
class Rectangle
{
public:
    Rectangle(double pon1_x, double pon1_y, double pon2_x, double pon2_y, double pon3_x, double pon3_y, double pon4_x, double pon4_y);
    double perimeter();
    double area();
    void setLength(double);
    double getLength();
    void setWidth(double);
    double getWidth();
private:
    double length = 1,width = 1;

};

#endif // RECTANGLE_H_INCLUDED
