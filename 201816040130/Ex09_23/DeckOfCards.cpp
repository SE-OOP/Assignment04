#define DeckOfCard_h

#include<iostream>
#include<vector>
#include"Card.h"
using namespace std;


class DeckOfCards  //define class DeckOfCards
{
public:
	DeckOfCards();
	void shuffle(); //declare function for shuffle
	Card dealCard2();
	bool moreCards();


private:
	vector<Card>deck;
	int currentCard;
};
