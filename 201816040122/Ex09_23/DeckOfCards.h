
#include <iostream>

using namespace std;
#include <vector>
#include "Card.h"
class DeckOfCard
{
public:
    friend class Card;
    DeckOfCard();
    void shuffle();
    void deckconstructor();
    Card dealCard();
    bool moreCards();
private:
    vector<Card>deck;
    int currentCard;
};
