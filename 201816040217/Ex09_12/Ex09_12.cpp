#include <iostream>
#include "Rectangle.h"
using namespace std;
//2,6,3,7,5,5,4,4
//1,1,3,1,1,2,3,2
int main()
{
    Rectangle rec_1(1,1,3,1,1,2,3,2),rec_2(2,6,3,7,5,5,4,4),rec_3(-1,1,3,1,1,2,3,2), rec_4(100,100,300,100,100,200,300,200);
    //输出第一个与坐标轴平行的长方形的数据正常
    cout<<"This is len_1: "<<rec_1.getLength()<<endl;
    cout<<"This is wid_1: "<<rec_1.getWidth()<<endl;
    cout<<"This is perimeter_1: "<<rec_1.perimeter()<<endl;
    cout<<"This is area_1: "<<rec_1.area()<<endl<<endl;
    //输出第二个与坐标轴不平行的长方形的数据正常
    cout<<"This is len_2: "<<rec_2.getLength()<<endl;
    cout<<"This is wid_2: "<<rec_2.getWidth()<<endl;
    cout<<"This is perimeter_2: "<<rec_2.perimeter()<<endl;
    cout<<"This is area_2: "<<rec_2.area()<<endl<<endl;
    //输出不在坐标轴的点，输出默认值
    cout<<"This is len_3: "<<rec_3.getLength()<<endl;
    cout<<"This is wid_3: "<<rec_3.getWidth()<<endl;
    cout<<"This is perimeter_3: "<<rec_3.perimeter()<<endl;
    cout<<"This is area_3: "<<rec_3.area()<<endl<<endl;
    //不符合长度要求的长方形，输出默认值
    cout<<"This is len_4: "<<rec_4.getLength()<<endl;
    cout<<"This is wid_4: "<<rec_4.getWidth()<<endl;
    cout<<"This is perimeter_4: "<<rec_4.perimeter()<<endl;
    cout<<"This is area_4: "<<rec_4.area()<<endl;




    return 0;
}
