#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <vector>
#include "Card.h"
#include "DeckOfCards.h"
using namespace std;
DeckOfCards::DeckOfCards()
{
    int i;
    for(i=0;i<52;++i)
    {
        deck.push_back(Card(i%13,i/13));
    }
    currentCard=0;
}//construct the deck
void DeckOfCards:: shuffle()
{
    Card temp(0,0);
    int num,i;
    for(i=0;i<52;i++)
    {
        num=rand()%52;
        temp=deck[num];
        deck[num]=deck[i];
        deck[i]=temp;
    }
    currentCard=0;
}//shuffle the deck
Card DeckOfCards::dealCard()
{
    return deck[currentCard++];

}
bool DeckOfCards::moreCard()
{
    if(currentCard<52)
        return true;
    return false;
}
