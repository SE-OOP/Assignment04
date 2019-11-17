#include <iostream>
using namespace std;

#include "ctime.h"
Time::Time( double m, double d, double y )//时分秒
{
    settime( m, d, y );
}
void Time::settime( double m, double d,double y)
{
     sethour ( m );
     setminute ( d );
     setsecond( y );
}
void Time::setsecond( double y )
{
    while(y>=0&&y<60)
    {
        second=y;
    }
}
void Time::setminute( double d )
{
    while(d>=0&&d<60)
    {
        minute=d;
    }
}
void Time::sethour( double m )
{
    while(m>=0&&m<24)
    {
        hour=m;
    }
}
void Time::tick()
{
    while(second<59)
    {
        second=second+1;
    }
    while(second>=59)
    {
        second = 0;
        while(minute<59)
        {
            minute=minute+1;
        }
        while(minute>=59)
        {
            minute=0;
            {
                while(hour<23)
                {
                    hour=hour+1;
                }
                while(hour>=23)
                {
                    hour=0;
                }
            }
        }
    }
}
void Time::printf()
{
    cout << hour << '-' << minute << '-' << second << '\n';
}
void Time::setcountsecond(double h, double m, double s )
{
    countsecond=h*3600+m*60+s;
}
int Time::getcountsecond()
{
    return countsecond;
}
