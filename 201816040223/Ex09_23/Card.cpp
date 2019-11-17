#include"card.h"

Card::Card(int faceNumber,int suitNumber)
{
    face=faceNumber;
    suit=suitNumber;
}

string Card::toString()
{
    return faceNames[face]+" of "+suitNames[suit];
}

int Card::getFace() {return face;}
int Card::getSuit() {return suit;}

const string Card::faceNames[totalFaces]=
{"A","2","3","4","5","6","7","8","9","10","J","Q","K"};

const string Card::suitNames[totalSuits]=
{"heart","diamond","club","spade"};
