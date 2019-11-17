#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
#include <ctime>
class Time
{
public:
    Time (int ,int ,int );//constructor
    Time ();//no parameter constructor
    void setTime(int,int,int);//function to set time
    void setHour(int);//function to set hour
    void setMinute(int);//function to set minute
    void setSecond(int);//function to set second
    unsigned int getHour();//function to get hour
    unsigned int getMinute();//function to get minute
    unsigned int getSecond();//function to get second
    void printUniversisal();// output
    void printStandard();//standard output
    void tick();//tick a second

private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
    unsigned int allsecond;


};


#endif // TIME_H_INCLUDED
