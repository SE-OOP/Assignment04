#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

class Time {
public:
	Time();	//Constructor
	Time(const int hour, const int minute, const int second);	//Constructor
	void setHour(const int hour);	//setHour
	void setMinute(const int minute);	//setMinute
	void setSecond(const int second);	//setSecond
	int getHour() const;	//getHour
	int getMinute() const;	//getMinute
	int getSecond() const;	//getSecond
	void printUniversal() const;//printUniversal
	void printStandard() const;	//printStandard
private:
	int second;
};
