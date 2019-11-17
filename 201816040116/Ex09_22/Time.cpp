#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"Time.h"
#include<ctime>
using namespace std;
Time::Time()
{
    const time_t t=time(NULL);
    struct tm* systemtime=localtime(&t);
    setTime(systemtime->tm_hour,systemtime->tm_min,systemtime->tm_sec);
}
Time::Time(int hour,int minute,int second)
{
    setTime(hour,minute,second);
}
void Time::setTime(int h,int m,int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
    setMiaoshu(h,m,s);
}
void Time::setHour(int h)
{
    if(h>=0&&h<24)
        hour=h;
    else
        throw invalid_argument("hour must be 0-23");
}
void Time::setMinute(int m)
{
    if(m>=0&&m<60)
        minute=m;
    else
        throw invalid_argument("minute must be 0-59");
}
void Time::setSecond(int s)
{
    if(s>=0&&s<60)
        second=s;
    else
        throw invalid_argument("second must be 0-59");
}
void  Time::setMiaoshu(int h,int m,int s)
{
    miaoshu=h*3600+m*60+s;
    cout<<miaoshu<<endl;
}
int Time::getMiaoshu()
{   return miaoshu;     }
int Time::getHour() const
{   return hour;    }
int Time::getMinute() const
{   return minute;  }
int Time::getSecond()  const
{   return second;  }
void Time::printUniversal() const
{
    cout<<setfill('0')<<setw(2)<<getHour()<<":"
        <<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()<<"\n";
}
void Time::printStandard() const
{
    cout<<((getHour()==0||getHour()==12)?12:getHour()%12)
        <<":"<<setfill('0')<<setw(2)<<getMinute()
        <<":"<<setw(2)<<getSecond()<<(hour<12?"AM":"PM")<<"\n";
}
void Time::tick()
{
    miaoshu=miaoshu+1;
    hour=miaoshu%3600;
    minute=miaoshu%60;
    second=miaoshu/60;
    setTime(hour,minute,second);
}
