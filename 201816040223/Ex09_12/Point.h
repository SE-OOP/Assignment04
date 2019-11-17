
#define POINT_H
using namespace std;
// Rectangle class definition

class Point{
    public:
    Point(double,double);
    void setx(double);
    double getx();
    void sety(double);
    double gety();

    private:
    double x;
    double y;


};
