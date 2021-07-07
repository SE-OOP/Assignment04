#include<iostream>
#include<vector>
#include"Card.h"

using namespace std;

class DeckOfCards
{
public:
    DeckOfCards();
    void shuffle();
    Card dealcard(int );
    void beforecard(int );
    bool morecard();
    void judge(int );
private:
    vector<Card> deck;
    int currentCard;
};


