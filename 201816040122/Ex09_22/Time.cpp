
#include <iomanip>
#include <iostream>
#include "Time.h"
using namespace std;

Time::Time(int h,int m,int s)
{
     setTime(h ,m , s);
}
void Time::setTime(int h, int m, int s)
{
    second=0;
    setHour(h);
    setMinute(m);
    setSecond(s);
}
void Time::setHour(int h)
{
    second=second+h*3600;
}
int Time::getHour()
{
    return second/3600;
}
void Time::setMinute(int m)
{
    second=second+m*60;
}
int Time::getMinute()
{
    return second%3600/60;
}
void Time::setSecond(int s)
{
    second=second+s;
}
int Time::getSecond()
{
    return second%60;
}
void Time::printUniversal()
{
    cout<<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()<<endl;
}
void Time:: printStandard()
{
    if(getHour()==0||getHour()==12)
     cout<<setfill('0')<<"12"<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();
    else
      cout<<setfill('0')<<setw(2)<<getHour()%12<<":"
       <<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();
    if(getHour()<12)
       cout<<" "<<"AM"<<endl;
    else
        cout<<" "<<"PM"<<endl;
}
