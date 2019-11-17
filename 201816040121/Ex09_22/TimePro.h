#ifndef TIMEPRO_H
#define TIMEPRO_H
#include <ctime>
//TimePro class definition
class TimePro
{
public:
	//constructor time
	TimePro(int = 0, int = 0, int = 0);
	~TimePro();//destructor time
	void setTime(int);//set time
	int getTime();//retrieve time
	void printTime();//display time message
private:
	int second;
};
#endif // !TIMEPRO_H

