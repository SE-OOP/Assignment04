#include <iostream>
#include"Time.h"
using namespace std;

int main()
{
    Time t1;

    t1.setTime(23,59,59);
    t1.Standard();
    cout<<endl;
    t1.Usually();
    cout<<endl;
    t1.tick();
    t1.Standard();
    cout<<endl;
    t1.Usually();
    cout<<endl;
    t1.Totalseconds();
    cout<<endl;

    return 0;
}
