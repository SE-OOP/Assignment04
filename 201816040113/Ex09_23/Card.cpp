//Card.cpp
#include"Card.h"

Card::Card(int face,int suit)//constructor of card
{
    Face=face;
    Suit=suit;
}

string Card::toString()//return Card
{
    return Faces[Face]+" of "+Suits[Suit];
}

int Card::getFace()//get face
{
    return Face;
}

int Card::getSuit()//get suit
{
    return Suit;
}

const string Card::Faces[13]=//the amount of face'type is 13
{"A","2","3","4","5","6","7","8","9","10","J","Q","K"};

const string Card::Suits[4]=//the amount of suit'type is 4
{"heart","diamond","club","spade"};
