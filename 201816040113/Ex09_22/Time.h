#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

class Time
{
public:
    explicit Time(int=0,int=0,int=0);

    //set function
    void setTime(int,int,int);
    void setHour(int);
    void setMinute(int);
    void setSecond(int);
    void setTotalSeconds(int);
    //get function
    int getHour() const;
    int getMinute() const;
    int getSecond() const;
    int getTotalSeconds() const;//总的秒数

    void printUniversal() const;
    void printStandard() const;
private:
    int Hour;
    int Minute;
    int Second;
    int TotalSeconds=0;

};

#endif // TIME_H_INCLUDED
