//DeckOfCards.h
//DeckOfCards class definition
//Member functions defined in DeckOfCards.cpp
#ifndef DECKOFCARD_H
#define DECKOFCARD_H
#include<vector>
#include "Card.h"

class DeckOfCards
{
public:
    DeckOfCards();//Constructor and initializes the entire deck
    void shuffle();//A shuffle operation is a random exchange of two CARDS
    Card dealCard();//return the next card
    bool moreCard()const;//return whether there are any CARDS left to process
private:
    vector<Card>deck;
    int currentCard;
};
#endif // DECKOFCARD_H
