#include <stdexcept>
#include <iomanip>
#include <iostream>
#include "Card.h"
#include <string>
using namespace std;
string Card::faceArray[13] ={"A","2","3", "4", "5", "6", "7", "8", "9", "10" , "J","Q" ,"K" };
string Card::suitArray[4] = {"hert","club","diamond","spade"};

Card::Card(int f, int s)
{
    setFace(f);
    setSuit(s);
}
void Card ::setFace(int f)
{
    face = f;
}
void Card:: setSuit(int s)
{
    suit = s;
}
int Card::getFace()
{
    return face;
}
int Card :: getSuit()
{
    return suit;
}
string Card::toString()
{
    return (faceArray[face] + "of" + suitArray[suit]);
}
