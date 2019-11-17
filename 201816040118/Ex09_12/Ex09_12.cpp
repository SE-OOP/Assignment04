#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Rectangle.h"
using namespace std;
int main()
{
    Rectangle t(1,3,1,3,1,1,3,3);//定义一个对象并初始化
    cout<<"("<<t.Printf1()<<","<<t.Printf5()<<")"<<endl;//打印它的第一个定点
    cout<<"("<<t.Printf2()<<","<<t.Printf6()<<")"<<endl;//打印它的第二个定点
    cout<<"("<<t.Printf3()<<","<<t.Printf7()<<")"<<endl;//打印它的第三个定点
    cout<<"("<<t.Printf4()<<","<<t.Printf8()<<")"<<endl;//打印它的第四个定点
}
