#include <stdexcept>

#include <iomanip>
#include <time.h>
#include <iostream>

#include "Time.h"



using namespace std;



Time::Time(int h,int m,int s)

{

     setTime(h ,m , s);

}

void Time::setTime(int h, int m, int s)

{

    second=0;

    setHour(h);

    setMinute(m);

    setSecond(s);

}

void Time::setHour(int h)

{
    int hours;
    if(h>=0&&h<24)

        hours=h;
        else
            throw invalid_argument("hour must be 0-23")
    second+=h*3600;


}

int Time::getHour()

{

    return *this;

}

void Time::setMinute(int m)

{
    if(m>=0&&m<59)
        second+=m*60;

}

int Time::getMinute()

{

    return second%360/60;

}

void Time::setSecond(int s)

{

    second+=s;

}

int Time::getSecond()

{

    return second;

}

void Time:: printUniversal()

{

    cout<<setfill('0')<<setw(2)<<getHour()<<":"

       <<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();

}

void Time:: printStandard()

{

    cout<<setfill('0')<<setw(2)<<((getHour()==0||getHour()==12)?12 :getHour()%12)<<":"

       <<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()

       <<(getHour()<12?"AM":"PM");

}
