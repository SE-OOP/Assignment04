#include <iostream>
#include <ctime>
#include "Time.h"
using namespace std;

int main()
{
    time_t nowtime;
    struct tm *a;
    time( &nowtime );
    a = localtime( &nowtime );//获取计算机本地时间
    Time s(a->tm_hour,a->tm_min,a->tm_sec);
    cout<<" The Universal time:";
    s.printUniversal();//输出国际时间
    cout<<"The Standard time:";
    s.printStandard();//输出标准时间
    return 0;
}
