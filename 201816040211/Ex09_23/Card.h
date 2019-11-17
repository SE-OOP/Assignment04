#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <string>

using namespace std;

class Card
{
public:
    static string faces[13];
    static string colours[4];
    Card(int, int);
    void setface(int );
    int getface();
    void setsuit(int );
    int getsuit();
    string toString();
private:
    int face;
    int suit;
};


#endif // CARD_H_INCLUDED
