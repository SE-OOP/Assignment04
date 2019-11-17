#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
using namespace std;
class Point
{
    public:
        Point(double=0.0,double=0.0);
        void setPoint(double,double);
        void setx(double);
        void sety(double);
        double getx();
        double gety();
    private:
        double x;
        double y;
};


#endif // POINT_H_INCLUDED
