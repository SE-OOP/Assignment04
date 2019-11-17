#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
using namespace std;
class Time
{
public:
    explicit Time(int=0,int=0,int=0);
    void setTime(int,int,int);
    unsigned int getHour()const;
    unsigned int getMinute()const;
    unsigned int getSecond()const;
    void printUniversal()const;
    void printStandard()const;
private:
    unsigned int second;
};



#endif // TIME_H_INCLUDED
