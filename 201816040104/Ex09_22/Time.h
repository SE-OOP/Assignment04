class Time
{
public:
    explicit Time ( double=0 , double=0, double=0);
    void settime(double , double ,double );
    void printf();
    void setsecond( double );
    void setminute ( double );
    void sethour ( double );
    int getsecond();
    int getminute();
    int gethour();
    void tick();
    void setcountsecond(double , double , double);
    int getcountsecond();
private:
    int second;
    int minute;
    int hour;
    int countsecond;
};
