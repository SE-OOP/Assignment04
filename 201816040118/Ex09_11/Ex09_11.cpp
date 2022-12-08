#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Rectangle.h"
using namespace std;
int main()
{
    Rectangle t;//定义一个对象
    cout<<"该长方形的长和宽为: "<<endl;
    cout<<t.getLength()<<" "<<t.getWidth()<<endl;//输出它的长度和宽度
    cout<<"该长方形的周长和面积为: "<<endl;
    cout<<t.getPerimeter()<<" "<<t.getArea();//输出它的周长和面积
}
