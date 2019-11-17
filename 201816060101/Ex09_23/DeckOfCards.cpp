#include "DeckOfCards.h"

DeckOfCards::DeckOfCards()
{
	//Add 13 faces and 4 suits
	for (int i = 1; i <= 13; i++) {
		for (int j = 1; j <= 4; j++) {
			deck.push_back(Card(i, j));
		}
	}

	//Add two ghost cards
	deck.push_back(Card(14, 1));
	deck.push_back(Card(14, 1));

	//Move current card to the top of the cards
	currentCard = 0;
}

//Shuffle the cards
void DeckOfCards::shuffle()
{
	currentCard = 0;
	srand(clock());
	for (int i = 0; i < deck.size(); i++) {
		//Pick a card at random
		int tem = rand() % deck.size();
		while (tem == i) tem = rand() % deck.size();
		//Swap two cards
		swap(deck[i], deck[tem]);
	}
}

//deal the cards
Card DeckOfCards::dealCard()
{
	return deck[currentCard++];
}

//Check if there are any cards left
bool DeckOfCards::moreCard() const
{
	return currentCard < deck.size();
}
