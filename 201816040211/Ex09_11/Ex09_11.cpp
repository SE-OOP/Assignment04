#include <iostream>
using namespace std;

#include "Rectangle.h" // include definition of class Employee

int main()
{
    double a, b;
    Rectangle san(1, 2);//定义一个san对象
    cin>>a;
    cin>>b;
    san.setlength(a);
    san.setwidth(b);
    cout<<"zhouchang: "<<san.perimeter(a,b)<<endl;
    cout<<"mianji: "<<san.area(a,b)<<endl;
}
