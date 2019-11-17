#include "Card.h"
#include<vector>
using std::vector;
#include <iostream>
#include <string>
using namespace std;
#include "DeckOfCards.h"
#include<time.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
DeckOfCards::DeckOfCards()
{
    int i=0 ,j=0 ;
    while (i<4)
    {
        i++;
        while( j<13 )
        {
            j++;
            Card a( j , i );
            deck.push_back(a);
        }
    }
}
void DeckOfCards::shuffle()
{
    int i=0 , j,z,k;
    srand((unsigned int)time (NULL));
    while (i<52)
    {
        i++;
        z=rand()%51;
        Card f=deck[i];
        deck[i]=deck[z];
        deck[z]=f;
    }
}
Card DeckOfCards::dealCard()
{
    currentCard++;
    return deck[currentCard-1];
}
bool DeckOfCards::moreCards()
{
    while(currentCard>51)
    {
        return 0;
    }
    while(currentCard<=51)
    {
        return 1;
    }
}

Card DeckOfCards::getCards(int i)

{
    return deck[i];
}
