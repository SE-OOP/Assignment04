#include <iostream>
#include <ctime>
#include "TimePro.h"
#pragma warning(disable:4996)
using namespace std;

int main()
{
	time_t now;
	struct tm *tm_now;
	time(&now);
	tm_now = localtime(&now);
	cout << "Now is :";
	TimePro NowTime(tm_now->tm_hour, tm_now->tm_min, tm_now->tm_sec);

	//display time messages
	NowTime.printTime();
	return 0;
}
