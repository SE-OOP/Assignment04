#include<iostream>
#include<string.h>
#include<iomanip>
#include<stdexcept>
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
    Rectangle::Rectangle(point a,point b,point c,point d)
    {
       Rectangle::set(a, b,c,d);
    }

    void Rectangle::set(point a,point b,point c,point d)
    {
        if((a.getx()-0.0)<1e-10||(20.0-a.gety())<1e-10)
          throw
            invalid_argument("A OUT WIDEN");
        if(( b.getx()-0.0)<1e-10||(20.0-b.gety()<1e-10))
            throw
            invalid_argument("B OUT WIDEN");
        if((c.getx()-0.0)<1e-10||(20.0-c.gety()<1e-10))
            throw
            invalid_argument("C  OUT WIDEN");
        if((c.getx()-0.0)<1e-10||(20.0-c.gety()<1e-10))
            throw
            invalid_argument("D  OUT WIDEN");

        if(c.distance(d)!=a.distance(b))
            throw
            invalid_argument("WRONG INPUT");


           if((c.distance(d)-c.distance(b)>1e-10))
               {
                    length=c.distance(d);
                    width= c.distance(b);
               }
               else
               {
                    length=c.distance(b);
                    width= c.distance(d);
               }
    }

    bool Rectangle::sqare(point c,point b,point a,point d)
    {
        if(c.distance(d)==c.distance(b))
            return true;
        else
            return false;
    }

    double Rectangle::permeter()
    {
        meter=2*(length+width);
        return  meter;
    }


    double Rectangle::area()
    {
        ar=length*width;
        return  ar;
    }


    void Rectangle::display()
    {
        cout<<"Area="<<Rectangle::area()<<endl;
        cout<<"Permeter="<<Rectangle::permeter();
    }
