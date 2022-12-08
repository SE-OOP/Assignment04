#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;

class Time
{
public:
    explicit Time( int = 0, int = 0, int = 0);
    //使用时分秒存储，初始化
    void setTime(int, int, int );
    void setHour(int);
    void setMinute(int);
    void setSecond(int);
    //使用秒存储初始化
    void setTime_(int);

    unsigned int getHour() const;
    unsigned int getMinute() const;
    unsigned int getSecond() const;
    unsigned int getTime_();
    //打印时间
    void printUniversal() const;
    void printStandard() const;
    //到下一秒
    void tick();
private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
    int time_;
    time_t timer;

};


#endif // TIME_H_INCLUDED
