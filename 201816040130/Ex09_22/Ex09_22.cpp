#include <iostream>
#include "Time.h"
#include <ctime>
#include <time.h>


using namespace std;

int main()
{
    Time time(12,25,42);  //create a Time object time
    time.printStandard();
    return 0;
}
