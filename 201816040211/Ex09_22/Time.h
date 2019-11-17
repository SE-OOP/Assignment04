#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

#include<string>
class Time
{
public:
    Time (int);
    void sethour(int allsecond);
    int gethour();
    void setsecond(int allsecond);
    int getsecond();
    void setminute(int allsecond);
    int getminute();
    void PrintUniversal();
    void PrintStandard();
    int tick();
private:
    int allsecond;
    int hour;
    int minute;
    int second;//私有成员
};


#endif // TIME_H_INCLUDED
