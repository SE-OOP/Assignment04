//Time.cpp
#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"Time.h"
using namespace std;

Time::Time(int Hour,int Minute,int Second)
{
    setTime(Hour,Minute,Second);
}

void Time::setTime(int h,int m,int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}
//设置时
void Time::setHour(int h)
{
    if(h>=0&&h<24)
    {
        setTotalSeconds(h*3600); //一小时等于三千六百秒
    }
    else
    {
        throw invalid_argument("hour must be 0-23");
    }
}
//设置分
void Time::setMinute(int m)
{
    if(m>=0&&m<60)
        setTotalSeconds(m*60);
    else
        throw invalid_argument("minute must be 0-59");
}
//设置秒
void Time::setSecond(int s)
{
    if(s>=0&&s<60)
        setTotalSeconds(s);
    else
        throw invalid_argument("second must be 0-59");
}
//get时
int Time::getHour()const
{

    return getTotalSeconds()/3600;
}
//get分
int Time::getMinute()const
{
    return (getTotalSeconds()-getHour()*3600)/60;
}
//get秒
int Time::getSecond()const
{
    return getTotalSeconds()-getHour()*3600-getMinute()*60;
}
//总秒数
void Time::setTotalSeconds(int T)
{
    TotalSeconds+=T;
}
int Time::getTotalSeconds()const
{
    return TotalSeconds;
}

void Time::printUniversal()const
{
    cout<<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();
}
void Time::printStandard() const
{
    cout<<((getHour()==0||getHour()==12)?12:getHour()%12)<<":"<<setfill('0')<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()<<(Hour<12?"AM":"PM");
}
