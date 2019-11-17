#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
class Time
{
public:
    explicit Time(time_t &t);
    Time(int=0,int=0,int=0);


    void setTime(int,int,int);
    void nowTime(time_t &);
    void tickTime();

    time_t getTotalSecond() const;

    void printUniversal() const;
    void printStandard() const;
private:

    int totalSecondI;
    time_t totalsecond;
};
#endif // TIME_H_INCLUDED
