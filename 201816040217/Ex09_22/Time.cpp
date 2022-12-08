#include<bits/stdc++.h>
#include"Time.h"
using namespace std;

Time::Time(int hour, int minute, int second)
{

    struct tm *tblock;
    timer=time(NULL);
    tblock=localtime(&timer);
    hour = tblock->tm_hour;
    minute = tblock->tm_min;
    second = tblock->tm_sec;
    time_ = hour*60*60 + minute*60 + second;
    //内部用小时，分钟，秒来存储
    setTime(hour, minute, second);
    //内部用自午夜以来的秒存储
    setTime_(time_);
}
//使用秒数来初始化
void Time::setTime_(int second)
{
    int h,m,s;
    h = second / (60*60);
    m = (second-h*60*60) / 60;
    s = second - h*60*60 - m*60;
    setHour(h);
    setMinute(m);
    setSecond(s);
    cout<<h<<" "<<m<<" "<<s<<endl;

}

void Time::setTime(int h, int m,int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}

void Time::setHour(int h)
{
    if(h >= 0&& h<24)
        hour = h;
    else
        throw invalid_argument("hour must be 0-23");
}
void Time::setMinute(int m)
{
    if(m >= 0&& m < 60)
        minute = m;
    else
        throw invalid_argument("minute must be 0-59");

}

void Time::setSecond(int s)
{
    if(s >= 0&& s < 60)
        second = s;
    else
        throw invalid_argument("second must be 0-59");

}
unsigned Time::getHour() const
{
    return hour;
}
unsigned Time::getMinute() const
{
    return minute;
}
unsigned Time::getSecond() const
{
    return second;
}
//打印通用时间
void Time::printUniversal() const
{
    cout << setfill('0')<<setw(2)<<getHour()<<":"
         <<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();
}
//打印标准时间
void Time::printStandard() const
{
    cout<<((getHour() == 0|| getHour() ==12)?12:getHour()%12)
        <<":"
        <<setfill('0')<<setw(2)<<getMinute()
        <<":"<<setw(2)<<getSecond()<<(hour<12?" AM": " PM");
}
//增加一秒时间
void Time::tick()
{
    struct tm *tblock;
    timer += 1;
    tblock=localtime(&timer);
    hour = tblock->tm_hour;
    minute = tblock->tm_min;
    second = tblock->tm_sec;
    setTime(hour, minute, second);
}
