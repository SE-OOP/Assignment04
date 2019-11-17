#include <iostream>
using namespace std;
class Rectangel2
{
public:
   explicit Rectangel2(double=0,double=0,double=0,double=0,double=0,double=0,double=0,double=0);
    void setDate(double,double,double,double,double,double,double,double);
    double Check()const;
    void setSide();
    double Perimeter()const;
    double Area()const;
    void display();
    void setDatex1(double);
    void setDatey1(double);
    void setDatex2(double);
    void setDatey2(double);
    void setDatex3(double);
    void setDatey3(double);
    void setDatex4(double);
    void setDatey4(double);
    double getDatex1()const;
    double getDatey1()const;
    double getDatex2()const;
    double getDatey2()const;
    double getDatex3()const;
    double getDatey3()const;
    double getDatex4()const;
    double getDatey4()const;

private:
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
    double x4;
    double y4;
    double length;
    double width;
};
