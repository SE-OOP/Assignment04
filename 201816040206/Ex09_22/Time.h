class time
{
public:
    Time(int,int,int);
    void setTime(int,int,int);
    void printTime();
    void Tick();
    void setHour(int);
    void setMinute(int);
    void setSecond(int);
    int getHour();
    int getMinute( );
    int getSecond( );
private:
    int hour;
    int minute;
    int second;
};
