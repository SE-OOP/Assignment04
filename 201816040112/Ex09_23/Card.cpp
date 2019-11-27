#include "Card.h"


Card::Card(int a,int b)
{
    face=a;
    suit=b;
}
string Card::toString()
{
    string res="";
    res=color[suit]+" "+number[face];
    return res;
}
