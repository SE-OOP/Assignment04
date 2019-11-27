#include <iostream>
#include "Point.h"
#include "Rectangle.h"

using namespace std;

int main()
{
    Point a(2,4),b(2,1),c(6,1),d(6,4);
    Rectangle rectangle(a,b,c,d);
    rectangle.square();
    cout<<rectangle.getPerimeter()<<" "<<rectangle.getArea()<<endl;
}
