#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include<string>
#include<vector>
#include<iostream>
using namespace std;
class DeckOfCards
{
public:
	explicit DeckOfCards();
	void shuffle();//洗牌
	vector <Card> getDeck();
	void display();//展示牌组
private:
    vector <Card> deck;
    int currentCard;
};
#endif
