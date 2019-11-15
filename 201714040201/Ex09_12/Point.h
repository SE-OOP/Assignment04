//Point.h
//Point class definition
//member function define in point.cpp
#ifndef POINT_H
#define POINT_H

class Point{
public:
    Point(double=1 ,double =1);//default constructor
    void setCoordinate(double ,double );//set a coordinate of x and y
    double getCoordinateX();//get a value of x
    double getCoordinateY();//get a value of y
private:
    double x;
    double y;
};//end class Point

#endif // POINT_H
