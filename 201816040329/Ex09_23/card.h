#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#define N 100
#include<string>

class card
{
public:
    string tostring();//一个函数返回card
    void setsuit(int su);
    void setface(int fa);
    int getface();
    int getsuit();
     mycard(int,int);
private:
    int face;
    int suit;
    static string suit[4];
    static string face[13];
};


#endif // CARD_H_INCLUDED
