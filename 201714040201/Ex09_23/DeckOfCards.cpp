//DeckOfCards.cpp
//DeckOfCard class member-function definitions
#include<time.h>
#include<stdlib.h>
#include <iostream>
#include "DeckOfCards.h"//DeckOfCards class definition
using namespace std;

DeckOfCards::DeckOfCards()//Constructor and initializes the entire deck
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=13;j++)
        {
            deck.push_back(Card(j,i));
        }
    }
    deck.push_back(Card(14,0));
    deck.push_back(Card(15,0));
    currentCard=53;
}
void DeckOfCards::shuffle()//A shuffle operation is a random exchange of two CARDS
{
    currentCard=53;
    srand(clock());
    for(int i=0;i<54;i++)
    {
        int temp=rand()%54;
        swap(deck[i],deck[temp]);
    }
}
Card DeckOfCards::dealCard()//return the next card
{
    return deck[currentCard--];
}
bool DeckOfCards::moreCard()const//return whether there are any CARDS left to process
{
    return currentCard>=0;
}
