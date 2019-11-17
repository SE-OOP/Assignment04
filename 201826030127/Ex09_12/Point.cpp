#include<iostream>
#include"Rectangle.h"
#include"point.h"
using namespace std;
#include<cmath>

    point::point(int m,int n)
    :   x(m),y(n)
    {

    }
    double point::distance(const point p)
    {
        x=x-p.x;
        y=y-p.y;
        double dist=sqrt(x*x+y*y);
        return dist;
    }

    int point::getx()
    {
        return x;
    }

    int point::gety()
    {
        return y;
    }
