#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H

#include <vector>
#include "Card.h"
class DeckOfCards
{
public:
    DeckOfCards();
    void shuffle();
    Card dealCard();
    bool moreCards();
private:
    vector<Card> deck;//have 52 cards with vector
    int currentCard;//the next card sub
};
#endif // DECKOFCARDS_H
