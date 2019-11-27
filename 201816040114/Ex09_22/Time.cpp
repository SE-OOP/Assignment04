#include "Time.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;
Time::Time(int hour,int minute,int second)
{
    setTime(hour,minute,second);
}

void Time::setTime(int h,int m,int s)
{
    if(h>=0&&h<24&&m>=0&&m<60&&s>=0&&s<60)
        second=h*60*60+m*60+s;
    else
        throw invalid_argument("hour,minute or second was out of range");
}

unsigned Time::getHour() const
{
    return (second-second%3600)/3600;
}

unsigned Time::getMinute() const
{
    return (second-second%3600)/60;
}

unsigned Time::getSecond() const
{
    return second%3600;
}

void Time::printUniversal() const
{
    cout<<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();
}
void Time::printStandard() const
{
    cout<<((getHour()==0||getHour()==12)?12:getHour()%12)
        <<":"<<setfill('0')<<setw(2)<<getMinute()
        <<":"<<setw(2)<<getSecond()<<((second-second%3600)/3600<12?"AM":"PM");
}
