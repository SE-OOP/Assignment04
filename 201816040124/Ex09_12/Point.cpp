#include"Point.h"
#include<iostream>
#include<math.h>
#include<string>
using namespace std;
Point::Point(double a,double b,double c,double d,double e,double f,double g,double h)
{
    setPoint(a, b,c,d,e,f,g,h);
}//构造函数结束
void Point::setPoint(double a,double b,double c,double d,double e,double f,double g,double h)
{
    /*分别判断坐标是否符合要求*/
    if(a>=0&&a<=20)//x1
    x1=a;
    else
        cout<<"x1不符合条件"<<endl;
    if(b>=0&&b<=20)//y1
    y1=b;
    else
        cout<<"y1不符合条件"<<endl;
    if(c>=0&&c<=20)//x2
    x2=c;
    else
        cout<<"x2不符合条件"<<endl;
    if(d>=0&&d<=20)//y2
    y2=d;
    else
        cout<<"y2不符合条件"<<endl;
    if(e>=0&&e<=20)//x3
    x3=e;
    else
        cout<<"x3不符合条件"<<endl;
    if(f>=0&&f<=20)//y3
    y3=f;
    else
        cout<<"y3不符合条件"<<endl;
    if(g>=0&&g<=20)//x4
    x4=g;
    else
        cout<<"x4不符合条件"<<endl;
    if(h>=0&&h<=20)//y4
    y4=h;
    else
        cout<<"y4不符合条件"<<endl;
    if((l(a,b,c,d)==l(e,f,g,h))&&(l(a,b,g,h)==l(c,d,e,f)))//判断能否构成长方形
        cout<<"坐标可构成长方形"<<endl;
    else
        cout<<"坐标不可构成长方形"<<endl;

}
double Point::l(double a,double b,double c,double d)//求两点间长度
{
    return sqrt((a-c)*(a-c)+(b-d)*(b-d));
}
