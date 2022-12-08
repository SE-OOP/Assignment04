#ifndef TIME_H
#define TIME_H
#include <iostream>
class Time
{
public:
    Time();//构造函数
    void setTime(int,int,int);
    void setHour(int);
    void setMinute(int);
    void setSecond(int);  //传递参数用来初始化时间
    unsigned int getHour()const;
    unsigned int getMinute()const;
    unsigned int getSecond()const; //获取时间
    void printUniversal()const; //打印12小时格式时间
    void printStandard()const;//打印24小时格式时间
    void tick(); //测试tick函数，使时间增加1秒
private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;  //定义数据成员
};
#endif // TIME_H
