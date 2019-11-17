#include "Card.h"
#include <vector>
#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H
class DeckOfCards
{
public:
	DeckOfCards();
	vector<Card> deck;
	void shuffle();
	void dealCards();
	bool moreCards();
private:
	int currentCard;
	int k=0;	
};
#endif
