#include <vector>
#include <random>
#include <ctime>
#include <algorithm>
#include "Card.h"
using namespace std;

class DeckOfCards {
public:
	DeckOfCards();	//Constructor
	void shuffle();	//Shuffling function
	Card dealCard();//dealing function
	bool moreCard() const;	//Check if there are any cards left
private:
	vector<Card> deck;	//Card stack
	int currentCard;	//Card cursor
};
