#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
class Time
{
public:
    explicit Time(int=0,int=0,int=0);
    int gethour();
    int getminute();
    int getsecond();
    void display();
private:
    int sec=0;

};


#endif // TIME_H_INCLUDED
