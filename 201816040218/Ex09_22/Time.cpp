#include "Time.h"

Time::Time(int h , int m, int s)
{
    setTime(h, m , s);
}

void Time::setTime(int h, int m, int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}

void Time::setHour(int h)
{
    if(h>=0&&h<24)
        Hour = h;
    else
        Hour = 0;
}

void Time ::setMinute(int m)
{
    if(m>=0&&m<60)
        Minute= m;
    else
        Minute= 0;
}
void Time::setSecond(int s)
{
    if( s>=0&&s<60)
        Second = s;
    else
        Second = 0;
}
int Time::getHour()
{
    return Hour;
}
int Time::getMinute()
{
    return Minute;
}
int Time::getSecond()
{
    return Second;
}
void Time::print()
{
    cout << setfill('0') << setw(2) << getHour() << ":" << setw(2) << getMinute() <<  ":"  << setw(2) << getSecond() <<endl ;
}
void Time::tick()
{
    setSecond(Second+1);
    if(Second == 0 )
    {
        setMinute(Minute+1);
        if(Minute == 0)
            setHour(Hour+1);
    }
}

Time::Time(int t)
{
    s=t;
    setHour((t%86400)/3600);
    setMinute((t%86400-Hour*3600)/60);
    setSecond(t%86400-3600*Hour-60*Minute);
    setHour(Hour +8);
}
int Time ::getsec()
{
    return s;
}



