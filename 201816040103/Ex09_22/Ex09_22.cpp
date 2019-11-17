#include <iostream>
#include <stdexcept>
#include "Time.cpp"
#include <ctime>
using namespace std;

int main()
{	
	

	 time_t now ;
	 struct tm *tm_now ;
	 time(&now) ;
	 tm_now = localtime(&now) ;
	 printf("now datetime: %d-%d-%d %d:%d:%d\n",tm_now->tm_year+1900,tm_now->tm_mon+1, tm_now->tm_mday,
	 tm_now->tm_hour, tm_now->tm_min, tm_now->tm_sec) ;

	Time c(tm_now->tm_hour,tm_now->tm_min,tm_now->tm_sec);
	
	c.tick();
	cout<<endl;
	
	c.printUniversal();
	cout<<endl;
	
	c.printStandard();
}

