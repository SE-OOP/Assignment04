#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

int main()
{
    double l,w;
    Point p1(1.0,1.0),p2(2.0,1.0),p3(1.0,2.0),p4(2.0,2.0);
    Rectangle rectangle(p1,p2,p3,p4);
    l=rectangle.effectiveLength(p1,p2,p3,p4);
    w=rectangle.effectiveWidth(p1,p2,p3,p4);
    cout<<rectangle.effectiveArea(l,w)<<endl<<rectangle.effectivePerimeter(l,w);
    cout <<"end";

    return 0;
}
