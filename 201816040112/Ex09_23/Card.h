#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED

#include <string>
using namespace std;
class Card
{
    friend class Doc;
public:
    explicit Card(int,int);
    string toString();
private:
    int face,suit;

    string number[13]={"1","2","3","4","5","6","7","8","9","10","11","12","13"};
    string color[4]={"Spade","Heart","Diamond","Club"};




};


#endif // CARD_H_INCLUDED
