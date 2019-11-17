#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "Time.h"
#include <ctime>


using namespace std;

Time::Time()
{
    time_t currentTime=time(0);
    tm * localTime=localtime(&currentTime);
    setTime(localTime->tm_hour, localTime->tm_min, localTime->tm_sec);
}
void Time::setTime(int h, int m, int s) //set the time from the midnight;
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}
Time& Time::setHour(int h) //set the time of hour and judge it;
{
    int hour;
    if(h>=0&&h<24)
        hour=h;
    else
        throw invalid_argument("hour must in 0--23");
    totalseconds=hour*3600+(getMinute()*60)+getSecond();
    return *this;
}
Time& Time::setMinute(int m) //set the time of minute and judge it;
{
    int minute;
    if(m>=0&&m<60)
        minute=m;
    else
        throw invalid_argument("minute must in 0--59");
    totalseconds=(getHour()*3600)+minute*60+getSecond();
    return *this;
}
Time& Time::setSecond(int s) //set the time of second and judge it;
{
    int second;
    if(s>=0&&s<60)
        second=s;
    else
        throw invalid_argument("second must in 0--59");
    totalseconds=(getHour()*3600)+(getMinute()*60)+second;
    return *this;
}
unsigned int Time::getHour() const //return hour by using the totalseconds;
{
    return totalseconds/3600;
}
unsigned int Time::getMinute() const
{
    return (totalseconds-getHour()*3600)/60;
}
unsigned int Time::getSecond() const //return minute by using the totalseconds;
{
    return totalseconds-getHour()*3600-getMinute()*60;
}
unsigned int Time::gettotalseconds() const //return second by using the totalseconds;
{
    return totalseconds;
}
void Time::printfStandard() const //cout it by standard;
{
    cout << ((getHour()==0||getHour()==12)? 12:getHour()%12)
        << ":" << setfill('0') << setw(2) << getMinute()
        << ":" << setw(2) << getSecond() << (getHour()<12 ? "AM" : "PM");
}
void Time::printUniversal() const //cout it by universal;
{
    cout << setfill('0') << setw(2) << getHour() << ":"
        << setw(2) << getMinute() << ":" << setw(2) << getSecond();
}
