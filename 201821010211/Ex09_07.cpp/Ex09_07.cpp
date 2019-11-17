#include<iostream>
#include<stdexcept>
#include"Time.h"
using namespace std;
int main()
{
    Time t;
    t.setTime(12,32,44);
    cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<"\n"<<endl;
    t.tickHour();
    cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<"\n"<<endl;
    t.tickMinute();
    cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<"\n"<<endl;
    t.tickday();
    cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<"\n"<<endl;
}
