#include <iostream>
#include<stdexcept>
#include"Point.h"
#include "math.h"
#include "Rectangle.h" // Rectangle class definition
using namespace std;
Rectangle::Rectangle( Point &po1, Point &po2, Point &po3, Point &po4)
{
   p1(po1);
   p2(po2);
   p3(po3);
   p4(po4);
   }
bool Rectangle::judge()
{
    double a,b,c,d,e,f;
    a=(p1.getx()+p2.getx()+p3.getx()+p4.getx())/4;
    b=(p1.gety()+p2.gety()+p3.gety()+p4.gety())/4;
    c=dis((p1.getx(),p1.gety()),(a,b));
    d=dis((p1.getx(),p1.gety()),(a,b));
    e=dis((p1.getx(),p1.gety()),(a,b));
    f=dis((p1.getx(),p1.gety()),(a,b));
    if(c=d=e=f)
    return true;
    else  return false;

}
void  Rectangle::length()
{
    double d1,d2,d3;
    d1=(p1.getx()+p2.getx()+p3.getx()+p4.getx())/4;
    d2=(p1.gety()+p2.gety()+p3.gety()+p4.gety())/4;
    d3=((p1.getx()-d1)*(p1.getx()-d1))+((p1.gety()-d2)*(p1.gety()-d2));
    (*this).length=sqrt(d3*3);
    (*this).width-sqrt(d3);
    cout<<"length is:"<<(*this).length<<endl;
    cout<<"width is"<<(*this).width<<endl;


}
void  Rectangle::perimeter()
{
	cout << "perimeter is " << 2 * (this->length + this->width)<<"\n";
}

//计算面积
void  Rectangle::area()
{
	cout << "area is " << (this->length) * (this->width) << "\n";
}
