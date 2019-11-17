#include<iostream>
#include<iomanip>
using namespace std;
#include"Rectangle.h"
#include"Point.h"
int main()
{
    Point xy1(1,1);
    Point xy2(1,5);
    Point xy3(5,1);
    Point xy4(5,5);
    Rectangle rectangle(xy1,xy2,xy3,xy4);
    rectangle.display();
}
