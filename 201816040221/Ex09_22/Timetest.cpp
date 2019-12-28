#include <iostream>


#include <time.h>

using namespace std;



int main()

{

    Time t1;



   time_t currenttime=time(0);

    struct tm *localtime=localtime(&currenttime);


   time( &rawtime );



   

   cout<<("当前的本地时间和日期：%s", asctime(info));

   t1.setHour(localtime->tm_hour);

   t1.setMinute(localtime->tm_min);

   t1.setSecond(localtime->tm_sec);





    cout<<"Constructed with :\n\nt1:\n";

    t1.printUniversal();

    cout<<endl;

    t1.printStandard();
    return 0;

}
