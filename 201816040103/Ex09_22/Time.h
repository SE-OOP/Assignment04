class Time
{
public:
	Time(int);
	Time(int ,int ,int );
    void setTime(int ,int ,int );
	void setHour(int );
	void setMinute(int );
	void setSecond(int );
	void tick();
	
	int getHour();
	int getMinute();
	int getSecond();
	
	void printUniversal() ;
	void printStandard() ;
	
private:
	int hour;
	int minute;
	int second;
};

