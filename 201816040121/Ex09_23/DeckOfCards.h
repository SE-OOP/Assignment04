//Ex09_23:DeckOfCards.h
#include <iostream>
#include <vector>
#include "Card.h"
class DeckOfCards
{
public:
	DeckOfCards();//constructor cards
	void shuffle();//fuction to shuffle cards
	Card dealCard();//fuction to deal cards
	bool moreCards();//fuction to judge the number of cards
private:
	int currentCard = 51;
	vector < Card > deck;
};
