#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

class Time
{
public:
    Time();//构造函数
    void tick();//tick函数,使时间增加1秒
    /*set函数*/
    void setHour(int);
    void setMinute(int);
    void setSecond(int);
    /*get函数*/
    getHour();
    getMinute();
    getSecond();
private:
    int hour;
    int minute;
    int second;
};

#endif // TIME_H_INCLUDED
