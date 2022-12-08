#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle rec_1(100,900),rec_2(10,15);
    //rec_1是长度不满足要求，输出默认值，rec_2输出正常
    cout<<"This is len_1: "<<rec_1.getLength()<<endl;
    cout<<"This is wid_1: "<<rec_1.getWidth()<<endl;
    cout<<"This is perimeter_1: "<<rec_1.perimeter()<<endl;
    cout<<"This is area_1: "<<rec_1.area()<<endl;
    cout<<"This is len_2: "<<rec_2.getLength()<<endl;
    cout<<"This is wid_2: "<<rec_2.getWidth()<<endl;
    cout<<"This is perimeter_2: "<<rec_2.perimeter()<<endl;
    cout<<"This is area_2: "<<rec_2.area()<<endl;

    return 0;
}
