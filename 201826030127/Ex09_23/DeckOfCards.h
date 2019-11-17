#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include<iostream>
#include<vector>
using namespace std;
#include"Card.h"
 Card vector<int,int>deck(53);
 int currentCard;
class DeckOfCards
{
public:
   DeckOfCards();
   void shuffle();
private:


};


#endif // DECKOFCARDS_H_INCLUDED
