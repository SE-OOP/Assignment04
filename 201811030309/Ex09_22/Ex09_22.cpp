#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "Time.h"

using namespace std;

int main()
{
    Time t;
    t.setHour(16).setMinute(36).setSecond(56);

    cout << "the universal time: ";
    t.printUniversal();

    cout << "\n the standard time: ";
    t.printfStandard();

    cout << "\nafter set the new time: ";
    t.setTime(16, 6, 6);
    t.printfStandard();

    cout << "\nthe totalSeconds: ";
    cout << t.gettotalseconds() <<endl;
}
