//Ex09_23:Test.cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include "Card.h"
#include "DeckOfCards.h"

int main()
{
	DeckOfCards deck1;//constructor deck
	deck1.shuffle();//shuffle cards

	//Licensing cards
	vector < Card > Xu;
	while (deck1.moreCards())
	{
		Xu.push_back(deck1.dealCard());
	}

	//display cards of everybody
	for(Card card : Xu)
    {
        cout << card.toString() << endl;
    }
	return 0;
}
