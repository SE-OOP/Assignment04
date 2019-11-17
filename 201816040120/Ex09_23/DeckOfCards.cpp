#include <iostream>
#include "Card.h"
#include "DeckOfCards.h"
#include <cstdlib>
#include <vector>
using namespace std;
DeckOfCards :: DeckOfCards()
{
    setCurrentCard(0);
    for(size_t i = 0;i<4;++i)
    {
        for(size_t j= 0; j<13;++j)
        {
            Card cards(i,j);
            deck.push_back(cards.toString());
        }
    }
}
void DeckOfCards::shuffle()
{
    for(size_t i =0;i<52;++i)
    {
        currentCard = i;
        currentCard = rand() % 52 ;
        swap(deck[currentCard],deck[i]);
        i++;
    }
}
string DeckOfCards::dealCard()
{
    return deck[currentCard];
}
bool DeckOfCards::moreCards()
{
    if(dealCard()=="")
    {
        return false;
    }
        return true;
}
void DeckOfCards::setCurrentCard(int c)
{
    currentCard = c;
}
int DeckOfCards::getCurrentCard()
{
    return currentCard;
}
