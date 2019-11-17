#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <iostream>

#include <string>
using namespace std;
class Card
{
public:
    Card(int,int);//constructor
    void setFaceAndSuit(int,int);//function to set face and suit
    string toString();//function to get face and suit
    void setFace(int);
    void setSuit(int);
    int getFace();
    int getSuit();
private:
    int face;
    int suit;
    static string Face[13];
    static string Suit[4];
};


#endif // CARD_H_INCLUDED
