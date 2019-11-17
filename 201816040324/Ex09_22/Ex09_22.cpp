#include <iostream>
#include "Time.h"
#include <time.h>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    Time tim ;//定义tim
    time_t t=time(NULL) ;//获取秒数从1970
    tim.setSecond(t) ;//写入s
    struct tm *local;
    local=localtime(&t);//换算为标准时间
    cout << "the calendar time now is :" << tim.getSecond()<< "s"<<endl;//输出秒数
    cout<<"local time: "<<setfill('0')<<setw(2)<<((local->tm_hour)>12?local->tm_hour-12:local->tm_hour)<<":"<<setw(2)<<local->tm_min<<":"<<setw(2)<<local->tm_sec <<" "<<((local->tm_hour)>12?"pm":"am")<<"\n";//输出下一秒

    for (int i=1;i<=10;i++)
    {
    time_t tt;
    tt = tim.getSecond();//赋值到tt
    local=localtime(&tt) ;
    cout<<"tick+1\n" ;
    tim.tick() ;
    cout<<setfill('0')<<setw(2)<<((local->tm_hour)>12?local->tm_hour-12:local->tm_hour)<<":"<<setw(2)<<local->tm_min<<":"<<setw(2)<<local->tm_sec <<" "<<((local->tm_hour)>12?"pm":"am")<<"\n";//输出下一秒
    }
}
