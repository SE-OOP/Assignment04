#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

int main()
{
    Point point1(2,3);
    Point point2(7,3);
    Point point3(2,0);
    Rectangle myRectangle(point1,point2,point3);
    cout<<"这个四方形的长为:"<<myRectangle.Relength()<<"\n这个四边形的宽度为:"<<myRectangle.Rewidth()<<"\n这个四边形的周长:"<<myRectangle.perimeter()<<"\n这个四边形的面积:"<<myRectangle.arear();
    if(myRectangle.square()==true)
        cout<<"\n此为正方形";
    else
        cout<<"\n此为长方形";
    return 0;
}
