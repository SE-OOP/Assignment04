
#include "Card.h"
#include <iostream>
#include <string>
using namespace std;

string Card::Face[13]= {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};//十三种面值
string Card::Suit[4]= {"s","H","D","C"};//四种花色
Card::Card(int face,int suit )
{
    set(face,suit);
}
void Card::set(int a,int b)
{
    setFace(a);
    setSuit(b);
}
void Card::setFace(int a)
{
    face=a;
}
void Card::setSuit(int b)
{
    suit=b;
}
int Card::getCard()
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
