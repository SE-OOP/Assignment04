#include <iostream>
#include "Time.h"
#include <ctime>
#include <iomanip>
#include <stdexcept>
using namespace std;
 Time::Time(int totalsecond)
 {
 	setTime(totalsecond/3600,totalsecond%3600,totalsecond%3600%60);
  } 
 
 Time::Time(int hour,int minute,int second)
 {
 	setTime(hour,minute,second);
 }
 void Time::setTime(int h,int min,int sec)
{
	setHour(h);
	setMinute(min);
	setSecond(sec);
}

void Time::setHour(int h)
{
	hour=h;	
}

void Time::setMinute(int min)
{
	minute=min;
}

void Time::setSecond(int sec)
{
	second=sec;
}

void Time::tick()
{
	second=getSecond();
	minute=getMinute();
	hour=getHour();
	if(second==60)
		{
			minute+=1;
			second=0;
			if(minute==60);
				{
					hour+=1;
					minute=0;
					if(hour==24);
						hour=0;
				}
		}
	cout << ( (getHour()==0 || getHour()==12) ? 12: getHour()% 12) << ":" << setfill('0') << setw(2) << getMinute() << ":"
	
	<< setw(2) << getSecond() << (hour < 12 ? "AM":"PM");				
}

int Time::getHour()
{
	return hour;
}

int Time::getMinute()
{
	return minute;
}

int Time::getSecond()
{
	return second;
}
void Time::printUniversal()
{
	cout << setfill('0') << setw(2) << getHour() << ":" << setw(2) << getMinute() << ":" << setw(2) << getSecond();
}

void Time::printStandard()
{
	cout << ( (getHour()==0 || getHour()==12) ? 12: getHour()% 12) << ":" << setfill('0') << setw(2) << getMinute() << ":"
	
	<< setw(2) << getSecond() << (hour < 12 ? "AM":"PM");
}
