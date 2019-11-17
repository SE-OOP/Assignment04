#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <string>
using namespace std;
class Card
{
public:
    Card (int, int);
    void setFace(int);
    void setSuit(int);
    int getFace();
    int getSuit();
    string toString();
    static string faceArray[13];
    static string suitArray[4];
private:
    int face;
    int suit;
};

#endif // CARD_H_INCLUDED
