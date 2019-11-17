#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"Time.h"
using namespace std;

Time::Time(int hour,int minute,int second)
{
    setTime(hour,minute,second);
}

void Time::setTime(int hour1,int minute1,int second1)
{
    setHour(hour1);
    setMinute(minute1);
    setSecond(second1);
}

void Time::setHour(int hour1)
{
    if(hour1>=0&&hour1<24)
      hour=hour1;
    else
      hour=0;
}
void Time::setMinute(int minute1)
{
    if(minute1>=0&&minute1<60)
        minute=minute1;
    else
        minute=0;
}

void Time::setSecond(int second1)
{
    if(second1>=0&&second1<60)
        second=second1;
    else
       second=0;
}

int Time::getHour()
{
    return hour;
}
int Time::getMinute()
{
    return minute;
}
int Time::getSecond()
{
    return second;
}

void Time::tick()
{
    second+=1;
    if(second==60)
    {
        minute+=1;
        second=0;
    }
    if(minute==60)
    {
        hour+=1;
        minute=0;
        getHour();
    }

    if(hour==24)
    {
        hour=0;
    }
}
void Time::incometime(int a)
{
    int h,m,s;
    h=a/3600;
    m=a%3600/60;
    s=a%60;
    setSecond(s);
    setMinute(m);
    setHour(h);
}
void Time::printUniversal()
{
    cout<<setfill('0')<<setw( 2 )<<getHour()<<":"
    <<setw( 2 )<<getMinute()<<":"<<setw( 2 )<<getSecond();
}
