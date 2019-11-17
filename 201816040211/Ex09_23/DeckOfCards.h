#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include <vector>

using namespace std;

class DeckOfCards
{
public:
    DeckOfCards();
    void  shuffle();
    bool  moreCard();
    Card dealCard();
    void Flower();
private:
    int currentCard;
};


#endif // DECKOFCARDS_H_INCLUDED
