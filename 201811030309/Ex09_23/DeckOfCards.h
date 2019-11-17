#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include "Card.h"
#include <vector>

using namespace std;

class DeckOfCards
{
public:
    DeckOfCards();//put all cards into the deck;
    void shuffle();//shuffle all the cards;
    Card dealCard(int);//take the cards to people(cout them);
    bool moreCards();//judge it have cards to cout;
private:
    vector<Card>deck;
    int currentCard;

};


#endif // DECKOFCARDS_H_INCLUDED
