// Lab 4: ComplexTest.cpp
#include <iostream>
using namespace std;

#include "Time.h"
#include<ctime>

int main()
{
    int totalseconds;
    short h,m,s;
    time_t timer;
	struct tm *now;
	struct tm_hour;

	time(&timer);
	now = localtime(&timer);
	h=now->tm_hour;
	m=now->tm_min;
	s=now->tm_sec;
	Time t(h,m,s);
	t.printstandard();
	t.tick();


} // end main
