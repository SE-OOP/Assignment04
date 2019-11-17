#include<iostream>
#include<ctime>
#include "Time.cpp"
using namespace std;

int main()
{
	time_t now;
    Time time1(now);
    time1.printStandard();

    time(&now);
    Time time2(now);
    cout<<now<<endl;
    time2.printStandard();

    Time time3(23,59,59);
    time3.printStandard();
    for (int i=1;i<=5;i++)
	{
        time3.tick();
        time3.printStandard();
    } 
     
    return 0;
}
