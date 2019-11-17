#include <string>
using namespace std;
#ifndef CARD_H
#define CARD_H 
class Card
{
	friend class DeckOfCards;
public:
	Card(int,int);
	string toString();
private:
	int face;
	int suit;
 	string number[13]={"1","2","3","4","5","6","7","8","9","10","11","12","13"};
	string color[4]={"Spade","Heart","Diamond","Club"};
};
#endif
