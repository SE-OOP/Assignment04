#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"
using namespace std;
int main()
{
    Time a;//construct a object 'a'
    Time c(7,8,9);//construct a object 'c'
    a.printStandard();//a's standard output
    c.printStandard();//c's standard output
    cout<<"\n";
    a.tick();//a's next second
    a.printStandard();//a's standard output again
    c.tick();//c's next second
    c.printStandard();//c's standard output again
    return 0;
}
