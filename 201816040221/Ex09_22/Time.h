#include <iostream>


#include <time.h>

using namespace std;

class Time

{

public:

    explicit Time(int =0,int=0 ,int=0 );

    void setTime(int,  int, int);



    void setHour(int);

    void setMinute(int );

    void setSecond(int );



    int getHour();

    int getMinute( );

    int getSecond( );



    void printUniversal() ;

    void printStandard() ;



private:

    int hour;
    int minute;
    int second;



};
