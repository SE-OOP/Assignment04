#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

class Time
{
public:
    Time(int=0 ,int=0,int=0);//初始化
    void setTime(int,int,int);//获取时间
    void setHour(int);
    int getHour();
    void setMinute(int );
    int getMinute( );
    void setSecond(int );
    int getSecond( );
    void printUniversal() ;//输出国际时间
    void printStandard() ;//输出当地时间
private:
    int second;
};

#endif // TIME_H_INCLUDED
