#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
using namespace std;
#include <string>
class Card
{
public:
    explicit Card(int,int);
    void setCard(int,int);
    string toString();
private:
    int face;
    int suit;
    string Face[13]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
    string Suit[4] = {"Spade","Heart","Diamond","Club"};
};



#endif // CARD_H_INCLUDED
