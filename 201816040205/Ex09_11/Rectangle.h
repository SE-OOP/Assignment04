#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
class Rectangle
{
  public:
      Rectangle(double,double);
      void setLength(double);
      void setWidth(double);
      double getLength();
      double getWidth();
      double perimeter();
      double area();
  private:
    double length=1;
    double width=1;

};


#endif // RECTANGLE_H_INCLUDED
