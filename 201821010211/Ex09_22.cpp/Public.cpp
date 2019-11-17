#include<stdexcept>
#include"Public.h"
using namespace std;

Public::Public(int hr,int m,int s)
{
    setSecond(hr,min,sec);
}
void Public::setSecond(int h,int s,int s)
{
    if((h>=0&&h<24)&&(m>=0&&m<24)&&(s>=0&&s<60))
    {
        hour=h;
        minute=m;
        second=hour*3600+minute*60+s;
    }
    else
        throw invalid_argument("hour,minute and/or secound was out of range");
}
unsigned int Public::getSecond()
{
    return second;
}
