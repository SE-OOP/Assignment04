#include <iostream>
#include<iomanip>
#include"Time.h"
using namespace std;

Time::Time(int hours, int minutes, int seconds )
{
    setTime(hours, minutes, seconds);
}
void Time::setTime(int ho, int mi, int se)
{
    setHours(ho);
    setMinutes(mi);
    setSeconds(se);
}
void Time::setHours(int ho)
{
    if(ho>=0&&ho<=24)
    {
        hours = ho;
    }
    else
        throw invalid_argument("hours must be 0-23");

}
int Time::getHours()
{
    return hours;
}
void Time::setMinutes(int mi)
{
    if(mi>=0&&mi<=59)
    {
        minutes = mi;
    }
    else
        throw invalid_argument("minutes must be 0-59");

    }

int Time::getMinutes()
{
    return minutes;
}
void Time::setSeconds(int se)
{
    if(se>=0&&se<=59)
    {
        seconds = se;
    }
    else
        throw invalid_argument("seconds must be 0-59");

}
int Time ::getSeconds()
{
    return seconds;
}
void Time ::tick()
{
    seconds = seconds + 1;
    if(seconds == 60)
    {
        minutes = minutes + 1;
        seconds = 0;
    }
    if(minutes ==60 )
    {
        hours = hours + 1;
        minutes = 0;

    }
    if(hours == 24)
    {
        hours = 0;
    }
}
void Time::Usually()
{
    cout << setfill('0' ) << setw(2) << getHours() << ": "
      << setw(2) << getMinutes() << ":" << setw(2) << getSeconds();
}
void Time::Standard()
{
    cout << ((getHours() == 0 || getHours() == 12) ? 12 : getHours() % 12)
        << ": " << setfill('0') << setw(2) << getMinutes()
        << ": " << setw(2) << getSeconds() << (hours < 12 ? "AM" : "PM");
}
 void Time::Totalseconds()
 {
     return getHours*3600+getMinutes*60+getSeconds;
 }
