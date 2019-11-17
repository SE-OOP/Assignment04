#include "Time.h"
#include <iostream>
#include <ctime>
#include <time.h>
#include <iomanip>
using namespace std;


Time::Time(int h,int m,int s) // Define the constructor.
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}

void Time::setTime(int h,int m,int s) //define function to set time
{
    if(h > 0 && h < 24)
        hour = h;
    else
        hour = 0;
    if(m > 0 && m < 60)
        minute = m;
    else
        minute = 0;
    if(s > 0 && s < 60)
        second = s;
    else
        second = 0;
}
void Time::setHour(int h)
{
    if(h > 0 && h < 24)
        hour = h;
    else
        hour = 0;
}

void Time::setMinute(int m)
{
    if(m > 0 && m < 60)
        minute = m;
    else
        minute = 0;
}

void Time::setSecond(int s)
{
    if(s > 0 && s < 60)
        second = s;
    else
        second = 0;
}

int Time::getHour()const //define function to get hour
{
    return hour;
}

int Time::getMinute()const
{
    return minute;
}

int Time::getSecond()const
{
    return second;
}

void Time::printStandard() //define function for printStandard
{
    cout << ((getHour()==0 || getHour()==12) ? 12 : getHour()%12)
    << ":" << setfill('0') << setw(2) << getMinute()
    << ":" << setw(2) << getSecond() << (hour < 12 ? "AM" : "PM");
}

void Time::tick() //define function for tick
{
    if(minute==59&&second==59)
        if(hour == 23)
            hour = 0;
        else
            hour = hour + 1;
    if(second==59)
        if(minute==59)
            minute=0;
        else
            minute=minute+1;
    if(second==59)
        second = 0;
    else
        second = second + 1;
}

