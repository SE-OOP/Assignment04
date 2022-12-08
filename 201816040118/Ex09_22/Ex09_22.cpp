#include <iostream>
#include <stdexcept>
#include <string>
#include "Time.h"
using namespace std;
int main()
{
    Time t1;//定义一个对象
    cout<<"local time:"<<endl;
    t1.printStandard();//输出12小时时间格式
    cout<<endl;
    t1.printUniversal();//输出24小时时间格式和总秒数
    cout<<endl;
    cout<<"after tick:"<<endl;
    t1.tick();//测试tick函数来使秒数加1
    t1.printStandard();//输出12小时时间格式
    cout<<endl;
    t1.printUniversal();//输出24小时时间格式和总秒数
}
