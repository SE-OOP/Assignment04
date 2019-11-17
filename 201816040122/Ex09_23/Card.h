#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>
using namespace std;
class Card
{
public:
    explicit Card(int=0,int=0);
    static string Face[13];
    static string Suit[4];
    string toString();
    void set(int ,int );
 void setFace(int );
 void setSuit(int );
 int getCard();
 int getSuit();
private:
    int face;
    int suit;

};
#endif // CARD_H
