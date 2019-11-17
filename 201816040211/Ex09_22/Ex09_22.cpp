#include<iostream>
#include"Time.h"
using namespace std;

int main()
{
    int seconds;
    cin>>seconds;
    Time time(seconds);
    time.PrintUniversal();
    time.PrintStandard();
    time.tick();
    time.PrintStandard();
}
