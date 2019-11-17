#include <iostream>
#include <iomanip>
#include "Point.h"
#include "Rectange.h"

int main()
{
    Point a1(1,1);
    Point a2(1,2);
    Point a3(2,2);
    Point a4(2,1);
    Point b1(1,1);
    Point b2(1,3);
    Point b3(6,3);
    Point b4(6,1);
    Rectange a(a1,a2,a3,a4);
    Rectange b(b1,b2,b3,b4);
    cout<<setw(5)<<"长"<<setw(5)<<"宽"<<setw(5)<<"周长"
    <<setw(5)<<"面积"<<setw(15)<<"是否为正方形"<<endl<<endl;
    a.disPlay();
    b.disPlay();
}
