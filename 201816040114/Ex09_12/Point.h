#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
using namespace std;

class Point
{
public:
    Point(double,double);
    void setX(double);
    void setY(double);
    double getX();
    double getY();
private:
    double x;
    double y;
};



#endif // POINT_H_INCLUDED
