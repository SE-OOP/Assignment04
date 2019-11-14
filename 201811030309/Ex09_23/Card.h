#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <string>
using namespace std;

class Card
{
public:
    Card(int, int);
    int getface() const;//return the face of currentCard;
    int getsuit() const;//return the suit of currentCard;
    string toString();
private:
    int face;
    int suit;
    static const string f[13];
    static const string s[4];

};


#endif // CARD_H_INCLUDED
