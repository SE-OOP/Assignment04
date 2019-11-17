#include <iostream>
#include"Time.h"
#include <iomanip>
#include<stdexcept>
using namespace std;
Time::Time(int hour, int minute,int second)
{
    setTime(hour,minute,second);
}
void Time::setTime(int h,int m,int s)
{

    setHour(h);
    setMinute(m);
    setSecond(s);
}//end funciton setTime
//set hour value
void Time::setHour(int h)
{
  //  int totalSeconds;
    hour=h;
   // totalSeconds=(hour*3600)+(getMinute()*60)+getSecond();
    //return *this;
}//end function setHour
void Time::total()
{
        int totalSeconds;

    totalSeconds=(hour*3600)+(getMinute()*60)+getSecond();
    cout<<"\ntotal\n"<<totalSeconds<<endl;
}//function Total time
int Time::getHour()const
{
    return hour;
}//end function getHOUR
void Time::setMinute(int m)
{
    minute=m;
}//end function setMinute
void Time::setSecond(int s)
{
    second=s;
}//end function setSecond

int Time::getMinute()const
{
    return minute;
}//end function getMinute
int Time::getSecond()const
{
    return second;
}//end function getSecond
void Time::printf()const
{

 cout<<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();

}//end function printUniversal
void Time::print()const
{
      cout<<((getHour()==0||getHour()==12)? 12 : getHour()%12)<<":"<<setfill('0')<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()<<(hour<12? "AM" :"PM");
}
//end function in standard-time
void Time::tike()
{
    if(second<=59&&second>=0)
    {
        second++;
    }
    else if(second=60)
    {

          if(minute<=59&&minute>=0)
          {

            second=0;
            minute++;
          }
          else if(minute=60)
            hour++;

          minute=0;

    }
     cout << (( hour == 0 || hour == 12) ? 12: hour % 12 )<< ":" << setfill( '0' ) << setw( 2 ) << minute<< ":" << setw( 2 ) << second << ( hour < 12 ? " AM" : " PM");
    }
