#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
    Time t1;

//输出标准时间
    t1.printStandard();
    cout << "\n";
    //下一分钟
    int i = 60;
    while(i--) t1.tick();

    t1.printStandard();
    cout << "\n";
    //下一小时
    i=3600;
    while(i--) t1.tick();

    t1.printStandard();
    cout << "\n";
    //下一天
    i=3600*24;
    while(i--) t1.tick();

    t1.printStandard();
    cout << "\n";

}
