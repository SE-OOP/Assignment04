//Card.h
#ifndef CARD_H
#define CARD_H
#include<string>
using namespace std;
class Card
{
public:
       Card(int,int);//constructor
       int getFace();//get the face
       int getSuit();//get the suit
       string toString();//return Card

private:
       int Face,Suit;
       static const string Faces[13];//face
       static const string Suits[4];//suit
};
#endif // CARD_H
