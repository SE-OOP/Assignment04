#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"Time.h"
#include<time.h>
using namespace std;
Time::Time(int hour,int minute,int second)
{
    setTime(hour,minute,second);
}
Time::Time(const char t)
{
    time_t now;
    struct tm *tm_now;
    time(&now);
    //cout <<now<<endl;
    tm_now=localtime(&now);
    second=tm_now->tm_sec;
    minute=tm_now->tm_min;
    hour=tm_now->tm_hour;
}
void Time::tick()
{
    second+=1;
    if(second==60)
    {
        second=0;
        minute+=1;
    }
    if(minute==60)
    {
        minute=0;
        hour+=1;
    }
}
void Time::setTime(int h,int m, int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}
void Time::setHour(int h)
{
    if(h>=0&&h<24)
        hour=h;
    else
        throw invalid_argument("hour must be 0-23");
}
void Time::setMinute(int m)
{
    if(m>=0&&m<60)
        minute=m;
    else
        throw invalid_argument("minute must be 0-59");
}
void Time::setSecond(int s)
{
    if(s>=0&&s<60)
        second=s;
    else
        throw invalid_argument("second must be 0-59");
}
unsigned int Time::getHour()const
{
    return hour;
}
unsigned Time::getMinute()const
{
    return minute;
}
unsigned Time::getSecond()const
{
    return second;
}
void Time::printUniversal()const
{
    cout<<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();
}
void Time::printStandard()const
{
    cout<<((hour==0||hour==12)?12:hour%12)
    <<":"<<setfill('0')<<setw(2)<<minute
    <<":"<<setw(2)<<second<<((hour<12||(hour==24))?"AM":"PM")<<" and ";
    cout<<((hour==24)?(minute*60+second):(hour*3600+minute*60+second))<<"seconds"<<endl;
}
