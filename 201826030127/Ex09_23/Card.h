#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include<iostream>
using namespace sd;
class Card
{
public:
    Card(int,int);
    string static b[4]={red heart,black Heart,Red square,club};
    string static a[14]={0,A,2,3,4,5,6,7,8,9,10,J,Q,K};
    Card toString();
private:
    int face;
    int suit;
};


#endif // CARD_H_INCLUDED
