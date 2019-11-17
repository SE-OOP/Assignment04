#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "Time.h"
using namespace std;

Time::Time(int a,int b,int c)
{
    setTime(a,b,c);
}
void Time::setTime(int a,int b,int c)
{
    hour=a;
    minute=b;
    second=c;
}
void Time::setHour(int a)
{
    second+= a*3600;
}
void Time::setMinute(int b)
{
    second+=b*60;
}
void Time::setSecond(int c)
{
    second+=c;
}
int Time::getHour()
{
    return second/3600;
}
int Time::getMinute()
{
    return second%360/60;
}
int Time::getSecond()
{
    return second%3600%60;
}
void printTime()
{
    cout<<setfill('0')<<setw(2)<<getHour()<<":"

       <<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();
           if(getHour>=0&&getHour<=12)
        cout<<"AM";
    else
        cout<<"PM";
}
void Time::tick()
{
    getSecond(c)++;
    if(getSecond(c)>= 60)
    {
        getSecond(c)=0;
         getMinute(b)++;
    }
    if(getMinute(b)>=60)
    {
        getMinute(b)=0;
        getHour(a)++;
    }
    if(getHour(a)>=24)
    {
        getHour(a)=0;
    }
}
