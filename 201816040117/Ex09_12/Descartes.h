#ifndef DESCARTES_H_INCLUDED
#define DESCARTES_H_INCLUDED
class Descartes
{public:
    Descartes (double=1,double=1);//constructor
    void setXaY(double,double);//function to set x and y
    void setX(double);//function to set x
    double getX();//function to get x
   void setY(double);//function to set y
    double getY();//function to get y
private:
    double x;
    double y;

};


#endif // DESCARTES_H_INCLUDED
