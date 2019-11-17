#include<iostream>
#include<string>


class Rectangle
{

public:
    Rectangle(double ,double );
    double perimeter();
    double area();
    void setlength(double );
    void setwidth(double  );
    void draw();
    void setCharacter(char out);
    void setPerimeterCharacter(char in);
    double getlength();
    double getwidth();
private:
    double Length;
    double Width;
    char outnumber;
    char innumber;

};




