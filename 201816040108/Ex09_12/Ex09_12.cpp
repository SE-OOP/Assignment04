#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

int main()
{
    Point a(1,5);
    Point b(5,5);
    Point c(1,1);
    Point d(5,1);
    Rectangle rect(a,b,c,d);
    cout<<"长为"<<rect.getLength()<<endl;
    cout<<"宽为"<<rect.getWidth()<<endl;
    cout<<"周长为"<<rect.getPerimeter()<<endl;
    cout<<"面积为"<<rect.getArea()<<endl;

}
