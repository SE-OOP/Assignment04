#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"
using namespace std;
Time ::Time(int h,int m,int s)
{
    setTime(h,m,s);
}//set time
 Time ::Time()
{
    time_t now;
    struct tm*tm_now;
    time(&now);
    tm_now=localtime(&now);
    setTime(tm_now->tm_hour,tm_now->tm_min,tm_now->tm_sec);

}//function to get local time
void Time::setTime(int h,int m,int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}//to set time
void Time::setHour(int h)
{
    if(h>=0&&h<24)
        {
            hour=h;
            allsecond=hour*3600;
        }
    else
        throw invalid_argument("hour must be 0-23");
}//to set hour
void Time::setMinute(int m)
{
    if(m>=0&&m<60)
        {
            minute=m;
            allsecond=allsecond+minute*60;
        }
    else
        throw invalid_argument("minute must be 0-59");
}//to set minute
void Time ::setSecond(int s)
{
    if(s>=0&&s<60)
        {
            second=s;
            allsecond=allsecond+second;
        }
    else
        throw invalid_argument("second must be 0-59");
}//to set second
unsigned int Time::getHour()
{
    return hour;
}
unsigned int Time::getMinute()
{
    return minute;
}
unsigned int Time::getSecond()
{
    return second;
}
void Time::printUniversisal()
{
    cout<<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()
    <<":"<<setw(2)<<getSecond()<<"\n";
}//output
void Time::printStandard()
{
    cout<<((getHour()==0||getHour()==12)?12:getHour()%12)
    <<":"<<setfill('0')<<setw(2)<<getMinute()<<":"
    <<setw(2)<<getSecond()<<(hour<12?"AM":"PM")<<"\n";
}//standard output
void Time::tick()
{
    if(allsecond<86400)
    {
        allsecond+=1;
        hour=allsecond/3600;
        minute=allsecond%3600/60;
        second=allsecond%60;
    }
    else
        allsecond=0;
}//function to set to be next second


