#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>
using namespace std;
class Card
{
public:
    Card(int,int);
    string toString();
    int getSuit();
    int getFace();
private:
    int face;//面值
    int suit;//花色
    static string faceList[13];//pass Face[0],store"A,2,~J,Q,K"
    static string suitList[4];//pass Suit[0],store"Spade","Heart","Diamond","Club"
};
#endif // CARD_H
