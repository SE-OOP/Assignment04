#include<iostream>
#include"Rectangle.h"
#include"Point.h"
#include"Rectangle.h"
using namespace std;

int main()
{
    double length, width;
    double x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    Rectangle san(x1,y1,x2,y2,x3,y3,x4,y4);
    length=san.length1( x1, x2);//计算长方形的长
    width=san.width1( y1, y2);//计算长方形的宽
    Point san1(double length,double width);
    san1.square(length,width);
    cout<<"zhouchang: "<<san1.perimeter(length,width)<<endl;//输出周长
    cout<<"mianji: "<<san1.area(length,width)<<endl;//输出面积
}// end main
