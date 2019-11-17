#include <vector>
#include <iostream>
#include "Card.h"
#include <ctime>
#include <cstdlib>
#include "DeckOfCards.h"

DeckOfCards::DeckOfCards()
{
    for(int i=0;i<52;i++)
    {
         Card card(i%13,i/13);
         deck.push_back(card);
    }
}
void DeckOfCards::shuffle()
{
    srand(time(0));
    int stu[52];
    for(int i=0; i<52; i++)
    {
        stu[i]=int(rand())%52;
    }
    for(int i=0;i<52;i++)
    {
        Card swapc(0,0);
        swapc=deck[i];
        deck[i]=deck[stu[i]];
        deck[stu[i]]=swapc;
    }
}
Card DeckOfCards::dealCard(int n)
{
    currentCard=0;
    for(int i=0; i<n; i++)
    {
        cout << deck[i].toString() << endl;
        currentCard++;
        if((i+1)%4==0)
            cout << "\n";
    }
    return deck[n];
}
bool DeckOfCards::moreCards()
{
    if(currentCard>51)
        return false;
    else
        return true;
}
