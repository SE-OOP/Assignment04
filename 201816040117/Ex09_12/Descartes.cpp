#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Descartes.h"

using namespace std;
Descartes ::Descartes(double a,double b)
{
    setXaY(a,b);
}//constructor
void Descartes::setXaY(double a,double b)
{
    setX(a);
    setY(b);
}
void Descartes::setX(double a)
{
    if(a>0.0&&a<20.0)
        x=a;
    else
        throw invalid_argument("x must be 0.0 - 20.0");
}
void Descartes::setY(double b)
{
    if(b>0.0&&b<20.0)
        y=b;
    else
        throw invalid_argument("y must be 0.0 - 20.0");
}
double Descartes::getX()
{
    return x;
}
double Descartes::getY()
{
    return y;
}
