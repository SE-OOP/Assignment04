#include "Time.h"
#include<time.h>
using namespace std;
int main()
{
    time_t rawtime;
    struct tm  timeinfo;


    time (&rawtime);
    timeinfo = *(localtime (&rawtime));
    //cout <<"Current local time and date: " << asctime(timeinfo);
    //cout <<timeinfo.tm_hour;

    Time t(timeinfo.tm_hour, timeinfo.tm_min, timeinfo.tm_sec);


    time_t t2;
    time(&t2);
    Time t1(t2);




    for(int i=10; i>0;i--)
    {
        cout << "用时分秒传递的:";
        t.print();
        t.tick();
        cout << "用时间戳传递的:";
        t1.print();
        t1.tick();
        cout <<endl;
    }

    return 0;
}

