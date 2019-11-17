#ifndef PUBLIC_H_INCLUDED
#define PUBLIC_H_INCLUDED

class Public
{
public:
    explicit Time( int=0,int=o,int=0);
    void setsecond(int,int,int);
private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};

#endif // PUBLIC_H_INCLUDED
