#ifndef Time_h
#define Time_h

//Time class definition
class Time
{
public:
    explicit Time(int ,int ,int );//default constructor

    //get funcyions
   unsigned int getTime() const;
   unsigned  int getSecond() const;
   unsigned int getMinute() const;
    unsigned int getHour() const;

    void tick();

    void printstandard() const;


private :
    unsigned int Minute;
     unsigned int Second;
      unsigned int Hour;

};
#endif // Time_h
