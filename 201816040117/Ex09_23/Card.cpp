#include <iostream>
#include <iomanip>
#include <stdexcept>
#include"Card.h"
using namespace std;

string Card::Face[13]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
string Card::Suit[4]={"Heart","Spade","Club","Diamond"};
Card::Card(int f,int s)
{
    setFaceAndSuit(f,s);
}//Initialize the face and suit
void Card::setFaceAndSuit(int f,int s)
{
    setFace(f);
    setSuit(s);
}//function to set face and suit
void Card::setFace(int f)
{
    face=f;
}
void Card::setSuit(int s)
{
    suit=s;
}
int Card::getFace()
{
    return face;
}
int Card::getSuit()
{
    return suit;
}
string Card::toString()
{
    return (Face[face]+" of "+Suit[suit]);
}
