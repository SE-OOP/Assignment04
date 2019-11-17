#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
using namespace std;
#include <math.h>
#include<iostream>

class Point
{
public:
    Point(float,float,float,float,float,float,float,float);
    bool checkrec();
    float getlength();
    float getwidth();
    bool square();
private:
    float x1, y1;
    float x2, y2;
    float x3, y3;
    float x4, y4;
    float l, w;

};


#endif // TIME_H_INCLUDED
