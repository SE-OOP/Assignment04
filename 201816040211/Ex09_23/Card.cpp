#include <iostream>
#include "Card.h"
#include <string>

string Card::faces[13]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
string Card::colours[4]={"spades","hearts","clubs","diamonds"};

Card::Card(int a,int b)
    : face(a),
      suit(b)
{

}

void Card::setface(int face)
{
    face=face;
}// end setface

int Card::getface()
{
    return face;
}// end getface

void Card::setsuit(int suit)
{
    suit=suit;
}// end setsuit

int Card::getsuit()
{
    return suit;
}// end getsuit

string Card::toString()
{
    return faces[face] + "of" + colours[suit];
} // end tostring
