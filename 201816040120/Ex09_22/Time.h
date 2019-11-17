#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

class Time
{
public:
    explicit Time();
    void setSeconds(int );
    int getSeconds();
    void printUniversal()const;
    void printStandard() const;
    void tick();
private:
    int seconds;
};
#endif
