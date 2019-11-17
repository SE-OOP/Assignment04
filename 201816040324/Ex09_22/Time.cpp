#include <iostream>
#include "Time.h"
#include <stdexcept>
#include <iomanip>
#include <time.h>
#include <ctime>
using namespace std ;
Time::Time(time_t s)
{

    setSecond(s) ;
}

void Time::setSecond(time_t S)

{
    second=S ;
}

time_t Time::getSecond()
{
    return second ;
}
void Time::tick ()
{
    second+=1 ;
}
