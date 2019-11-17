#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

class time
{
public:
    explicit Time( int=0,int=o,int=0);
    void setTime(int,int,int);
    void tickHour();
    void tickMinute();
    void tickSecond();
private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};



#endif // TIME_H_INCLUDED
