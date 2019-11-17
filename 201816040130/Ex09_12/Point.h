#define POINT_H
class Point
{
public:
    Point(double=1 , double=1 );// constructor initializes x and y
    double getPointY(); //function to get y
    double getPointX(); //function to get x
    void setPointX(double); //function to set x
    void setPointY(double); //function to set y
private:
    double x;
    double y;
};
