#include "Card.h"
Card::Card(int a,int b)
{
    face=a;
    suit=b;
}
string Card::toString()
{
    string card=" of ";
    card=Face[face]+card+Suit[suit];
    return card;
}
