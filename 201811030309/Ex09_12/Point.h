#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
class Point
{
public:

    //initialize dafault parameters
    Point(double=1, double=1, double=2, double=1, double=2, double=2, double=1, double=2);

    //set four point
    void setxy(double, double, double, double, double, double, double, double);

    //return the point of x or y;
    double getx1() const;
    double getx2() const;
    double getx3() const;
    double getx4() const;
    double gety1() const;
    double gety2() const;
    double gety3() const;
    double gety4() const;
private:
    double X1,X2,X3,X4;
    double Y1,Y2,Y3,Y4;
};


#endif // POINT_H_INCLUDED
