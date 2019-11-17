#include <iostream>
#include "DeckOfCards.h"
#include "Card.h"
#include <string.h>
#include <vector>

using namespace std;

int main()
{
    DeckOfCards Deck;
    Card card=Deck.dealCard();
    Deck.shuffle();
    Deck.moreCard();
    Deck.dealCard();
    Deck.Flower();
    return 0;
}
