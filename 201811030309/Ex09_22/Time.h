#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

class Time
{
public:
    Time();
    void setTime(int, int, int);
    Time& setHour(int);
    Time& setMinute(int);
    Time& setSecond(int);

    unsigned int getHour() const;
    unsigned int getMinute() const;
    unsigned int getSecond() const;
    unsigned int gettotalseconds() const;

    void printUniversal() const;
    void printfStandard() const;

private:
    unsigned int totalseconds;
};

#endif // TIME_H_INCLUDED
