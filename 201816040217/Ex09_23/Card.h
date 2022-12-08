#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include<bits/stdc++.h>
using namespace std;

class Card
{
public:
    //构造函数初始值为0，0
    Card(int = 0,int = 0);
    void setFace(int);
    void setSuit(int);
    int getFace();
    int getSuit();
    //获得花色和面值
    string toString();
    //定义花色和面值的string数组
    static string allface[4],allsuit[13];

private:
    //花色和面值
    int face, suit;


};

#endif // CARD_H_INCLUDED
