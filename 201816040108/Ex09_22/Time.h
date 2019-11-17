#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

class Time
{
public:
    Time(int ,int ,int );
    void setTime(int,int,int);
    void setHour(int);
    int getHour();
    void setMinute(int );
    int getMinute( );
    void setSecond(int );
    int getSecond( );
    void printUniversal() ;
    void printStandard() ;
private:
    int second;
};

#endif // TIME_H_INCLUDED
