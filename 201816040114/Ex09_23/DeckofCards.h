#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include "Card.h"
#include<vector>
using std::vector;
class DeckofCards
{
    friend Card;
public:
     DeckofCards();
    void shuffle();
    Card dealCard();
    bool moreCards();
private:
    int currentCard=1;
    vector <Card> deck;
};



#endif // DECKOFCARDS_H_INCLUDED
