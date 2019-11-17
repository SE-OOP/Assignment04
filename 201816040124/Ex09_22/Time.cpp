#include<ctime>
#include"Time.h"
Time::Time()//用当前时间初始化对象
{
    time_t ttime;
    time(&ttime);
    tm *ltime=localtime(&ttime);
    setHour(ltime->tm_hour);
    setMinute(ltime->tm_min);
    setSecond(ltime->tm_sec);
    second=3600*hour+60*minute+second;
    hour=0;
    minute=0;
}
void Time::setHour(int h)
{
    hour=h;
}
void Time::setMinute(int m)
{
    minute=m;
}
void Time::setSecond(int s)
{
    second=s;
}
int Time::getHour()//获取小时
{
    return second/3600;
}
Time::getMinute()//获取分钟
{
    return (second%3600)/60;
}
Time::getSecond()//获取秒
{
    return second%60;
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
