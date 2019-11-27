#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include "Card.h"
#include <vector>
class Doc
{
public:
    explicit Doc();
    void shuffle();
    vector<Card> deck;
    bool moreCards();
    void dealCards();

private:
    int currentCard;
    int k=0;


};


#endif // DECKOFCARDS_H_INCLUDED
