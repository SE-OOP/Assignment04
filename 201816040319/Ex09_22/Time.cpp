#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"Time.h"
using namespace std;

Time::Time(int hour,int minute,int second)
{
    setTime(hour,minute,second);
}
void Time::setTime(int h,int m,int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}
void Time::timechange()
{
    time(&date1);
    localtime(&data2);
}
void Time::printTime()
{
    cout<<"The time is :"<<endl;
    cout<<data1<<endl;
    cout<<"The localtime is :"<<endl;
    cout<<data2<<endl;

}

void Time::setHour(int h)
{
    if(h>=0&&h<24)
    {
        hour=h;
    }
    else
        throw invalid_argument("minute must be in the range of  0-23");

}
void Time::setMinute(int m )
{
    if(m>=0&&m<60)
    {
        minute=m;
    }
    else
        throw invalid_argument("minute must be in the range of 0-59");

}
void Time::setSecond(int s )
{
    if(s>=0&&s<60)
    {
        second=s;
    }
    else
        throw invalid_argument("minute must be in the range of 0-59");

}
void Time::timetick()
{
    second++;
    if(second==60)
    {
        minute++;
        second=0;
    }
    if(minute==60)
    {
        hour++;
        minute=0;
    }
    if(hour==24)
    {
        hour=0;
    }
}
void Time::timein(int all)//自午夜以来的时间初始化
{
    int h,m,s;
    int a;
    h=all/3600;
    a=all%3600;
    m=a/60;
    a=a%60;
    s=a;
    setHour(h);
    setMinute(m);
    setSecond(s);
}
 int Time::getHour() const
{
    return hour;
}
 int Time::getMinute() const/
{
    return minute;
}
int Time::getSecond() const//得到秒数
{
    return second;
}
void Time::printUniversal() const
{
    cout<<setfill('0')<<setw(2)<<getHour()<<":"
      <<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();
}
void Time::printStandard() const
{
    cout<<((getHour()==0||getHour()==12)?12:getHour()%12)
        <<":"<<setfill('0')<<setw(2)<<getMinute()
        <<":"<<setw(2)<<getSecond()<<(hour<12?"AM":"PM");
}


