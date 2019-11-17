#include <iostream>
#include "DeckOfCards.h"

using namespace std;

int main()
{
    DeckOfCards DeckOfCards;
    DeckOfCards.shuffle();
    DeckOfCards.dealcard();
    return 0;
}
