#ifndef RECTANGE_H_INCLUDED
#define RECTANGE_H_INCLUDED
#include "Point.h"
#include <string>
using namespace std;
class Rectange
{
public:
    Rectange(const Point &,const Point &,const Point &,const Point &);
    double getLength();//返回长度
    double getWidth();
    double perimere();//求周长
    double area();
    void srectange();
    string square();
    void disPlay();
private:
    double length;
    double width;
    const Point a;
    const Point b;
    const Point c;
    const Point d;
};
#endif // RECTANGE_H_INCLUDED
