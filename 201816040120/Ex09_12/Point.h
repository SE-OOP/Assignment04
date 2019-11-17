#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point
{
public :
     explicit Point (double = 0.0, double = 0.0);
     Point setPoint(double ,double );
     double getx();
     double gety();
private:
    double x;//abscissa
    double y;//ordinate
};

#endif // POINT_H_INCLUDED
