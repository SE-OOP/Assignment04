#include "DeckOfCards.h"
#include <iostream>

using namespace std;

int main() {
	DeckOfCards D;

	//Deal before shuffling
	cout << "Before shuffling, start deal:\n";
	while (D.moreCard()) {
		Card c = D.dealCard();
		cout << "The card is: " << c.toString() << "\n";
	}

	//Start shuffling
	D.shuffle();

	//Deal after shuffling
	cout << "\nShuffle complete, start deal:\n";
	while (D.moreCard()) {
		Card c = D.dealCard();
		cout << "The card is: " << c.toString() << "\n";
	}
	return 0;
}
