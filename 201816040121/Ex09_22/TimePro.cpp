#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "TimePro.h"
using namespace std;

//fuction to constructor time
TimePro::TimePro(int h, int m, int s)
{
	int time = (h * 3600) + (m * 60) + s;
	setTime(time);
}

//fuction of destructor
TimePro::~TimePro()
{
	cout << "This object was destructed" << endl;
}

//fuction to set time
void TimePro::setTime(int s)
{
	second = s;
}

//fuction to retrieve time
int TimePro::getTime()
{
	return second;
}

//fuction to print time message
void TimePro::printTime()
{
	int s = getTime();
	int h = s / 3600;
	int m = (s % 3600) / 60;
	cout << setfill('0') << setw(2) << h << ":" << setw(2) << m << ":" << setw(2) << ((s%3600)%60) << endl;
}
