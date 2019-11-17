#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include <string> // program uses C++ standard string class
using namespace std;


class Rectangle
{
public:
      Rectangle(double ,double );
      void setlength(double length2);
      double getlength();
      void setwidth(double width2);
      double getwidth();
      double perimeter(double length,double width) ;
      double area(double length,double width);
private:
      double length;
      double width;
};
#endif // RECTANGLE_H_INCLUDED

