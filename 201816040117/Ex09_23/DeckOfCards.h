#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED

#include <vector>
#include "Card.h"

class DeckOfCards
{
public:
    DeckOfCards ();//constructor
    void shuffle();//Shuffle the deck
    Card dealCard();
    bool moreCard();
private:
    vector<Card>deck;
    int currentCard;
};


#endif // DECKOFCARDS_H_INCLUDED
