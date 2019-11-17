#include <iostream>

using namespace std;

class Time
{
public:
    Time(int=0, int=0, int=0);
    void setTime(int, int, int);
    void setHours(int);
    int getHours();
    void setMinutes(int);
    int getMinutes();
    void setSeconds(int);
    int getSeconds();
    void tick();
    void Usually();
    void Standard();
    void Totalseconds();
private:
    int hours;
    int minutes;
    int seconds;
};
