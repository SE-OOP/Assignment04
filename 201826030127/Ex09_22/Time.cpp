// Lab 4: Complex.cpp
// Member-function definitions for class Complex.
#include <iostream>
using namespace std;
#include<iomanip>

#include"Time.h"

Time::Time(int h,int m,int s)
:   Hour(h),
    Minute(m),
    Second(s)
{

}
int totalseconds=0;

unsigned int Time::getHour() const
{
    return Hour*3600;
}//end function hour

unsigned int Time::getSecond() const
{
    return Second;
}//end function getsecond


unsigned int Time::getMinute() const
{

    return Minute*60;
}//end function Minute


void  Time::printstandard() const
{
    totalseconds=getHour()+getMinute()+getSecond();

    //cout<<((Hour==0||Hour==12) ? 12 : Hour%12)<<":"<<setfill('0')<<setw(2)<<Minute<<":"<<setw(2)<<Second<<(Hour<12 ? "AM" : "PM");
    cout<<totalseconds<<(Hour<12 ? "AM" : "PM")<<endl;;
}

void Time::tick()
{
   unsigned int m=Minute;
   unsigned int h=Hour;
   unsigned int s=Second;
    if(Minute==59)
    {
         Minute=0;
         Hour+=1;
         printstandard();
    }

    else
    {
         Minute+=1;
         printstandard();
         cout<<endl;
    }
    Minute=m;
    Hour=h;
    if(Hour==23)
    {
        Hour=0;
        printstandard();
        cout<<endl;
    }

    else
    {
        Hour+=1;
        printstandard();
        cout<<endl;
    }
    Hour=0;
    Minute=0;
    Second=0;
    cout<<'0'<<" "<<"AM";
    Minute=m;
    Hour=h;
    Second=s;

}



