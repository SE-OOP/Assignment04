#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <time.h>
#include "Time.h"
using namespace std;
Time::Time() //用当前时间初始化对象
{
    const time_t currentTime =time(0);
    const tm *localTime=localtime(&currentTime);
    setTime(localTime->tm_hour,localTime->tm_min,localTime->tm_sec); //validate and set time
}
void Time::tick() //使时间增加1秒
{
    if((getSecond()+1)==60)
    {
        setSecond(0);
        minute+=1;
        if(getMinute()==60)
        {
             setMinute(0);
             hour+=1;
        }
    }
    else
        second+=1;
}
void Time::setTime(int h,int m,int s) //传递参数用于初始化时间
{
    setHour(h);     //set private filed hour
    setMinute(m);    //set private filed minute
    setSecond(s);    //set private filed second
}
void Time::setHour(int h)//传递参数用于初始化小时并判断是否合法
{
    if(h>0&&h<24)
    {
        hour=h;
    }
    else
        throw invalid_argument("hour must be 0-23");
}
void Time::setMinute(int m)//传递参数用于初始化分钟并判断是否合法
{
    if(m>=0&&m<60)
    {
        minute=m;
    }
    else
        throw invalid_argument("minute must be 0-59");
}
void Time::setSecond(int s)//传递参数用于初始化秒并判断是否合法
{
    if(s>=0&&s<60)
        second=s;
    else
        throw invalid_argument("second must be 0-59");
}
unsigned int Time::getHour()const//获取小时
{
    return hour;
}
unsigned Time::getMinute()const//获取分钟
{
    return minute;
}
unsigned Time::getSecond()const//获取秒
{
    return second;
}
void Time::printUniversal()const//输出为24小时的时间格式并换算为午夜以来的总秒数
{
    int tail;
    tail=second+minute*60+hour*60*60;
    cout<<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()<<endl;
    cout<<"午夜以来的总秒数为: "<<endl<<tail;

}
void Time::printStandard()const//输出为12小时的时间格式
{
    cout<<((getHour()==0||getHour()==12)?12:getHour()%12)<<":"<<setfill('0')<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()<<(hour<12 ?"AM":"PM");
}
