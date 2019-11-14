//DeckOfCards.h
#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H
#include<vector>
#include"Card.h"
using namespace std;

class DeckOfCards
{
public:
    DeckOfCards();
    void shuffle();//shuffle
    Card dealCard(int);//return the next card
    bool moreCards();//more cards to handle
private:
    vector<Card> deck;//Card
    int currentCard;//the next card

};
#endif // DECKOFCARDS_H
