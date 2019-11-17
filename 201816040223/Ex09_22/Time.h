#include<iostream>
using namespace std;
class Time
{
  public:
      explicit Time(int=0,int=0,int=0);
         void setTime(int,int,int);// set Hour, minute,  second
        void total();
        void setHour(int);
        void setMinute(int);
        void setSecond(int);
        int getHour()const;
        int getMinute()const;
        int getSecond()const;
        void print()const;//print time in universal-time format
       void printf()const;//print time in standard-time format
       void tike();

  private:
    int hour;
    int minute;
    int second;

};
