#include <iostream>f
#include "Card.cpp"
#include "DeckOfCards.cpp"
using namespace std;

int main()
{
    DeckOfCards thecard;
    thecard.shuffle();
    int cnt=0;
    while(thecard.moreCards()==true)
	{
        thecard.dealCards();
    }
    return 0;
}
