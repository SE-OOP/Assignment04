#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"ctime"
#include"Time.h"
using namespace std;
int main()
{
    Time t;
    t.printUniversal();
    t.printStandard();
    t.tick();
    t.printUniversal();
    t.printStandard();
}
