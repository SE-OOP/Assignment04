#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Rectangle.h"
using namespace std;
Rectangle::Rectangle(double X1,double X2,double X3,double X4,double Y1,double Y2,double Y3,double Y4)//传递坐标初始化
{
    Length(X1,X3);
    Width(Y1,Y3);
    Check(X1,X2,X3,X4,Y1,Y2,Y3,Y4);
}
void Rectangle::Length(double X1,double X3)//计算坐标长度
{
    length=X1-X3;
}
void Rectangle::Width(double Y1,double Y3)//计算坐标宽度
{
    width=Y1-Y3;
}
void Rectangle::Perimeter(double length,double width)//计算坐标周长
{
    perimeter=(length+width)*2;
}
void Rectangle::Area(double length,double width)//计算坐标面积
{
    area=length*width;
}
void Rectangle::Square(double length,double width,double X1,double X2,double X3,double Y1,double Y2,double Y3)//判断函数
{
    if(length==width&&(X2-X1)*(X3-X1)+(Y2-Y1)*(Y3-Y1)==0)
    {
        cout<<"该长方形是正方形"<<endl;
    }
    else
         cout<<"该长方形不是正方形"<<endl;
}
void Rectangle::Check(double X1,double X2,double X3,double X4,double Y1,double Y2,double Y3,double Y4)//判断函数
{
    if(X1>0&&X2>0&&X3>0&&X4>0&&Y1>0&&Y2>0&&Y3>0&&Y4>0&&X1<20&&X2<20&&X3<20&&X4<20&&Y1<20&&Y2<20&&Y3<20&&Y4<20&&(X2-X1)*(X3-X1)+(Y2-Y1)*(Y3-Y1)==0)
    {
        x1=X1;
        x2=X2;
        x3=X3;
        x4=X4;
        y1=Y1;
        y2=Y2;
        y3=Y3;
        y4=Y4;
    }
   else
   {
       cout<<"坐标不构成长方形!";
        x1=0;
        x2=0;
        x3=0;
        x4=0;
        y1=0;
        y2=0;
        y3=0;
        y4=0;
   }
}
//返回各个坐标的值
double Rectangle::Printf1()
{
     return x1;
}
double Rectangle::Printf2()
{
     return x2;
}
double Rectangle::Printf3()
{
     return x3;
}
double Rectangle::Printf4()
{
     return x4;
}
double Rectangle::Printf5()
{
     return y1;
}
double Rectangle::Printf6()
{
     return y2;
}
double Rectangle::Printf7()
{
     return y3;
}
double Rectangle::Printf8()
{
     return y4;
}
