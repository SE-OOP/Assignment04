#include<iostream>
#include"Time.h"
#include<stdexcept>
using namespace std;
int main()
{
    Time t;
    t.setHour(18);t.setMinute(30);t.setSecond(22);
    cout<<"Universal time\n";
    t.printf();
    t.total();
    t.tike();
    cout<<"\nStandard time\n";
    t.print();
    t.total();
    t.tike();
    t.tike();
}
