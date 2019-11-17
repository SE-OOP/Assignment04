
#include<time.h>
class Time
{
public:
    explicit Time(int ,int ,int);
    void timechange();
    void printTime();
    void setTime(int ,int ,int );
    void setHour(int );
    void setMinute(int );
    void setSecond(int );
    void timetick();
    void timein(int );
     int getHour() const;
     int getMinute() const;
     int getSecond() const;

    void printUniversal() const;
    void printStandard() const;
private:
     int hour;
     int minute;
     int second;
     int alltime;
    time_t tdata1;
    time_t tdata2;

};


