#include <iostream>
#include <string>
#include"Card.h"
#include"DeckOfCard.h"
using namespace std;
int main()
{
	DeckOfCard deck;//constructor deck
	deck.shuffle();//shuffle cards

	//Licensing cards
	vector < Card >s;
	while (deck.moreCards())
	{
		s.push_back(deck.dealCard());
	}

	//display cards of everybody
	for(Card card : s)
    {
        cout << card.toString() << endl;
    }
	return 0;
}
