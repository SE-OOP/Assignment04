#include <iostream>
#include"Time.h"
using namespace std;

int main()
{
    Time t1;
    t1.setTime(10,49,59);
    t1.printStandard();
    cout<<endl;
    t1.printUniversal();
    cout<<endl;
    t1.timetick();
    t1.printStandard();
    cout<<endl;
    t1.printUniversal();
    cout<<endl;
    cout<<"timechange:";
    t1.timechange();
    t1.printTime();
    cout<<"Standardtime:";
    t1.timein(28923);
    t1.printStandard();
    cout<<endl;
    cout<<"Universal:";
    t1.printUniversal();
    cout<<endl;
    return 0;
}
