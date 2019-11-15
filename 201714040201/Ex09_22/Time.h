//Time.h
//Time class definition
//member functions defined in Time.cpp
#ifndef TIME_H
#define TIME_H

class Time{
public:
    Time();//constructor overload
    Time(int,int ,int );//constructor function to initialize private data
    void setTotalSecond(int ,int ,int );//convert the time to the total number of second until midnight
    int getTotalSecond();//get total second
    //time_t getNowTime();//acquire system time
    void setHour(int );//set hour value
    int getHour();//get hour value
    void setMinute(int );//set minute value
    int getMinute();//get minute value
    void setSecond(int );//set second value
    int getSecond();//get second value
    void printUniversal();//print time in universal-time format
    void printStandard();//print time in standard-time format
    void printTotalSecond();//get total second
    void tick();//time growth function
private:
    //time_t nowtime;
    int hour;
    int minute;
    int second;
    int totalsecond;
};

#endif // TIME_H
