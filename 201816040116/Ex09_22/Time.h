#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
class Time
{
    public:
        Time();
        explicit Time(int,int,int);
        void setTime(int=0,int=0,int=0);
        void setHour(int);
        void setMinute(int);
        void setSecond(int);
        void setMiaoshu(int,int,int);
        void tick();
        int getHour()const;
        int getMinute() const;
        int getSecond() const;
        int getMiaoshu();
        void printUniversal() const;
        void printStandard() const;
    private:
        int hour;
        int minute;
        int second;
        int miaoshu;
};
#endif // TIME_H_INCLUDED
