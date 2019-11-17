#include <iostream>
#include "Point.h"
#include "Rectangle.h"

int main()
{
    Point point(0,1,2,1,0,0,2,0);
    Rectangle rectangle(point.getlength(),point.getwidth());
    if(point.square())
        {cout<<"this is a square."<<endl;
        cout << "side is :"<<point.getlength()<<endl;}
    else
        {cout <<"this is not a square" <<endl;
        cout << "length is :"<<point.getlength()<<endl;
        cout <<"width is :"<< point.getwidth()<<endl;}
    cout << "perimeter is :" <<rectangle.getperimeter()<<endl;
    cout << "area is :" <<rectangle.getarea() <<endl;
    return 0;
}
