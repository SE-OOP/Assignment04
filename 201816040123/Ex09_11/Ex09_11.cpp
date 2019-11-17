#include <iostream>
#include <iomanip>
#include "Rectange.h"

using namespace std;

int main()
{
    Rectange a1(3,7);
    Rectange a2(2.5,4);
    Rectange a3;
    cout<<setw(10)<<"长度"<<setw(10)<<"宽度"<<setw(10)<<"周长"<<setw(10)<<"面积"<<endl<<endl;
    a1.disPlay();
    a2.disPlay();//输出当前长方形的元素
    a3.disPlay();
    cout<<endl;
}
