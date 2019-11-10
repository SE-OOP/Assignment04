#include "Time.h"
#include <bits/stdc++.h>
using namespace std;
Time::Time(int th,int tm,int ts)
{
    sec=3600*th+60*tm+ts; //get the sum of seconds;
}
int Time::gethour()
{
    int a=0;
    while(sec>3600)
    {
        sec=sec-3600;
        a++;
    }

    return a;
}
int Time::getminute()
{
    int a=0;
    while(sec>60)
    {
        sec=sec-60;
        a++;
    }

    return a;
}
int Time::getsecond()
{
    int a=0;
    while(sec>0)
    {
        sec--;
        a++;
    }

    return a;
}
void Time::display()
{
    int a,b,c;
    a=gethour();
    b=getminute();
    c=getsecond();
    cout<<setfill('0')<<setw(2)<<a<<":"<<setw(2)<<b<<":"<<setw(2)<<c;
}
