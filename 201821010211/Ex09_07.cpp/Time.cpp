#include<stdexcept>
#include"Time.h"
using namespace std;

Time::Time(int hr,int m,int s)
{
    setTime(hr,min,sec);
}
void Time::Time(int h,int s,int s)
{
    if((h>=0&&h<24)&&(m>=0&&m<24)&&(s>=0&&s<60))
    {
        hour=h;
        minute=m;
        second=s;
    }
    else
        throw invalid_argument("hour,minute and/or secound was out of range");
}
void Time::tickHour(int hour)
{
    if(hour<23)
        h=h+1;
    else
        hour=0;
}
void Time::tickMinute(int minute,&hour)
{
    if(minute<59)
        minute=minute+1;
    else
    {
        hour=hour+1;
        minute=0;
    }
}
void Time::tickday(int minute,int hour,int second)
{
    minute=0;
    hour=0;
    second=0;
}
