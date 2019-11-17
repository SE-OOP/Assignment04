#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"
using namespace std;

Time::Time (int hour,int minute,int second)
{
	setTime(hour,minute,second);
}

Time::Time (int seconds)
{
	setTime(seconds/3600,seconds%3600/60,seconds%3600%60);
}

Time::Time(time_t now)
{
    struct tm *tm_now;
    time(&now);
    tm_now = localtime(&now);
    setTime(tm_now->tm_hour,tm_now->tm_min,tm_now->tm_sec);
}

void Time::setTime(int h,int m,int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void Time::setHour(int h)
{
	if (h>=0&&h<24)
	hour=h;
	else
	throw invalid_argument("hour must be 0-23");
}

void Time::setMinute(int m)
{
	if (m>=0&&m<60)
	minute=m;
	else
	throw invalid_argument("minute must be 0-59");
}

void Time::setSecond(int s)
{
	if (s>=0&&s<60)
	second=s;
	else
	throw invalid_argument("second must be 0-59");
}

unsigned int Time::getHour() const
{
	return hour;
}

unsigned int Time::getMinute() const
{
	return minute;
}

unsigned int Time::getSecond() const
{
	return second;
}

void Time::printUniversal() const
{
	cout<<setfill('0')<<setw(2)<<getHour()
	<<":"<<setw(2)<<getMinute()
	<<":"<<setw(2)<<getSecond();
}

void Time::printStandard() const
{
	cout<<((getHour()==0||getHour()==12)?12:getHour()%12)
	<<":"<<setfill('0')<<setw(2)<<getMinute()
	<<":"<<setw(2)<<getSecond()<<(hour<12?" AM":" PM");
}

void Time::tick()
{
	int x,y,z;
	x=getSecond();y=getMinute();z=getHour();
	x++;
	if (x<60)
	setSecond(y);
	else
	{
		setSecond(0);
		y++;
		if(y<60)
		setMinute(y);
		else
		{
			setMinute(0);
			z++;
			if(z<24)
			setHour(z);
			else
			setHour(0);
		}
		
	}
}
