#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"

using namespace std;

Time::Time(int h, int m, int s)
{
    totalSecondI=0;
    setTime(h,m,s);
}
Time::Time(time_t &t)
{
    totalSecondI=0;
    nowTime(t);
}

void Time::setTime(int h,int m,int s)
{
    if(h>=0&&h<24)
        totalSecondI+=h*3600;
    else
        throw invalid_argument("hour must be 0-23");
    if(m>=0&&m<60)
        totalSecondI+=m*60;
    else
        throw invalid_argument("minute must be 0-59");
    if(s>=0&&s<60)
        totalSecondI+=s;
    else
    {
        throw invalid_argument("second must be 0-59");
    }
    //cout<<totalSecond<<endl;
}
void Time::nowTime(time_t &t)
{
    totalsecond=time(&t);
    struct tm *now;
    now=localtime(&totalsecond);
    totalSecondI+=now->tm_hour*3600;
    totalSecondI+=now->tm_min*60;
    totalSecondI+=now->tm_sec;
}

void Time::tickTime()
{
    ++totalSecondI;//cout<<totalSecondI<<"   ";
}

void Time::printUniversal() const
{
    int hour,minute,second;

    second=totalSecondI%60;
    minute=totalSecondI/60%60;
    hour=totalSecondI/3600;

    if(hour==24)
        hour-=24;

    cout << setfill('0') << setw(2) << hour << ":"
        << setw(2) << minute << ":" << setw(2) << second<<endl;
}


void Time::printStandard() const
{
    int hour,minute,second;
    second=totalSecondI%60;
    minute=totalSecondI/60%60;
    hour=totalSecondI/3600;

    if(hour==24)
        hour-=24;
//cout<<hour<<"   ";

    cout << ((hour==0||hour==12) ? 12 :hour%12)
        << ":" << setfill('0') << setw(2) << minute
        << ":" << setw(2) << second << (hour<12 ? " AM" : " PM")<<endl;
}
