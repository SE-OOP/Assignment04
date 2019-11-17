#include<iostream>
#incude"DeckOFCard.h"
using namespace std;
DeckOfCrads::DeckOfCards()
{
    currentCard=0;

    for(int i=0;i<Card::totalface*totalsuits;i++)
    {
        Card Card(i%Card::totalface,i/Card::totalface);
        deck.push_back(card);
    }

    srand(time(0));
}

void DeckofCards::shuffle()
{
    currentcard=0;

    for(unsigned first =0;first < deck.size();first++)
    {

        unsigned second =rand()%deck.size();


    }


}
