//Ex09_23:DeckOfCards.cpp
#include <iostream>
#include <algorithm>
#include <vector>
#include "Card.h"
#include "DeckOfCards.h"

//constructor cards
DeckOfCards::DeckOfCards()
{
	//push 52 cards into deck
	for (int i = 0; i < 13; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			Card card(i, j);
			deck.push_back(card);
		}
	}
}

//fuction to shuffle cards
void DeckOfCards::shuffle()
{
	random_shuffle(deck.begin(), deck.end());
}

//fuction to change to next card
Card DeckOfCards::dealCard()
{
	currentCard -= 1;
	return deck[currentCard];
}

//fuction to judge if there are cards for deal
bool DeckOfCards::moreCards()
{
	if (currentCard < 0)
		return false;
	else
		return true;
}
