#include<iostream>
#include"card.h"
#include<string>

Card::Card(int Face,int Suit)
{
    face = Face;
    suit = Suit;
}
string Card::toString()
{
    return facedata[face]+" of "+suitdata[suit];
}
int Card::getface()
{
    return face;
}
int Card::getsuit()
{
    return suit;
}

const string Card::facedata[facenumber]=
{"A","2","3","4","5","6","7","8","9","10","J","Q","K"};

const string Card::suitdata[suitnumber]=
{"heart","diamond","club","spade"};


