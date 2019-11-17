#include<iostream>
#include "Time.h"
#include<ctime>
#include<iomanip>
using namespace std;
Time ::Time()
{
    time_t now;
    struct tm *tNow = {0};
    time(&now);
    tNow = localtime(&now);
    int hour = tNow->tm_hour;
    int minute = tNow->tm_min;
    int second =tNow->tm_sec;
    int s= hour*3600+minute*60+second;
    setSeconds(s);
}
void Time::setSeconds(int s)
{
    seconds = s;
}
int Time::getSeconds()
{
    return seconds;
}
void Time :: printUniversal()const
{
    int hour = seconds/3600;
    int minute= seconds%3600/60;
    int second = seconds%60;
    cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<endl;
}
void Time :: printStandard()const
{
    int hour = seconds/3600;
    int minute= seconds%3600/60;
    int second = seconds%60;
    if(hour==0||hour==12)
        hour = 12;
    else
        hour = hour%12;
    cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<endl;
}
void Time :: tick()
{
    setSeconds(seconds+1);
}
