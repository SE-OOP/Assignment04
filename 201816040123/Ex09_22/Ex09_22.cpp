#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
    time_t t;
    Time t1(t);
    Time t2(0,6,59);
    Time t3(23,58,59);
    t1.printStandard();
    t1.printUniversal();
    t2.printStandard();
    t2.printUniversal();
    cout<<endl;

    for(int i=1;i<200;i++)
    {
        t3.tickTime();
        t3.printStandard();
    }
    cout << endl;
}
