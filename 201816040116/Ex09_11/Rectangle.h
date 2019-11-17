#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
class Rectangle
{
    public:
        Rectangle(double=1.0,double=1.0);
        void setRectangle(double,double);
        void setlength(double);
        void setwidth(double);
        double getlength();
        double getwidth();
        double Perimeter(double,double);
        double Area(double,double);
        void display();
    private:
        double length;
        double width;
        double perimeter;
        double area;
};
#endif // RECTANGLE_H_INCLUDED
