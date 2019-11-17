#include <iostream>
#include"Time.h"
using namespace std;
int main()
{
    Time s;
    s.printUniversal();
    s.printStandard();
    for(size_t i = 0;i<100;++i)
    {
        s.tick();
    }
    s.printUniversal();
    s.printStandard();
    return 0;
}
