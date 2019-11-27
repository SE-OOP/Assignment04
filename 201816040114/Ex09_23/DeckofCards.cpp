#include "Card.h"
#include "DeckOfCards.h"
#include <bits/stdc++.h>
#define random(x) (rand()%x)

using namespace std;

DeckofCards::DeckofCards()
{
    int i,j;
    for (i=0;i<4;i++)
    {
        for(j=0;j<13;j++)
        {
            Card a(j,i);
            deck.push_back(a);
        }
    }
}
bool DeckofCards::moreCards()
{
    if(currentCard>=52)
    {
        return false;
    }


        return true;

}

void DeckofCards::shuffle()
{
    int i,a;
    Card temp(0,0);
    srand((int)time(0));
    for(i=0;i<52;i++)
    {
        a=random(52);
        Card temp=deck[i];
        deck[i]=deck[a];
        deck[a]=temp;
    }
}

Card DeckofCards::dealCard()
{
    currentCard=currentCard+1;
    return deck[currentCard-1];
}
