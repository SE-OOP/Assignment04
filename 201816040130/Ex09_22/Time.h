class Time  //definition for the class Time
{
public:
    Time(int,int,int); //Declare a constructor included hour,minute and second
    void setTime(int,int,int); //define function to set hour
    void setHour(int);
    void setMinute(int);
    void setSecond(int);
    int getHour()const; //define function to get hour
    int getMinute()const;
    int getSecond()const;
    void tick(); //declare function for the tick
    void printStandard();  //declare function for the printStandard
private:
    int hour;
    int minute;
    int second;
};
