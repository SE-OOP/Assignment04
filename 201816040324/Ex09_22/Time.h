#ifndef TIME_H
#define TIME_H
#include <time.h>
#include <ctime>

using namespace std ;
class Time
{
public:
    Time(time_t=0) ;
    void setSecond(time_t) ;
    time_t getSecond () ;
    void tick() ;
private:
    time_t second ;
} ;
#endif

