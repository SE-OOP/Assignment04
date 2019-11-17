#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
class Point
{
public:
    Point(double=0,double=0);
    void setX(double);
    void setY(double);
    double getX() const;
    double getY() const;
private:
    double x;
    double y;
};
#endif // POINT_H_INCLUDED
