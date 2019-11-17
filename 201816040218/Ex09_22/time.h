#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
using namespace std;
#include<iostream>
#include <iomanip>

#endif // TIME_H_INCLUDED
class Time
{
public:
    Time(int , int , int );
    Time( int );
    void setTime(int , int , int );//纭畾鑼冨洿鏄惁涓?-59
    void setHour(int );
    void setMinute(int );
    void setSecond(int );
    int getHour();
    int getMinute();
    int getSecond();
    void print();
    void tick();
    int getsec();
    void s1tick();
private:
    int Hour;
    int Minute;
    int Second;
    int s;
};
