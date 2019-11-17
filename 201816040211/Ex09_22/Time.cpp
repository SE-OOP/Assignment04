#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <ctime>
#include "Time.h"
using namespace std;

Time::Time(int allsecond1)
   :allsecond(allsecond1)
{

}

void Time::sethour(int allsecond)
{
    hour=allsecond/3600;
}// end sethour
int Time::gethour()
{
    return hour;
}// end gethour

void Time::setsecond(int allsecond)
{
    second=allsecond%60;
}// end setsecond
int Time::getsecond()
{
    return second;
}// end getsecond

void Time::setminute(int allsecond)
{
    minute=(allsecond-second-hour*3600)/60;
}// end setminute
int Time::getminute()
{
    return minute;
}// end getminute

void Time::PrintUniversal()
{
    cout<<setfill('0')<<setw(2)<<hour<<":"
        <<setw(2)<<minute<<":"<<setw(2)<<second;
}// end printUniversal

void Time::PrintStandard()
{
    cout<<((hour==0 || hour ==12)? 12 :hour % 12)
       <<":"<<setfill('0')<<setw(2)<<minute
       <<":"<<setw(2)<<second << (hour < 12 ? "AM": "PM");
}// end PrintStandard

int Time::tick()
{
    return allsecond + 1;
}// end tick


