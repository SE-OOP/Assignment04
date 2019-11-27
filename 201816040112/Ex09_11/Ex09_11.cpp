#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle myRectangle(10,15);
    cout<<"长方形的周长为:"<<myRectangle.perimeter()<<"\n长方形的面积为:"<<myRectangle.area();
    return 0;
}
