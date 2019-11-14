#include <iostream>
#include "Card.h"

using namespace std;

Card::Card(int f, int s)
{
    face=f;
    suit=s;
}
string Card::toString()//return the card in face of suit;
{
    return f[getface()]+" of "+s[getsuit()];
}
int Card::getface() const//return face;

{
    return face;
}
int Card::getsuit() const//return suit;
{
    return suit;
}
const string Card::f[13]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
const string Card::s[4]={"hongt","heit","meih","fangk"};
