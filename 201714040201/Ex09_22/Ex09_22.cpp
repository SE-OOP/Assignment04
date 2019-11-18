//Ex09_22.cpp

#include<iostream>
#include<ctime>
#include"Time.h"//include Time class functions

using namespace std;

int main()
{
    Time time1,time2(23,59,59),time3(0,59,59);
    time1.printStandard();//print 12-hour format
    time1.printUniversal();//print 24-hour format
    time1.printTotalSecond();//output total second
    cout<<endl;
   /*time_t now;
    now=time1.getNowTime();
    struct tm *local,*gm;
    local=localtime(&now);//当前系统时间
    dsptime(local);//输出当地时间
    gm=gmtime(&now);//格林尼治时间
    dsptime(gm);//输出格林尼治时间*/

    time2.printStandard();//print 12-hour format
    time2.printUniversal();//print 24-hour format
    time2.printTotalSecond();//output total second
    cout<<endl;
    time3.printStandard();//print 12-hour format
    time3.printUniversal();//print 24-hour format
    time3.printTotalSecond();//output total second
    cout<<endl;
    for(int i=1;i<=6;i++)//秒数增长
    {
        time2.tick();
        time2.printStandard();
        time2.printUniversal();
        time2.printTotalSecond();
    }
}//end main
