#include<iostream>
using namespace std;
#include "Rectangle.h"

int main()
{
    Rectangle R;
    cout<<"长方形的长:"<<R.getLength()<<endl<<"长方形的宽:"<<R.getWidth()<<endl<<"长方形的周长:"<<R.perimeter()<<endl<<"长方形的面积:"<<R.area()<<endl;
    float x;
    cout<<"请输入长方形的长";
    cin>>x:
    R.setLength(x);
    cout<<"请输入长方形的宽":
    cin>>x;
    R.setWidth(x);
    cout<<"长方形的长:"<<R.getLength()<<endl<<"长方形的宽:"<<R.getWidth()<<endl<<"长方形的周长:"<<R.perimeter()<<endl<<"长方形的面积:"<<R.area()<<endl;
}
