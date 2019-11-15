//Time.cpp
//Time class member-function definitions
#include<iostream>
#include<ctime>
#include<iomanip>
#include<stdexcept>
#include"Time.h"//Time class definition

using namespace std;
//constructor function to initialize private data
Time::Time()
{
    const time_t currentTime=time(0);
    const tm *localTime=localtime(&currentTime);
    setHour(localTime->tm_hour);
    setMinute(localTime->tm_min);
    setSecond(localTime->tm_sec);
    setTotalSecond(localTime->tm_hour,localTime->tm_min,localTime->tm_sec);
}
Time::Time(int Hour,int Minute,int Second)
{
    //nowtime=time(NULL);
    setHour(Hour);
    setMinute(Minute);
    setSecond(Second);
    setTotalSecond(Hour,Minute,Second);
}//end Time constructor
//acquire system time
/*time_t Time::getNowTime()
{
    return nowtime;
}*/
//convert the time to the total number of second until midnight
void Time::setTotalSecond(int Hour,int Minute,int Second)
{
    totalsecond=Hour*3600+Minute*60+Second;
    if(totalsecond>86399)
        totalsecond-=86400;
}
//get total second
int Time::getTotalSecond()
{
        return totalsecond;
}
//set hour value
void Time::setHour(int Hour)
{

    if(Hour>=0&&Hour<24)
        hour=Hour;
    else
        throw invalid_argument("hour must be 0-23");
}
//get hour value
int Time::getHour()
{
    return hour;
}
//set minute value
void Time::setMinute(int Minute)
{
    if(Minute>=0&&Minute<60)
        minute=Minute;
    else
        throw invalid_argument("minute must be 0-59");
}
//get minute value
int Time::getMinute()
{
    return minute;
}
//set second value
void Time::setSecond(int Second)
{
    if(Second>=0&&Second<60)
        second=Second;
    else
        throw invalid_argument("second must be 0-59");
}
//get second value
int Time::getSecond()
{
    return second;
}
//print time in universal-time format
void Time::printUniversal()
{
    cout<<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()<<endl;
}//end function printUniversal
//print time in standard-time format
void Time::printStandard()
{
    cout<<setfill('0')<<((getHour()==0||getHour()==12)?12:getHour()%12)<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()<<(hour<12?" AM":" PM")<<endl;
}//end function printStandard
//get total second
void Time::printTotalSecond()
{
    cout<<totalsecond<<endl;
}
//time growth function
void Time::tick()
{
    second++;
    totalsecond++;
    if(totalsecond>86399)
        totalsecond-=86400;
    if(second>59)
    {
        second-=60;
        minute++;
    }
    if(minute>59)
    {
        minute-=60;
        hour++;
    }
    if(hour>23)
        hour-=24;
}



