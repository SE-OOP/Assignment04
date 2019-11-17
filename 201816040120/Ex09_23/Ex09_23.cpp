#include<iostream>
#include"DeckOfCards.h"
#include "Card.h"
using namespace std;

int main()
{
    DeckOfCards card;
    card.shuffle();
    for(size_t i =0;i<52;i+=4)
    {
        cout <<card.deck[i]<<endl<<card.deck[i+1];
    }
    return 0;
}
