#include "Time.h"

//Constructor
Time::Time()
{
	time_t sec = time(NULL);
	setSecond(sec % 60);
	setMinute(sec / 60 % 60);
	setHour(sec / 60 / 60 % 24 + 8);
}

//Constructor
Time::Time(const int hour, const int minute, const int second)
{
	setSecond(second);
	setMinute(minute);
	setHour(hour);
}

//setHour
void Time::setHour(const int hour)
{
	if (hour < 0 || hour > 23) return;
	this->second -= (this->second / 60 / 60 * 60 * 60);
	this->second += hour * 60 * 60;
}

//setMinute
void Time::setMinute(const int minute)
{
	if (minute < 0 || minute > 59) return;
	this->second -= (this->second / 60 % 60 * 60);
	this->second += minute * 60;
}

//setSecond
void Time::setSecond(const int second)
{
	if (second < 0 || second > 59) return;
	this->second -= (this->second % 60);
	this->second = second;
}

//getHour
int Time::getHour() const
{
	return second / 60 / 60 % 24;
}

//getMinute
int Time::getMinute() const
{
	return second / 60 % 60;
}

//getSecond
int Time::getSecond() const
{
	return second % 60;
}

void Time::printUniversal() const
{
	cout << setfill('0') << setw(2) << getHour() << ":" << setw(2) << getMinute() << ":" << setw(2) << getSecond() << "\n";
}

void Time::printStandard() const
{
	cout << setfill('0') << setw(2) << (getHour() == 0 || getHour() == 12 ? 12 : getHour() % 12) << ":" << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (getHour() < 12 ? " AM" : " PM") << "\n";
}
