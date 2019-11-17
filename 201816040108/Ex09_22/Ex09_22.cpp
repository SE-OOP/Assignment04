#include <iostream>
#include <ctime>
#include "Time.h"
using namespace std;

int main()
{
    time_t nowtime;
    struct tm *now;
    time( &nowtime );
    now = localtime( &nowtime );//store now time
    Time t(now->tm_hour,now->tm_min,now->tm_sec);
    cout<<"Universal time:";
    t.printUniversal();//输出国际时间
    cout<<"Standard time:";
    t.printStandard();//输出标准时间
    return 0;
}
